/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:25:10 by twang             #+#    #+#             */
/*   Updated: 2023/11/01 16:48:32 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*---- constructor & destructor ----------------------------------------------*/

Fixed::Fixed( void ) : raw_bits( 0 )
{
	return ;
}

Fixed::Fixed( int const integer ) : raw_bits( integer << bits_value )
{
	return ;
}

Fixed::Fixed(float const floating )
{
	raw_bits = roundf(floating * ( 1 << bits_value ));

	return ;
}

Fixed::Fixed( Fixed const & copy )
{
	raw_bits = copy.raw_bits;

	return ;
}

Fixed::~Fixed( void )
{
	return ;
}

/*---- operator overload -----------------------------------------------------*/

Fixed &	Fixed::operator=( Fixed const & op_copy )
{
	if ( this != &op_copy )
		raw_bits = op_copy.getRawBits();

	return ( *this );
}

bool Fixed::operator>( Fixed const & op_copy )
{
	return ( raw_bits > op_copy.getRawBits() );
}

bool Fixed::operator<( Fixed const & op_copy )
{
	return ( raw_bits < op_copy.getRawBits() );
}

bool Fixed::operator>=( Fixed const & op_copy )
{
	return ( raw_bits >= op_copy.getRawBits() );
}

bool Fixed::operator<=( Fixed const & op_copy )
{
	return ( raw_bits <= op_copy.getRawBits() );
}

bool Fixed::operator==( Fixed const & op_copy )
{
	return ( raw_bits == op_copy.getRawBits() );
}

bool Fixed::operator!=( Fixed const & op_copy )
{
	return ( raw_bits != op_copy.getRawBits() );
}

Fixed	Fixed::operator+( Fixed const & op_copy )
{
	return Fixed( (float)( raw_bits + op_copy.raw_bits ) / (float)( 1 << bits_value ) );
}

Fixed	Fixed::operator-( Fixed const & op_copy )
{
	return Fixed( (float)( raw_bits - op_copy.raw_bits ) / (float)( 1 << bits_value ) );
}

Fixed	Fixed::operator*( Fixed const & op_copy )
{
	return Fixed( (float)(( raw_bits * op_copy.raw_bits ) / (float)( 1 << bits_value )) / (float)( 1 << bits_value ) );
}

Fixed	Fixed::operator/( Fixed const & op_copy )
{
	return Fixed( (float)( raw_bits / op_copy.raw_bits ) );
}

Fixed &	Fixed::operator++( void )
{
	raw_bits++;

	return ( *this );
}

Fixed	Fixed::operator++( int )
{
	Fixed	copy;

	copy.raw_bits = raw_bits;
	raw_bits++;

	return ( copy );
}

Fixed &	Fixed::operator--( void )
{
	raw_bits--;

	return ( *this );
}

Fixed	Fixed::operator--( int )
{
	Fixed	copy;

	copy.raw_bits = raw_bits;
	raw_bits--;

	return ( copy );
}


std::ostream &	operator<<( std::ostream & os, Fixed const & value )
{
	os << value.toFloat();

	return ( os );
}

/*---- functions -------------------------------------------------------------*/

int	Fixed::getRawBits( void ) const
{
	return ( raw_bits );
}

void	Fixed::setRawBits( int const raw )
{
	raw_bits = raw;

	return ;
}

int	Fixed::toInt( void )const
{
	return ( raw_bits >> bits_value );
}

float	Fixed::toFloat( void )const
{
	return (( double )raw_bits / ( double )( 1 << bits_value ));
}

Fixed &	Fixed::min( Fixed & a, Fixed & b )
{
	if ( a < b )
		return ( a );
	return ( b );
}

const Fixed &	Fixed::min( Fixed const & a, Fixed const & b )
{
	if ( a.raw_bits < b.raw_bits )
		return ( a );
	return ( b );
}

Fixed &	Fixed::max( Fixed & a, Fixed & b )
{
	if ( a > b )
		return ( a );
	return ( b );
}

const Fixed &	Fixed::max( Fixed const & a, Fixed const & b )
{
	if ( a.raw_bits > b.raw_bits )
		return ( a );
	return ( b );
}
