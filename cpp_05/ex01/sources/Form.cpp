/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:18:05 by twang             #+#    #+#             */
/*   Updated: 2023/11/10 16:15:23 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*---- constructors & destructor ---------------------------------------------*/

Form::Form( void ) : 
	_name( "Undefined" ), _sign_grade( 150 ), _exec_grade( 150 ), _signed( false )
{
	std::cout << GREY << D_CONSTRUCTOR << " ~ from Form." << END << std::endl;
}

Form::Form( std::string new_name, std::size_t new_grade ) : 
						_name( new_name ), _grade( new_grade )
{
	if ( _grade < 1 )
		throw	Form::GradeTooHighException( );
	else if ( _grade > 150 )
		throw	Form::GradeTooLowException( );
	std::cout << GREY << _name << CONSTRUCTOR << " ~ from Form." << END << std::endl;
}

Form::Form( Form const & copy ) : 
						_name( copy._name ), _grade( copy._grade )
{
	std::cout << GREY << C_CONSTRUCTOR << " ~ from Form." << END << std::endl;
}

Form::~Form( void )
{
	std::cout << GREY << DESTRUCTOR << " ~ from Form." << END << std::endl;
}

/*---- overload operators ----------------------------------------------------*/

std::ostream &	operator<<( std::ostream & os, Form const & target )
{
	os << target.getName( );
	os << ", Form grade ";
	os << target.getGrade( );
	os << std::endl;

	return ( os );
}

/*---- getters & setters -----------------------------------------------------*/

std::string	Form::getName( void ) const
{
	return ( _name );
}

std::size_t	Form::getGrade( void ) const
{
	return ( _grade );
}

/*---- functions -------------------------------------------------------------*/

