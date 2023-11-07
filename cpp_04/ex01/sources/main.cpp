/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:24:26 by twang             #+#    #+#             */
/*   Updated: 2023/11/07 16:06:08 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main( void )
{
	const Animal*	array[10];

	for ( int i = 0; i < 5; i++ )
		array[i] = new Cat();
	for ( int i = 5; i < 10; i++ )
		array[i] = new Dog();

	for ( int i = 0; i < 10; i++ )
	{
		std::cout << array[i]->getType() << " " << std::endl;
		std::cout << array[i]->getBrainIdea( 0 ) << std::endl;
	}

	std::cout << array[0]->getBrainIdea( 1 ) << std::endl;
	std::cout << array[0]->getBrainIdea( 0 ) << std::endl;
	array[0]->setBrainIdea( "I have a new idea !", 0 );
	std::cout << array[0]->getBrainIdea( 0 ) << std::endl;
	std::cout << array[0]->getBrainIdea( 1 ) << std::endl;

	for ( int i = 0; i < 10; i++ )
		delete array[i];

	return ( 0 );
}
