/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:34:32 by twang             #+#    #+#             */
/*   Updated: 2023/11/14 11:45:06 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

/*---- includes --------------------------------------------------------------*/

# include "Bureaucrat.hpp"
# include "AForm.hpp"

/*----------------------------------------------------------------------------*/

class	Bureaucrat;
class	AForm;

class	PresidentialPardonForm : public AForm
{

	public :

		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const & copy );
		PresidentialPardonForm & operator=( PresidentialPardonForm const & right_value );
		~PresidentialPardonForm( void );

		std::string	getTarget( void ) const;

		void		beSigned( Bureaucrat & target );
		void		execute( Bureaucrat const & executor ) const;

	private :

		std::string	_target;


};

std::ostream & operator<<( std::ostream & os, PresidentialPardonForm const & form );

#endif