/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 09:49:34 by twang             #+#    #+#             */
/*   Updated: 2023/11/27 10:24:10 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

/*---- includes --------------------------------------------------------------*/

# include "Array.h"

/*---- templates classes defines ---------------------------------------------*/

template< typename T >
class	Array
{
	public :

		Array< T >( void );
		Array< T >( const unsigned int n );
		Array< T >( Array< T > const & copy );
		Array< T >&	operator=( Array< T > const & right_value );
		T &			operator[]( unsigned int index );
		T &			operator[]( unsigned int index ) const;
		~Array< T >( void );

		std::size_t		size( void ) const;

	private :

		T				*_array;
		unsigned int	_size;

	class	OutOfBoundException : public std::exception
	{

		public :

			virtual const char *what() const throw();

	};
};

/*---- templates functions defines -------------------------------------------*/

/*---- constructors & destructors ----*/

template< typename T >
Array< T >::Array( void )
{
	_size = 0;
	_array = new T[0];
}

template< typename T >
Array< T >::Array( const unsigned int n )
{
	_size = n;
	_array = new T[n];
	for ( unsigned int i = 0; i < n; i++ )
		_array[i] = 0 ;
}

template< typename T >
Array< T >::Array( Array< T > const & copy )
{
	_size = copy._size;
	_array = new T[copy._size];
	for ( unsigned int i = 0; i < copy.size; i++ )
		_array[i] = copy._array[i];
}

template< typename T >
Array< T >::~Array( void )
{
	if ( _array )
		delete[] _array;
}

/*---- operators overload ----*/

template< typename T >
Array< T >&	Array< T >::operator=( Array< T > const & right_value )
{
	if ( _array )
		delete[] _array;

	_size = right_value._size;
	_array = new T[right_value._size];

	for ( unsigned int i = 0; i < right_value._size; i++ )
		_array[i] = right_value._array[i];

	return ( *this );
}

template< typename T >
T&	Array< T >::operator[]( unsigned int index )
{
	if ( index < 0 || index >= _size)
		throw Array::OutOfBoundException( );
	return ( _array[index] );
}

template< typename T >
T&	Array< T >::operator[]( unsigned int index ) const
{
	if ( index < 0 || index >= _size)
		throw Array::OutOfBoundException( );
	return ( _array[index] );
}

/*---- functions ----*/

template< typename T >
std::size_t	Array< T >::size( void ) const
{
	return ( _size );
}

/*---- exceptions ----*/

template< typename T >
const char*	Array< T >::OutOfBoundException::what() const throw()
{
	return ( RED "This index is out of bound." END );
}

#endif