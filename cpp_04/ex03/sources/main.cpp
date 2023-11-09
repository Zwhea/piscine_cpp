/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:13:54 by twang             #+#    #+#             */
/*   Updated: 2023/11/09 13:02:31 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main( void )
{
	IMateriaSource* spells_book = new MateriaSource( );
	ICharacter* Isko = new Character( "Isko");
	ICharacter* ombre = new Character( "ombre");

	AMateria* first_spell;
	AMateria* second_spell;
	AMateria* third_spell;
	AMateria* fourth_spell;
	AMateria* fifth_spell;
	AMateria* bin;

	spells_book->learnMateria( new Ice( ));
	spells_book->learnMateria( new Cure( ));
	spells_book->learnMateria( new Ice( ));
	spells_book->learnMateria( new Cure( ));
	// spells_book->learnMateria( new Cure( ));

	first_spell = spells_book->createMateria( "ice");
	second_spell = spells_book->createMateria( "cure");
	third_spell = spells_book->createMateria( "ice");
	fourth_spell = spells_book->createMateria( "fire");
	fifth_spell = spells_book->createMateria( "cure");

	Isko->equip( first_spell);
	Isko->equip( second_spell);
	Isko->equip( third_spell);
	Isko->equip( fourth_spell);
	Isko->equip( fifth_spell);

	son_ombre->equip( first_spell);
	son_ombre->equip( second_spell);
	son_ombre->equip( third_spell);
	son_ombre->equip( fourth_spell);

	Isko->unequip( 2);

	Isko->use( 0, *bob);
	// Isko->use( 0, *bob);
	Isko->use( 1, *bob);
	// Isko->use( 3, *bob);
	// Isko->use( 4, *bob);

	delete trash;
	delete bob;
	delete Isko;
	delete spells_book;

	return ( 0 );
}
