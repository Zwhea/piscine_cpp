/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:29:52 by twang             #+#    #+#             */
/*   Updated: 2023/11/09 13:52:01 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

/*---- includes --------------------------------------------------------------*/

# include "main.h"

/*----------------------------------------------------------------------------*/

class	WrongAnimal
{

	public :

		WrongAnimal( void );
		WrongAnimal( std::string type );
		WrongAnimal( WrongAnimal const & copy );
		WrongAnimal & operator=( WrongAnimal const & right_value );
		virtual	~WrongAnimal( void );

		std::string		getType( void ) const;
		void			makeSound( void ) const;

	protected :

		std::string	type;

};

#endif