/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_find.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillemi <mvillemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 10:27:33 by mvillemi          #+#    #+#             */
/*   Updated: 2017/04/11 16:28:44 by mvillemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

/*
** Go through a list to find an element
**
** 1st parameter : head node
** 2nd parameter : function pointer for comparison
*/
node			ft_lst_find(node head, int (*f)(node))
{
	node	it;

	if (ft_lst_is_head(head))
		return (0);
	it = head->next;
	while (it != head)
	{
		if (f(it))
			return (it);
		it = it->next;
	}
	return (0);
}
