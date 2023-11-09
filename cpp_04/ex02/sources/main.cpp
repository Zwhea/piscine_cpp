/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:24:26 by twang             #+#    #+#             */
/*   Updated: 2023/11/09 14:17:50 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main( void )
{
	//to uncomment if you want to check for the abstract class
	// const A_Animal* a = new A_Animal();
	const A_Animal*	array[4];

	for ( int i = 0; i < 2; i++ )
		array[i] = new Cat();
	for ( int i = 2; i < 4; i++ )
		array[i] = new Dog();

	for ( int i = 0; i < 4; i++ )
	{
		std::cout << array[i]->getType() << " " << std::endl;
		std::cout << array[i]->getBrainIdea( 0 ) << std::endl;
	}

	std::cout << "\n";
	for ( int i = 0; i < 2; i++ )
		std::cout << RED << i << " : " << array[0]->getBrainIdea( i ) << END << std::endl;
	array[0]->setBrainIdea( "I have a new idea !", 0 ); /*change the place if you want to check*/
	for ( int i = 0; i < 2; i++ )
		std::cout << GREEN << i << " : " << array[0]->getBrainIdea( i ) << END << std::endl;

	for ( int i = 0; i < 4; i++ )
		delete array[i];

	return ( 0 );
}
