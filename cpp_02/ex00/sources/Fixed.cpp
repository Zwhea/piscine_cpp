/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:25:10 by twang             #+#    #+#             */
/*   Updated: 2023/10/27 16:35:50 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*---- constructor & destructor ----------------------------------------------*/

Fixed::Fixed( void ) : raw_bits( 0 )
{
	std::cout << GREY << "Default constructor called" << END << std::endl;

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
		raw_bits = getRawBits();

	return ( *this );
}

int		Fixed::getRawBits( void ) const
{
	std::cout << GREY << "getRawBits member function called" << END << std::endl;

	return ( raw_bits );
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << GREY << "setRawBits member function called" << END << std::endl;

	raw_bits = raw;

	return ;
}