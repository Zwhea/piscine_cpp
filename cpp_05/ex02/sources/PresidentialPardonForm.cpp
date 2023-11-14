/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:36:20 by twang             #+#    #+#             */
/*   Updated: 2023/11/14 13:13:57 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"

/*---- constructors & destructor ---------------------------------------------*/

PresidentialPardonForm::PresidentialPardonForm( void ) : 
							AForm( "presidential pardon form", 25, 5 ), _target( "random" )
{
	// std::cout << GREY << D_CONSTRUCTOR << " ~ from PresidentialPardonForm." << END << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : 
								AForm( "presidential pardon form", 25, 5 ), _target( target )
{
	
	// std::cout << GREY << _name << CONSTRUCTOR << " ~ from PresidentialPardonForm." << END << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & copy ) : 
					AForm( "presidential pardon form", 25, 5 ), _target( copy._target )
{
	// std::cout << GREY << C_CONSTRUCTOR << " ~ from PresidentialPardonForm." << END << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	// std::cout << GREY << DESTRUCTOR << " ~ from PresidentialPardonForm." << END << std::endl;
}

std::string	PresidentialPardonForm::getTarget( void ) const
{
	return ( _target );
}


/*---- overload operators ----------------------------------------------------*/

PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm const & right_value )
{
	( void )right_value;

	return ( *this );
}

std::ostream &	operator<<( std::ostream & os, PresidentialPardonForm const & form )
{
	os << PURPLE << "Form's name : " << END;
	os << form.getName( );
	os << PURPLE << "\nTarget's name : " << END;
	os << form.getTarget( );
	os << PURPLE << "\nSignature's status : " << END;
	os << form.getSignedResult( );
	os << PURPLE << "\nRequired grade for signature : " << END;
	os << form.getSignGrade( );
	os << PURPLE << "\nRequired grade for execution : " << END;
	os << form.getExecGrade( );
	os << std::endl;

	return ( os );
}

/*---- functions -------------------------------------------------------------*/

void	PresidentialPardonForm::beSigned( Bureaucrat & target )
{
	if ( getSignedResult( ) != false)
		throw AForm::AlreadySignedException( );
	if ( target.getGrade( ) > getSignGrade( ) )
		throw AForm::SignGradeTooLowException( );
	if ( target.getGrade( ) <= getSignGrade( ) )
		setSignedResult( true );
}

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	if ( getSignedResult( ) != true )
		throw AForm::MissingSignException( );
	if ( executor.getGrade( ) > getExecGrade( ) )
		throw AForm::ExecGradeTooLowException( );
	if ( executor.getGrade( ) <= getExecGrade( ) )
	{
		std::cout << YELLOW << getTarget( );
		std::cout << " has been pardoned by Zaphod Beeblebrox.";
		std::cout << END << std::endl;
	}
}
