/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:12:29 by twang             #+#    #+#             */
/*   Updated: 2023/11/07 17:36:46 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

/*---- includes --------------------------------------------------------------*/

# include "main.h"

/*----------------------------------------------------------------------------*/

class	A_Animal
{
	public :

		A_Animal( void );
		A_Animal( std::string type );
		A_Animal( A_Animal const & copy );
		A_Animal & operator=( A_Animal const & right_value );
		virtual	~A_Animal( void );

		std::string			getType( void ) const;
		virtual void		makeSound( void ) const = 0;
		virtual std::string	getBrainIdea( int place ) const = 0;
		virtual void		setBrainIdea( std::string new_idea, int place ) const = 0;

	protected :

		std::string	type;

};

#endif