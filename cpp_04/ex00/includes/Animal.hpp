/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:12:29 by twang             #+#    #+#             */
/*   Updated: 2023/11/06 14:45:11 by twang            ###   ########.fr       */
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
		~Animal( void );

	protected :

		std::string	type;

};

#endif