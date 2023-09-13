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
# include <iomanip>
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
		void	SetContact(int Index);
		void	PrintContacts();
		void	PrintContact();
};

/*---- constructor & destructor ----------------------------------------------*/

#endif