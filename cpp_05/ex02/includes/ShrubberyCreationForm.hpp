/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:31:48 by twang             #+#    #+#             */
/*   Updated: 2023/11/14 11:55:43 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

/*---- includes --------------------------------------------------------------*/

# include "Bureaucrat.hpp"
# include "AForm.hpp"

/*----------------------------------------------------------------------------*/

class	Bureaucrat;
class	AForm;

class	ShrubberyCreationForm : public AForm
{

	public :

		ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const & copy );
		ShrubberyCreationForm & operator=( ShrubberyCreationForm const & right_value );
		~ShrubberyCreationForm( void );

		std::string	getTarget( void ) const;

		void		beSigned( Bureaucrat & target );
		void		execute( Bureaucrat const & executor ) const;

	private :

		std::string	_target;


};

std::ostream & operator<<( std::ostream & os, ShrubberyCreationForm const & form );

#endif