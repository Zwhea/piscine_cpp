/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:23:01 by wangthea          #+#    #+#             */
/*   Updated: 2023/09/12 16:32:14 by wangthea         ###   ########.fr       */
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
		std::array <Contact, 8> Repertory;
	public:
		PhoneBook();
		~PhoneBook();
};
/*---- constructor & destructor ----------------------------------------------*/

PhoneBook::PhoneBook()
{
	std::cout << "default contact contructor called" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "default contact destructor called" << std::endl;
}

#endif