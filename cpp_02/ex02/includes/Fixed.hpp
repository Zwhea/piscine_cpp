/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:20:40 by twang             #+#    #+#             */
/*   Updated: 2023/11/01 16:35:48 by twang            ###   ########.fr       */
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

		Fixed &			operator=( Fixed const & op_copy );

		bool			operator>( Fixed const & op_copy );
		bool			operator<( Fixed const & op_copy );
		bool			operator>=( Fixed const & op_copy );
		bool			operator<=( Fixed const & op_copy );
		bool			operator==( Fixed const & op_copy );
		bool			operator!=( Fixed const & op_copy );

		Fixed			operator+( Fixed const & op_copy );
		Fixed			operator-( Fixed const & op_copy );
		Fixed			operator*( Fixed const & op_copy );
		Fixed			operator/( Fixed const & op_copy );

		Fixed &			operator++( void );
		Fixed			operator++( int );
		Fixed &			operator--( void );
		Fixed			operator--( int );

		int				getRawBits( void ) const;
		void			setRawBits( int const raw );
		int				toInt( void ) const;
		float			toFloat( void ) const;

		static Fixed &	min( Fixed & a, Fixed & b );
		static const Fixed &	min( Fixed const & a, Fixed const & b );
		static Fixed &	max( Fixed & a, Fixed & b );
		static const Fixed &	max( Fixed const & a, Fixed const & b );

	private :

		int					raw_bits;
		static const int	bits_value = 8;

};

std::ostream &	operator<<( std::ostream & os, Fixed const & value );

#endif
