/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:18:05 by twang             #+#    #+#             */
/*   Updated: 2023/11/14 13:13:46 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

/*---- constructors & destructor ---------------------------------------------*/

AForm::AForm( void ) : _name( "Undefined" ), _sign_grade( 0 ), _exec_grade( 0 )
{
	_signed = false;
	// std::cout << GREY << D_CONSTRUCTOR << " ~ from AForm." << END << std::endl;
}

AForm::AForm( std::string new_name, std::size_t new_signgrade, std::size_t new_execgrade ) : 
	_name( new_name ), _sign_grade( new_signgrade ), _exec_grade( new_execgrade )
{
	_signed = false;
	// std::cout << GREY << _name << CONSTRUCTOR << " ~ from AForm." << END << std::endl;
}

AForm::AForm( AForm const & copy ) : _name( copy._name ), \
		_sign_grade( copy._sign_grade ), _exec_grade( copy._exec_grade )
{
	_signed = false;
	// std::cout << GREY << C_CONSTRUCTOR << " ~ from AForm." << END << std::endl;
}

AForm::~AForm( void )
{
	// std::cout << GREY << DESTRUCTOR << " ~ from AForm." << END << std::endl;
}

/*---- overload operators ----------------------------------------------------*/

AForm &	AForm::operator=( AForm const & right_value )
{
	( void )right_value;

	return ( *this );
}

std::ostream &	operator<<( std::ostream & os, AForm const & target )
{
	os << PURPLE << "Form's name : " << END;
	os << target.getName( );
	os << PURPLE << "\nSignature's status : " << END;
	os << target.getSignedResult( );
	os << PURPLE << "\nRequired grade for signature : " << END;
	os << target.getSignGrade( );
	os << PURPLE << "\nRequired grade for execution : " << END;
	os << target.getExecGrade( );
	os << std::endl;

	return ( os );
}

/*---- getters & setters -----------------------------------------------------*/

std::string	AForm::getName( void ) const
{
	return ( _name );
}

std::size_t	AForm::getSignGrade( void ) const
{
	return ( _sign_grade );
}

std::size_t	AForm::getExecGrade( void ) const
{
	return ( _exec_grade );
}

bool	AForm::getSignedResult( void ) const
{
	return ( _signed );
}

void	AForm::setSignedResult( bool is_signed )
{
	_signed = is_signed;
}
