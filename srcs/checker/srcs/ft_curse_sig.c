/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_curse_sig.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillemi <mvillemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 18:58:14 by mvillemi          #+#    #+#             */
/*   Updated: 2017/05/10 11:39:33 by mvillemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_curse_manager	*ft_curse_sig(void)
{
	static t_curse_manager *p = 0;

	if (0 == p)
		p = (t_curse_manager *)ft_memalloc(sizeof(*p));
	return (p);
}

t_curse_manager	*ft_score_sig(void)
{
	static t_curse_manager *p = 0;

	if (!p)
		p = (t_curse_manager *)ft_memalloc(sizeof(*p));
	return (p);
}

void			ft_del_sig(void)
{
	t_curse_manager	*p;

	p = ft_curse_sig();
	nocbreak();
	echo();
	keypad(stdscr, false);
  	nodelay(stdscr, false);
  	nocbreak();
  	echo();
  	endwin();
	delwin(p->win);
	ft_memdel((void **)&p);
}
