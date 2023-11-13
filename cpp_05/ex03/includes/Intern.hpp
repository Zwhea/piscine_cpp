/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:47:41 by twang             #+#    #+#             */
/*   Updated: 2023/11/13 15:55:47 by twang            ###   ########.fr       */
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

		AForm	*makeForm( std::string form_name, AForm & target );

};

#endif