/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:08:13 by twang             #+#    #+#             */
/*   Updated: 2023/11/07 17:35:14 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

/*---- includes --------------------------------------------------------------*/

# include "main.h"
# include "Animal.hpp"
# include "Brain.hpp"

/*----------------------------------------------------------------------------*/

class	Cat : public A_Animal
{

	public :

		Cat( void );
		Cat( Cat const & copy );
		Cat & operator=( Cat const & right_value );
		~Cat( void );

		void		makeSound( void ) const;
		std::string	getBrainIdea( int place ) const;
		void		setBrainIdea( std::string new_idea, int place ) const;

	private :

		Brain*	_Brain;

};

#endif