/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:18:05 by twang             #+#    #+#             */
/*   Updated: 2023/11/14 13:14:51 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

/*---- constructors & destructor ---------------------------------------------*/

Form::Form( void ) : 
	_name( "Undefined" ), _signed( false ), _sign_grade( 145 ), _exec_grade( 137 )
{
	// std::cout << GREY << D_CONSTRUCTOR << " ~ from Form." << END << std::endl;
}

Form::Form( std::string new_name, std::size_t new_signgrade, std::size_t new_execgrade ) : 
	_name( new_name ), _signed( false ), _sign_grade( new_signgrade ), _exec_grade( new_execgrade )
{
	if ( _exec_grade < 1  || _sign_grade < 1)
		throw	Form::GradeTooHighException( );
	else if ( _exec_grade > 150 || _sign_grade > 150 )
		throw	Form::GradeTooLowException( );

	// std::cout << GREY << _name << CONSTRUCTOR << " ~ from Form." << END << std::endl;
}

Form::Form( Form const & copy ) : 
			_name( copy._name ), _signed( copy._signed ), \
			_sign_grade( copy._sign_grade ), _exec_grade( copy._exec_grade )
{
	// std::cout << GREY << C_CONSTRUCTOR << " ~ from Form." << END << std::endl;
}

Form::~Form( void )
{
	// std::cout << GREY << DESTRUCTOR << " ~ from Form." << END << std::endl;
}

/*---- overload operators ----------------------------------------------------*/

Form &	Form::operator=( Form const & right_value )
{
	( void )right_value;

	return ( *this );
}

std::ostream &	operator<<( std::ostream & os, Form const & target )
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

std::string	Form::getName( void ) const
{
	return ( _name );
}

std::size_t	Form::getSignGrade( void ) const
{
	return ( _sign_grade );
}

std::size_t	Form::getExecGrade( void ) const
{
	return ( _exec_grade );
}

bool	Form::getSignedResult( void ) const
{
	return ( _signed );
}

/*---- functions -------------------------------------------------------------*/

void	Form::beSigned( Bureaucrat & target )
{
	if ( _signed != false)
		throw Form::AlreadySignedException( );
	if ( target.getGrade( ) > _sign_grade )
		throw Form::SignGradeTooLowException( );
	if ( target.getGrade( ) <= _sign_grade )
		_signed = true;
}
