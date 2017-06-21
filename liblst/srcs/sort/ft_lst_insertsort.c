/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_insertsort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillemi <mvillemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 20:13:13 by mvillemi          #+#    #+#             */
/*   Updated: 2017/04/11 16:27:17 by mvillemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/liblst.h"

/*
** Sort a list using insertsort
**
** 1st parameter : list to be sorted
** 2nd parameter : function to compare elements
*/

void				ft_lst_insertsort(node lst, int (*f)(node, node))
{
	node	src;
	node	it;

	if (ft_lst_is_head(lst) || ft_lst_is_single(lst))
		return ;
	src = lst->next;
	while (src->next != lst)
	{
		while (f(src, src->next) <= 0)
			src = src->next;
		if ((it = src->next) == lst)
			break;
		while ((f(src, it) > 0) && (it->next != lst))
			it = it->next;
		if (f(src, it) > 0)
			ft_lst_moveto_next(src, it);
		else
			ft_lst_moveto_prev(src, it);
		src = lst->next;
	}
}