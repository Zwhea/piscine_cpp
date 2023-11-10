/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:07:38 by twang             #+#    #+#             */
/*   Updated: 2023/11/10 16:13:30 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*---- constructors & destructor ---------------------------------------------*/

Bureaucrat::Bureaucrat( void ) :
						_name( "Undefined" ), _grade( 150 )
{
	std::cout << GREY << D_CONSTRUCTOR << " ~ from Bureaucrat." << END << std::endl;
}

Bureaucrat::Bureaucrat( std::string new_name, std::size_t new_grade ) : 
						_name( new_name ), _grade( new_grade )
{
	if ( _grade < 1 )
		throw	Bureaucrat::GradeTooHighException( );
	else if ( _grade > 150 )
		throw	Bureaucrat::GradeTooLowException( );
	std::cout << GREY << _name << CONSTRUCTOR << " ~ from Bureaucrat." << END << std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat const & copy ) : 
						_name( copy._name ), _grade( copy._grade )
{
	std::cout << GREY << C_CONSTRUCTOR << " ~ from Bureaucrat." << END << std::endl;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << GREY << DESTRUCTOR << " ~ from Bureaucrat." << END << std::endl;
}

/*---- overload operators ----------------------------------------------------*/

std::ostream &	operator<<( std::ostream & os, Bureaucrat const & target )
{
	os << target.getName( );
	os << ", bureaucrat grade ";
	os << target.getGrade( );
	os << std::endl;

	return ( os );
}

/*---- getters & setters -----------------------------------------------------*/

std::string	Bureaucrat::getName( void ) const
{
	return ( _name );
}

std::size_t	Bureaucrat::getGrade( void ) const
{
	return ( _grade );
}

/*---- functions -------------------------------------------------------------*/

void	Bureaucrat::increment( void )
{
	_grade--;
	if ( _grade < 1 )
	{
		throw	Bureaucrat::GradeTooHighException( );
	}
}

void	Bureaucrat::decrement( void )
{
	_grade++;
	if ( _grade > 150 )
	{
		throw	Bureaucrat::GradeTooLowException( );
	}
}

void	Bureaucrat::signForm( void ) const
{
	/*
	std::cout << _name << " signed " << form << std::endl;
	std::cout << _name << " couldn't sign " << form << " because ";
	std::cout << reason << std::endl;
	*/
}