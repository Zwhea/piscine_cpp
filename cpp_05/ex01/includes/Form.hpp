/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:18:17 by twang             #+#    #+#             */
/*   Updated: 2023/11/10 15:34:40 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class	Form
{
	public :

		Form( void );
		Form( std::string new_name, std::size_t new_gradsign, \
						std::size_t new_gradexec, bool is_signed );
		Form( Form const & copy );
		Form & operator=( Form const & right_value );
		~Form( void );

		std::string	getName( void ) const;
		std::size_t	getSignGrade( void ) const;
		std::size_t	getExecGrade( void ) const;
		bool		getSignedResult( void ) const;

		void		beSigned( Bureaucrat & target );

	private :

		std::string const	_name;
		std::size_t const	_sign_grade;
		std::size_t const	_exec_grade;
		bool				_signed;
	
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

};

std::ostream & operator<<( std::ostream & os, Bureaucrat const & target );

#endif