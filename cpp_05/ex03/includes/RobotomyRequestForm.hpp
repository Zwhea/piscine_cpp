/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:33:24 by twang             #+#    #+#             */
/*   Updated: 2023/11/13 13:33:32 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

/*---- includes --------------------------------------------------------------*/

# include "Bureaucrat.hpp"
# include "AForm.hpp"

/*----------------------------------------------------------------------------*/

class	Bureaucrat;
class	AForm;

class	RobotomyRequestForm : public AForm
{

	public :

		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( RobotomyRequestForm const & copy );
		RobotomyRequestForm & operator=( RobotomyRequestForm const & right_value );
		~RobotomyRequestForm( void );

		void		beSigned( Bureaucrat & target );
		void		execute( Bureaucrat const & executor ) const;

	private :

		std::string	_target;


};

#endif