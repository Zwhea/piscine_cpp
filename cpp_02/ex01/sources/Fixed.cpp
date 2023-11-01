/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:25:10 by twang             #+#    #+#             */
/*   Updated: 2023/11/01 14:11:45 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*---- constructor & destructor ----------------------------------------------*/

Fixed::Fixed( void ) : raw_bits( 0 )
{
	std::cout << GREY << "Default constructor called" << END << std::endl;

	return ;
}

Fixed::Fixed( int const integer ) : raw_bits( integer << bits_value )
{
	std::cout << GREY << "Int constructor called" << END << std::endl;

	return ;
}

Fixed::Fixed(float const floating )
{
	std::cout << GREY << "Float constructor called" << END << std::endl;

	raw_bits = roundf(floating * ( 1 << bits_value ));

	return ;
}

Fixed::Fixed( Fixed const & copy )
{
	std::cout << GREY << "Copy constructor called" << END << std::endl;

	raw_bits = copy.raw_bits;

	return ;
}

Fixed::~Fixed( void )
{
	std::cout << GREY << "Default destructor called" << END << std::endl;

	return ;
}

/*---- functions -------------------------------------------------------------*/

Fixed &	Fixed::operator=( Fixed const & op_copy )
{
	std::cout << GREY << "Copy assignment operator called" << END << std::endl;

	if ( this != &op_copy )
		raw_bits = op_copy.getRawBits();

	return ( *this );
}

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

std::ostream &	operator<<( std::ostream & os, Fixed const & value )
{
	os << value.toFloat();

	return ( os );
}
