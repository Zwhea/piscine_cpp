/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:35:24 by wangthea          #+#    #+#             */
/*   Updated: 2023/09/26 17:08:28 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

/*---- librairies ------------------------------------------------------------*/

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>
# include <sstream>

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

using std::cout;
using std::endl;

#endif