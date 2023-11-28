/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:54:38 by twang             #+#    #+#             */
/*   Updated: 2023/11/28 09:11:58 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*---- constructors & destructor ---------------------------------------------*/

Span::Span( unsigned int n ) : _n( n ) {}

Span::Span( Span const & copy ) : _n( copy._n ), \
				_container( std::vector<int>( copy._container ) ) {}

Span::~Span( void ) {}

/*---- operator overload -----------------------------------------------------*/

Span & Span::operator=( Span const & right_value ) 
{
	if ( this == &right_value )
		return ( *this );

	_n = right_value._n;
	_container = right_value._container;

	return ( *this );
}

/*---- exceptions defines ----------------------------------------------------*/

const char*	Span::noSpanException::what() const throw()
{
	return ( RED "No span can be found." END );
}

const char*	Span::noSpaceException::what() const throw()
{
	return ( RED "No more space in this container." END );
}

/*---- functions -------------------------------------------------------------*/

void	Span::addNumber( int number )
{
	if ( _container.size() >= _n )
		throw noSpaceException();

	_container.push_back( number );
}

unsigned int	Span::shortestSpan( void )
{
	if ( _container.size() < 2 )
		throw noSpanException();

	std::vector< int >::iterator	i;
	std::vector< int >::iterator	j;
	int	min = abs(_container[0] - _container[1]);

	for ( i = _container.begin(); i != _container.end() - 1; i++ )
		for ( j = i + 1; j != _container.end(); j++ )
			min = std::min( abs( *i - *j ), min );

	return ( min );
}

unsigned int	Span::longestSpan( void )
{
	if ( _container.size() < 2 )
		throw noSpanException();

	std::vector< int >::iterator	min;
	std::vector< int >::iterator	max;

	min = std::min_element( _container.begin(), _container.end() );
	max = std::max_element( _container.begin(), _container.end() );

	int	result = *max - *min;

	return ( result );
}

void	Span::fillContainer( std::vector< int >::iterator start, std::vector< int >::iterator end )
{
	if ( ( end - start ) + _container.size( ) >= _n )
		throw noSpaceException( );

	for ( ; start != end ; ++start )
	{
		// std::cout << *start << std::endl;
		_container.push_back( *start );
	}
}
