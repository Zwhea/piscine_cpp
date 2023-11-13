/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:36:20 by twang             #+#    #+#             */
/*   Updated: 2023/11/13 15:11:06 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"

/*---- constructors & destructor ---------------------------------------------*/

PresidentialPardonForm::PresidentialPardonForm( void ) : 
							AForm( "random", false, 25, 5 ), _target( "random" )
{
	// std::cout << GREY << D_CONSTRUCTOR << " ~ from PresidentialPardonForm." << END << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : 
								AForm( target, false, 25, 5 ), _target( target )
{
	
	// std::cout << GREY << _name << CONSTRUCTOR << " ~ from PresidentialPardonForm." << END << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & copy ) : 
					AForm( copy._target, false, 25, 5 ), _target( copy._target )
{
	// std::cout << GREY << C_CONSTRUCTOR << " ~ from PresidentialPardonForm." << END << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	// std::cout << GREY << DESTRUCTOR << " ~ from PresidentialPardonForm." << END << std::endl;
}

/*---- overload operators ----------------------------------------------------*/

PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm const & right_value )
{
	if ( this == &right_value )
		return ( *this );

	return ( *this );
}

std::ostream &	operator<<( std::ostream & os, PresidentialPardonForm const & target )
{
	os << PURPLE << "PresidentialPardonForm's name : " << END;
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
	if ( executor.getGrade( ) > getExecGrade( ) )
		throw AForm::ExecGradeTooLowException( );
	if ( executor.getGrade( ) <= getExecGrade( ) )
	{
		std::cout << YELLOW << executor.getName( );
		std::cout << " has been pardoned by Zaphod Beeblebrox.";
		std::cout << END << std::endl;
	}
}
