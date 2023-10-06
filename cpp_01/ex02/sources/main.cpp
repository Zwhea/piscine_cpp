/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:26:16 by wangthea          #+#    #+#             */
/*   Updated: 2023/10/06 10:59:47 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*---- librairies ------------------------------------------------------------*/

# include <iostream>

/*---- defines ---------------------------------------------------------------*/

# define BLUE	"\001\033[1;34m\002"
# define GREEN	"\001\033[1;32m\002"
# define PURPLE	"\001\033[1;35m\002"
# define END "\001\033[0m\002"

/*----------------------------------------------------------------------------*/

int main( void )
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << BLUE << "memory address of string\t: " << END;
	std::cout << &string << std::endl;
	std::cout << PURPLE << "memory address held by stringPTR: " << END;
	std::cout << stringPTR << std::endl;
	std::cout << GREEN << "memory address held by stringREF: " << END;
	std::cout << &stringREF << std::endl << std::endl;

	std::cout << BLUE << "string value\t\t\t: " << END;
	std::cout << string << std::endl;
	std::cout << PURPLE << "stringPTR value\t\t\t: " << END;
	std::cout << *stringPTR << std::endl;
	std::cout << GREEN << "stringREF value\t\t\t: " << END;
	std::cout << stringREF << std::endl;

	return (0);
}