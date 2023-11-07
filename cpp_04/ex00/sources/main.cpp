/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:24:26 by twang             #+#    #+#             */
/*   Updated: 2023/11/07 13:11:34 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main( void )
{
	const Animal*		meta = new Animal();
	const Animal*		i = new Cat();
	const Animal*		j = new Dog();
	const WrongAnimal*	w_meta = new WrongAnimal();
	const WrongAnimal*	w_i = new WrongCat();

	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << w_i->getType() << " " << std::endl;

	meta->makeSound();
	i->makeSound();
	j->makeSound();
	w_meta->makeSound();
	w_i->makeSound();

	delete meta;
	delete i;
	delete j;
	delete w_meta;
	delete w_i;

	return ( 0 );
}
