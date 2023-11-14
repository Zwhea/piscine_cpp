/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:36:16 by twang             #+#    #+#             */
/*   Updated: 2023/11/14 13:14:09 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

/*---- constructors & destructor ---------------------------------------------*/

ShrubberyCreationForm::ShrubberyCreationForm( void ) : 
						AForm( "shrubbery creation form", 145, 137 ), _target( "random" )
{
	// std::cout << GREY << D_CONSTRUCTOR << " ~ from ShrubberyCreationForm." << END << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : 
						AForm( "shrubbery creation form", 145, 137 ), _target( target )
{
	
	// std::cout << GREY << _name << CONSTRUCTOR << " ~ from ShrubberyCreationForm." << END << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & copy ) : 
						AForm( "shrubbery creation form", 145, 137 ), _target( copy._target )
{
	// std::cout << GREY << C_CONSTRUCTOR << " ~ from ShrubberyCreationForm." << END << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	// std::cout << GREY << DESTRUCTOR << " ~ from ShrubberyCreationForm." << END << std::endl;
}

/*---- getters & setters -----------------------------------------------------*/

std::string	ShrubberyCreationForm::getTarget( void ) const
{
	return ( _target );
}

/*---- overload operators ----------------------------------------------------*/

ShrubberyCreationForm &	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & right_value )
{
	( void )right_value;

	return ( *this );
}

std::ostream &	operator<<( std::ostream & os, ShrubberyCreationForm const & form )
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

void	ShrubberyCreationForm::beSigned( Bureaucrat & target )
{
	if ( getSignedResult( ) != false)
		throw AForm::AlreadySignedException( );
	if ( target.getGrade( ) > getSignGrade( ) )
		throw AForm::SignGradeTooLowException( );
	if ( target.getGrade( ) <= getSignGrade( ) )
		setSignedResult( true );
}

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	if ( getSignedResult( ) != true )
		throw AForm::MissingSignException( );
	if ( executor.getGrade( ) > getExecGrade( ) )
		throw AForm::ExecGradeTooLowException( );
	if ( executor.getGrade( ) <= getExecGrade( ) )
	{
		std::ofstream	out;
		std::string		outfile;

		outfile = getTarget( );
		outfile.append( "_shrubbery" );
		out.open( outfile.c_str( ), std::ios::out );
		out << TREE;
		out.close( );
		std::cout << YELLOW << executor.getName( );
		std::cout << " planted a tree at ";
		std::cout << getTarget( ) << " in " << outfile;
		std::cout << "." << END << std::endl;
	}
}
