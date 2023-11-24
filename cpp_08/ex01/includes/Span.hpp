/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:55:35 by twang             #+#    #+#             */
/*   Updated: 2023/11/24 16:26:48 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

/*---- includes --------------------------------------------------------------*/

# include "Span.h"

/*---- class defines ---------------------------------------------------------*/

class	Span
{

	public :

		Span( unsigned int n );
		Span( Span const & copy );
		Span & operator=( Span const & right_value );
		~Span( void );

		void						addNumber( int number );

		unsigned int				shortestSpan( void );
		unsigned int				longestSpan( void );

	private :

		Span( void );
		unsigned int				_n;
		std::vector< int >	_container;

	class	noSpaceException : public std::exception
	{
		public :
			virtual const char	*what() const throw();
	};
	class	noSpanException : public std::exception
	{
		public :
			virtual const char	*what() const throw();
	};

};

#endif