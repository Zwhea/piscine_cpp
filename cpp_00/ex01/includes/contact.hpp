/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:12:59 by wangthea          #+#    #+#             */
/*   Updated: 2023/09/12 14:15:12 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

/*---- librairies ------------------------------------------------------------*/

# include <iostream>
# include <string>
# include <array>

/*---- class defines ---------------------------------------------------------*/

class Contact
{
	private:
		int			index;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
		Contact();
		~Contact();
		void	Contact::SetContact(Contact New);
};

/*---- constructor & destructor ----------------------------------------------*/

Contact::Contact()
{
	std::cout << "default contact contructor called" << std::endl;
}

Contact::~Contact()
{
	std::cout << "default contact destructor called" << std::endl;
}

#endif