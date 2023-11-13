/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:18:17 by twang             #+#    #+#             */
/*   Updated: 2023/11/13 11:30:10 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAFORM_HPP
# define AAFORM_HPP

/*---- includes --------------------------------------------------------------*/

# include "Bureaucrat.hpp"

/*----------------------------------------------------------------------------*/
class	Bureaucrat;

class	AForm
{
	public :

		AForm( void );
		AForm( std::string new_name, bool is_signed, \
					std::size_t new_signgrade, std::size_t new_execgrade );
		AForm( AForm const & copy );
		AForm & operator=( AForm const & right_value );
		~AForm( void );

		std::string	getName( void ) const;
		bool		getSignedResult( void ) const;
		std::size_t	getSignGrade( void ) const;
		std::size_t	getExecGrade( void ) const;

		virtual void		beSigned( Bureaucrat & target ) = 0;

	private :

		std::string const	_name;
		bool				_signed;
		std::size_t const	_sign_grade;
		std::size_t const	_exec_grade;
	
	class	GradeTooHighException : public std::exception
	{
	
		public:

			virtual const char*	what( void ) const throw( )
			{
				return ( RED"The form's grade is too high : max set to 1.\n"END );
			}

	};

	class	GradeTooLowException : public std::exception
	{
	
		public:

			virtual const char*	what( void ) const throw( )
			{
				return ( RED"The form's grade is too low : min set to 150.\n"END );
			}

	};

	class	SignGradeTooLowException : public std::exception
	{
	
		public:

			virtual const char*	what( void ) const throw( )
			{
				return ( "the required grade for signature is too low.\n"END );
			}

	};
	
	class	AlreadySignedException : public std::exception
	{
	
		public:

			virtual const char*	what( void ) const throw( )
			{
				return ( "the form is already signed.\n"END );
			}

	};

};

std::ostream & operator<<( std::ostream & os, AForm const & target );

#endif