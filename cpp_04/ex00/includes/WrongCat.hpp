/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:24:07 by twang             #+#    #+#             */
/*   Updated: 2023/11/07 13:12:42 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

/*---- includes --------------------------------------------------------------*/

# include "main.h"
# include "WrongAnimal.hpp"

/*----------------------------------------------------------------------------*/

class	WrongCat : public WrongAnimal
{

	public :

		WrongCat( void );
		WrongCat( WrongCat const & copy );
		WrongCat & operator=( WrongCat const & right_value );
		~WrongCat( void );

		void	makeSound( void ) const;

};

#endif