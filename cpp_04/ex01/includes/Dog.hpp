/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:15:35 by twang             #+#    #+#             */
/*   Updated: 2023/11/07 14:27:58 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

/*---- includes --------------------------------------------------------------*/

# include "main.h"
# include "Animal.hpp"
# include "Brain.hpp"

/*----------------------------------------------------------------------------*/

class	Dog : public Animal
{

	public :

		Dog( void );
		Dog( Dog const & copy );
		Dog & operator=( Dog const & right_value );
		~Dog( void );

		void	makeSound( void ) const;

	private :

		Brain*	_Brain;

};

#endif