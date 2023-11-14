/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:36:13 by twang             #+#    #+#             */
/*   Updated: 2023/11/14 13:13:22 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"

/*---- constructors & destructor ---------------------------------------------*/

RobotomyRequestForm::RobotomyRequestForm( void ) : 
						AForm( "robotomy request form", 72, 45 ), _target( "random" )
{
	// std::cout << GREY << D_CONSTRUCTOR << " ~ from RobotomyRequestForm." << END << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : 
						AForm( "robotomy request form", 72, 45 ), _target( target )
{
	
	// std::cout << GREY << _name << CONSTRUCTOR << " ~ from RobotomyRequestForm." << END << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & copy ) : 
						AForm( "robotomy request form", 72, 45 ), _target( copy._target )
{
	// std::cout << GREY << C_CONSTRUCTOR << " ~ from RobotomyRequestForm." << END << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	// std::cout << GREY << DESTRUCTOR << " ~ from RobotomyRequestForm." << END << std::endl;
}

/*---- getters & setters -----------------------------------------------------*/

std::string	RobotomyRequestForm::getTarget( void ) const
{
	return ( _target );
}

/*---- overload operators ----------------------------------------------------*/

RobotomyRequestForm &	RobotomyRequestForm::operator=( RobotomyRequestForm const & right_value )
{
	( void )right_value;

	return ( *this );
}

std::ostream &	operator<<( std::ostream & os, RobotomyRequestForm const & form )
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

void	RobotomyRequestForm::beSigned( Bureaucrat & target )
{
	if ( getSignedResult( ) != false)
		throw AForm::AlreadySignedException( );
	if ( target.getGrade( ) > getSignGrade( ) )
		throw AForm::SignGradeTooLowException( );
	if ( target.getGrade( ) <= getSignGrade( ) )
		setSignedResult( true );
}

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	if ( getSignedResult( ) != true )
		throw AForm::MissingSignException( );
	if ( executor.getGrade( ) > getExecGrade( ) )
		throw AForm::ExecGradeTooLowException( );
	if ( executor.getGrade( ) <= getExecGrade( ) )
	{
		std::cout << YELLOW << "* Makes some drilling noises *\n";
		srand( time( NULL ) );
		if ( std::rand( ) % 2 == 0 )
		{
			std::cout << getTarget( );
			std::cout << " has been robotomized successfully.";
			std::cout << END << std::endl;
		}
		else
		{
			std::cout << getTarget( );
			std::cout << " robotomization failed.";
			std::cout << END << std::endl;
		}
	}
}
