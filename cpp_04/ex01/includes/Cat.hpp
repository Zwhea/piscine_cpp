/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:08:13 by twang             #+#    #+#             */
/*   Updated: 2023/11/09 14:15:02 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

/*---- includes --------------------------------------------------------------*/

# include "main.h"
# include "Animal.hpp"
# include "Brain.hpp"

/*----------------------------------------------------------------------------*/

class	Cat : public Animal
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