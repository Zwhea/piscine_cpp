/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:23:01 by wangthea          #+#    #+#             */
/*   Updated: 2023/09/22 13:29:30 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

/*---- librairies ------------------------------------------------------------*/

# include "prints.hpp"
# include "contact.hpp"

/*---- defines ---------------------------------------------------------------*/

# define POLLUX 1

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

class PhoneBook
{
	private:
		int		limit;
		Contact	Repertory[8];
	public:
		PhoneBook();
		~PhoneBook();
		bool	EmptyPhoneBook();
		void	AddContact(int Index);
		void	SearchContact(int Index);
		void	ExitPhoneBook(int Index);
		void	PrintRepertory();
		void	PrintDetail(int index);
};

/*---- structures ------------------------------------------------------------*/

typedef struct s_options	t_options;

struct s_options
{
	std::string	Keyword;
	void		(PhoneBook::*Function)(int);
};

#endif