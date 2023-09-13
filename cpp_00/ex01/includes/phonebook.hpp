/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:23:01 by wangthea          #+#    #+#             */
/*   Updated: 2023/09/13 16:46:36 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

/*---- librairies ------------------------------------------------------------*/

# include "contact.hpp"

/*---- defines ---------------------------------------------------------------*/

# define POLLUX 1

/*---- class defines ---------------------------------------------------------*/

class PhoneBook
{
	private:
		int						limit;
		std::array <Contact, 8>	Repertory;
	public:
		PhoneBook();
		~PhoneBook();
		void	AddContact(int Index);
		void	PrintRepertory();
		void	PrintDetail(int index);
};
/*---- constructor & destructor ----------------------------------------------*/

#endif