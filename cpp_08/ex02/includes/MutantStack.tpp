/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:33:56 by wangthea          #+#    #+#             */
/*   Updated: 2023/11/27 20:51:52 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

/*---- includes --------------------------------------------------------------*/

# include "MutantStack.h"

/*---- templates classes defines ---------------------------------------------*/

template< typename T >
class MutantStack ： public std::stack< T >
{

	private:

	public:

		MutantStack(/* args */);
		MutantStack( MutantStack const & copy );
		MutantStack & operator=( MutantStack const & right_value );
		~MutantStack();

};

/*---- templates functions defines -------------------------------------------*/


#endif