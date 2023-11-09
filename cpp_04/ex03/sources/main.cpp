/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:13:54 by twang             #+#    #+#             */
/*   Updated: 2023/11/09 13:43:29 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main( void )
{
	ICharacter* Isko = new Character( "Isko" );
	IMateriaSource* Isko_spells_book = new MateriaSource( );
	ICharacter* ombre = new Character( "ombre" );
	IMateriaSource* ombre_spells_book = new MateriaSource( );

	AMateria* first_spell;
	AMateria* second_spell;
	AMateria* third_spell;
	AMateria* fourth_spell;

	AMateria* fifth_spell;
	AMateria* sixth_spell;
	AMateria* seventh_spell;
	AMateria* eigth_spell;

	AMateria* bin = NULL;

	Isko_spells_book->learnMateria( new Ice( ) );
	Isko_spells_book->learnMateria( new Cure( ) );
	Isko_spells_book->learnMateria( new Ice( ) );
	Isko_spells_book->learnMateria( new Cure( ) );
	Isko_spells_book->learnMateria( new Ice( ) );

	ombre_spells_book->learnMateria( new Ice( ) );
	ombre_spells_book->learnMateria( new Cure( ) );
	ombre_spells_book->learnMateria( new Ice( ) );
	ombre_spells_book->learnMateria( new Cure( ) );

	first_spell = Isko_spells_book->createMateria( "ice" );
	second_spell = Isko_spells_book->createMateria( "cure" );
	bin = second_spell;
	third_spell = Isko_spells_book->createMateria( "ice" );
	fourth_spell = Isko_spells_book->createMateria( "fire" );

	fifth_spell = ombre_spells_book->createMateria( "ice" );
	sixth_spell = ombre_spells_book->createMateria( "cure" );
	seventh_spell = ombre_spells_book->createMateria( "ice" );
	eigth_spell = ombre_spells_book->createMateria( "cure" );

	Isko->equip( first_spell );
	Isko->equip( second_spell );
	Isko->equip( third_spell );
	Isko->equip( fourth_spell );

	ombre->equip( fifth_spell );
	ombre->equip( sixth_spell );
	ombre->equip( seventh_spell );
	ombre->equip( eigth_spell );

	Isko->use( 0, *ombre );
	ombre->use( 0, *Isko );

	ombre->use( 1, *ombre );
	Isko->unequip( 1 );
	Isko->use( 1, *ombre );

	Isko->use( 2, *ombre );
	ombre->use( 2, *ombre );

	Isko->use( 3, *ombre );
	ombre->use( 3, *ombre );

	delete Isko;
	delete ombre;
	delete Isko_spells_book;
	delete ombre_spells_book;
	if ( bin )
		delete bin;

	return ( 0 );
}
