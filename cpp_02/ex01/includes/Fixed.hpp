/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:20:40 by twang             #+#    #+#             */
/*   Updated: 2023/11/01 13:15:18 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

/*---- includes --------------------------------------------------------------*/

# include "Fixed.h"

/*---- class defines ---------------------------------------------------------*/

class	Fixed
{

	public :

		Fixed( void );
		Fixed( int const integer );
		Fixed( float const floating );
		Fixed( Fixed const & copy );
		~Fixed( void );

		Fixed & operator=( Fixed const & op_copy );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		int		toInt( void ) const;
		float	toFloat( void ) const;

	private :

		int					raw_bits;
		static const int	bits_value = 8;

};

std::ostream & operator<<( std::ostream & os, Fixed const & value);

#endif

// Default constructor called

// Int constructor called
// Float constructor called

// Copy constructor called
// Copy assignment operator called
// Float constructor called
// Copy assignment operator called
// Destructor called

// a is 1234.43
// b is 10
// c is 42.4219
// d is 10

// a is 1234 as integer
// b is 10 as integer
// c is 42 as integer
// d is 10 as integer

// Destructor called
// Destructor called
// Destructor called
// Destructor called
