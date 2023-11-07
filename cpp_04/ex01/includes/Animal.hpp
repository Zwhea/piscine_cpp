/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:12:29 by twang             #+#    #+#             */
/*   Updated: 2023/11/07 12:58:34 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

/*---- includes --------------------------------------------------------------*/

# include "main.h"

/*----------------------------------------------------------------------------*/

class	Animal
{
	public :

		Animal( void );
		Animal( std::string type );
		Animal( Animal const & copy );
		Animal & operator=( Animal const & right_value );
		virtual	~Animal( void );

		std::string		getType( void ) const;
		virtual void	makeSound( void ) const;

	protected :

		std::string	type;

};

#endif