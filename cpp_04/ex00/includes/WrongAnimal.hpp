/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:29:52 by twang             #+#    #+#             */
/*   Updated: 2023/11/07 09:32:34 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

class	WrongAnimal
{
	public :

		WrongAnimal( void );
		WrongAnimal( WrongAnimal const & copy );
		WrongAnimal & operator=( WrongAnimal const & right_value );
		~WrongAnimal( void );
};

#endif