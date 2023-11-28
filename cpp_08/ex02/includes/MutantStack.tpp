	// std::cout << BLUE << *(start + 1) << std::endl;
	// std::cout << RED << *(end - 1) << std::endl;
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:33:56 by wangthea          #+#    #+#             */
/*   Updated: 2023/11/28 08:31:50 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

/*---- includes --------------------------------------------------------------*/

# include "MutantStack.h"

/*---- templates classes defines ---------------------------------------------*/

template< typename T >
class MutantStack : public std::stack< T >
{

	public:

		MutantStack< T >( void );
		MutantStack< T >( MutantStack< T > const & copy );
		MutantStack< T >& operator=( MutantStack< T > const & right_value );
		~MutantStack< T >( void );

		typedef typename std::stack< T >::container_type::iterator iterator;
		typedef typename std::stack< T >::container_type::const_iterator const_iterator;

		iterator		begin( void ) { return ( this->c.begin( ) ); };
		iterator		end( void ) { return ( this->c.end( ) ); };
		iterator		rbegin( void ) { return ( this->c.rbegin( ) ); };
		iterator		rend( void ) { return ( this->c.rend( ) ); };

		const_iterator	cbegin( void ) const { return ( this->c.cbegin() ); };
		const_iterator	cend( void ) const { return ( this->c.cend() ); };
		const_iterator	crbegin( void ) const { return ( this->c.crbegin() ); };
		const_iterator	crend( void ) const { return ( this->c.crend() ); };

		void			displayStatus ( void );
		void			displayStack ( MutantStack< T >::iterator start, MutantStack< T >::iterator end );

};

/*---- templates functions defines -------------------------------------------*/

/*---- constructors & destructors ----*/

template< typename T >
MutantStack< T >::MutantStack( void ) : std::stack< T > ( ){ }

template< typename T >
MutantStack< T >::MutantStack( MutantStack< T > const & copy ) : std::stack< T >(copy)
{
	this->c = copy.c;
}

template< typename T >
MutantStack< T >::~MutantStack( void ) { }

/*---- operators overload ----*/

template< typename T >
MutantStack< T >& MutantStack< T >::operator=( MutantStack< T > const & right_value )
{
	if ( this == &right_value )
		return ( *this );

	this->c = right_value.c;

	return (*this);
}

template< typename T >
void	MutantStack< T >::displayStatus ( void )
{
	std::cout << std::endl;
	std::cout << "Container status : empty : ";
	std::cout << GREEN << this->empty() << END;
	std::cout << " | size : ";
	std::cout << GREEN << this->size() << END;
	if ( !this->empty() )
	{
		std::cout << " | stack on top : ";
		std::cout << GREEN << this->top() << END;
	}
	std::cout << std::endl;
}

template< typename T >
void	MutantStack< T >::displayStack ( MutantStack< T >::iterator start, MutantStack< T >::iterator end )
{
	int i = 0;

	std::cout << std::endl;
	for ( ; start != end; ++start )
	{
		std::cout << "[ " << i << " ] : ";
		std::cout << PURPLE << *start << END << std::endl;
	}
	std::cout << std::endl;
}

#endif