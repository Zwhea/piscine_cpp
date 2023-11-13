/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:36:16 by twang             #+#    #+#             */
/*   Updated: 2023/11/13 15:34:48 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

/*---- constructors & destructor ---------------------------------------------*/

ShrubberyCreationForm::ShrubberyCreationForm( void ) : 
						AForm( "random", false, 145, 137 ), _target( "random" )
{
	// std::cout << GREY << D_CONSTRUCTOR << " ~ from ShrubberyCreationForm." << END << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : 
						AForm( target, false, 145, 137 ), _target( target )
{
	
	// std::cout << GREY << _name << CONSTRUCTOR << " ~ from ShrubberyCreationForm." << END << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & copy ) : 
						AForm( copy._target, false, 145, 137 ), _target( copy._target )
{
	// std::cout << GREY << C_CONSTRUCTOR << " ~ from ShrubberyCreationForm." << END << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	// std::cout << GREY << DESTRUCTOR << " ~ from ShrubberyCreationForm." << END << std::endl;
}

/*---- overload operators ----------------------------------------------------*/

ShrubberyCreationForm &	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & right_value )
{
	if ( this == &right_value )
		return ( *this );

	return ( *this );
}

std::ostream &	operator<<( std::ostream & os, ShrubberyCreationForm const & target )
{
	os << PURPLE << "ShrubberyCreationForm's name : " << END;
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
	if ( executor.getGrade( ) > getExecGrade( ) )
		throw AForm::ExecGradeTooLowException( );
	if ( executor.getGrade( ) <= getExecGrade( ) )
	{
		std::ofstream	out;
		std::string		outfile;

		outfile = executor.getName( );
		outfile.append( "_shrubbery" );
		out.open( outfile.c_str( ), std::ios::out );
		out << TREE;
		out.close( );
	}
}
