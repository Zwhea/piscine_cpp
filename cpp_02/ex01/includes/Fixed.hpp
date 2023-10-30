/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:20:40 by twang             #+#    #+#             */
/*   Updated: 2023/10/27 16:31:17 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

/*---- includes --------------------------------------------------------------*/

# include "Fixed.h"

/*---- class defines ---------------------------------------------------------*/

class	Fixed
{

	private :

		int					raw_bits;
		static const int	bits_value;

	public :

		Fixed( void );
		Fixed( Fixed const & copy );
		Fixed & operator=( Fixed const & op_copy );
		~Fixed( void );
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

};

#endif