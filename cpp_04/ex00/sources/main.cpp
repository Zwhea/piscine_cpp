/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:24:26 by twang             #+#    #+#             */
/*   Updated: 2023/11/06 13:34:22 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main( void )
{
	const Animal*	meta = new Animal();
	const Animal*	i = new Cat();
	const Animal*	j = new Dog();

	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;

	meta->makeSound();
	i->makeSound();
	j->makeSound();

	return ( 0 );
}
