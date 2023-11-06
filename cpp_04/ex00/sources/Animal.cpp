/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:23:33 by twang             #+#    #+#             */
/*   Updated: 2023/11/06 15:32:11 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*---- constructors & destructor ---------------------------------------------*/

Animal::Animal( void ) : type( "Undefined")
{
	std::cout << GREY << D_CONSTRUCTOR << END << std::endl;
}
Animal::Animal( std::string type ) : type( type )
{
	std::cout << GREY << D_CONSTRUCTOR << END << std::endl;
}

/*---- affectation operator overloading --------------------------------------*/
/*---- functions -------------------------------------------------------------*/
