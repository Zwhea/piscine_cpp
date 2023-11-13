/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:18:05 by twang             #+#    #+#             */
/*   Updated: 2023/11/13 11:37:36 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

/*---- constructors & destructor ---------------------------------------------*/

AForm::AForm( void ) : 
	_name( "Undefined" ), _signed( false ), _sign_grade( 145 ), _exec_grade( 137 )
{
	// std::cout << GREY << D_CONSTRUCTOR << " ~ from AForm." << END << std::endl;
}

AForm::AForm( std::string new_name, bool is_signed, \
					std::size_t new_signgrade, std::size_t new_execgrade ) : 
			_name( new_name ), _signed( false ), \
					_sign_grade( new_signgrade ), _exec_grade( new_execgrade )
{
	( void )is_signed;

	if ( _exec_grade < 1  || _sign_grade < 1)
		throw	AForm::GradeTooHighException( );
	else if ( _exec_grade > 150 || _sign_grade > 150 )
		throw	AForm::GradeTooLowException( );

	// std::cout << GREY << _name << CONSTRUCTOR << " ~ from AForm." << END << std::endl;
}

AForm::AForm( AForm const & copy ) : 
			_name( copy._name ), _signed( copy._signed ), \
			_sign_grade( copy._sign_grade ), _exec_grade( copy._exec_grade )
{
	// std::cout << GREY << C_CONSTRUCTOR << " ~ from AForm." << END << std::endl;
}

AForm::~AForm( void )
{
	// std::cout << GREY << DESTRUCTOR << " ~ from AForm." << END << std::endl;
}

/*---- overload operators ----------------------------------------------------*/

AForm &	AForm::operator=( AForm const & right_value )
{
	if ( this == &right_value )
		return ( *this );

	return ( *this );
}

std::ostream &	operator<<( std::ostream & os, AForm const & target )
{
	os << PURPLE << "AForm's name : " << END;
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

/*---- functions -------------------------------------------------------------*/

void	AForm::beSigned( Bureaucrat & target )
{
	if ( _signed != false)
		throw AForm::AlreadySignedException( );
	if ( target.getGrade( ) > _sign_grade )
		throw AForm::SignGradeTooLowException( );
	if ( target.getGrade( ) <= _sign_grade )
		_signed = true;
}
