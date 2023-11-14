/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:47:41 by twang             #+#    #+#             */
/*   Updated: 2023/11/14 10:27:58 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

/*---- includes --------------------------------------------------------------*/

# include "Bureaucrat.h"
# include "AForm.hpp"

/*----------------------------------------------------------------------------*/

class	AForm;

class	Intern
{

	public :

		Intern( void );
		Intern( Intern const & copy );
		Intern & operator=( Intern const & right_value );
		~Intern( void );

		AForm	*PresidentialForm( std::string target );
		AForm	*RobotomyForm( std::string target );
		AForm	*ShrubberyForm( std::string target );

		AForm	*makeForm( std::string form_name, std::string form_target );

};

/*---- structures ------------------------------------------------------------*/

typedef struct s_options	t_options;

struct s_options
{

	std::string	keyWord;
	AForm*		(Intern::*Function)(std::string);

};

#endif