/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:12:29 by twang             #+#    #+#             */
/*   Updated: 2023/11/07 09:27:12 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

class	Animal
{
	public :

		Animal( void );
		Animal( std::string type );
		Animal( Animal const & copy );
		Animal & operator=( Animal const & right_value );
		~Animal( void );

		std::string	getType( void );
		void		makeSound( void );

	protected :

		std::string	type;

};

#endif