/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:24:26 by twang             #+#    #+#             */
/*   Updated: 2023/11/21 15:13:11 by twang            ###   ########.fr       */
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

	Cat*	a = new Cat();
	Cat*	b = new Cat();
	*b = *a;
	b->setBrainIdea( "I have a new idea !", 0 ); /*change the place if you want to check*/
	std::cout << "\n";
	for ( int i = 0; i < 100; i++ )
		std::cout << RED << i << " : " << a->getBrainIdea(i) << END << std::endl;
	for ( int i = 0; i < 100; i++ )
		std::cout << GREEN << i << " : " << b->getBrainIdea(i) << END << std::endl;
	

	for ( int i = 0; i < 10; i++ )
		delete array[i];

	delete a;
	delete b;

	return ( 0 );
}
