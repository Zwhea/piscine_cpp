/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:22:39 by twang             #+#    #+#             */
/*   Updated: 2023/10/26 15:58:05 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

/*---- librairies ------------------------------------------------------------*/

# include <iostream>

/*---- defines ---------------------------------------------------------------*/

# define BLUE	"\001\033[1;34m\002"
# define RED	"\001\033[1;31m\002"
# define YELLOW "\001\033[1;33m\002"
# define GREEN	"\001\033[1;32m\002"
# define PURPLE	"\001\033[1;35m\002"
# define GREY	"\001\033[1;30m\002"

# define END "\001\033[0m\002"
# define BOLD "\001\033[1m\002"
# define ITALIC "\001\033[3m\002"
# define UNDERLINE "\001\033[4m\002"
# define DEL_LINE "\001\033[2K\r\002"

/*---- class defines ---------------------------------------------------------*/

class	Harl
{

	private:

		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

	public:

		Harl( void );
		~Harl( void );
		void	complain( std::string level );

};

/*---- structures ------------------------------------------------------------*/

typedef struct s_errors	t_errors;

struct s_errors
{
	std::string	complain_key;
	void		(Harl::*function)( void );
};

#endif