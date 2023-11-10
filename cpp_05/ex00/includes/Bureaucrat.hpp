/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:45:02 by twang             #+#    #+#             */
/*   Updated: 2023/11/10 14:18:17 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

/*---- includes --------------------------------------------------------------*/

# include "Bureaucrat.h"

/*----------------------------------------------------------------------------*/

class	Bureaucrat
{

	public :

		Bureaucrat( void );
		Bureaucrat( std::string new_name, std::size_t new_grade );
		Bureaucrat( Bureaucrat const & copy );
		Bureaucrat & operator=( Bureaucrat const & right_value );
		~Bureaucrat( void );

		std::string	getName( void ) const;
		std::size_t	getGrade( void ) const;

		void		increment( void );
		void		decrement( void );

	private :

		std::string const	_name;
		std::size_t			_grade;

	class	GradeTooHighException : public std::exception
	{

		public:

			virtual const char*	what( void ) const throw( )
			{
				return ( RED"The grade is too high : max set to 1.\n"END );
			}

	};

	class	GradeTooLowException : public std::exception
	{

		public:

			virtual const char*	what( void ) const throw( )
			{
				return ( GREEN"The grade is too low : min set to 150.\n"END );
			}

	};

};

std::ostream & operator<<( std::ostream & os, Bureaucrat const & target );

#endif