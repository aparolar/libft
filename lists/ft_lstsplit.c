/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 09:36:41 by aparolar          #+#    #+#             */
/*   Updated: 2022/04/25 17:11:26 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	**ft_lstsplit(t_list *lst, int (*f)(void *))
{
	t_list	**ret;
	t_list	*last;
	int		nodes;

	if (lst && f)
	{
		nodes = ft_lstiter_count(lst, f);
		ret = ft_calloc(nodes + 2, sizeof(t_list));
		nodes = 0;
		while (lst)
		{
			/*
			last = ft_lstlast(ret[nodes]);
			if (!f(lst->content))
			{
				last = ft_lstnew()
				ft_lstadd_back()
			}
			else
			{
				last = ft_lstnew(ft_calloc(1, sizeof(t_list)));
				ft_lstadd_back(&ret, last);
			}
			lst = lst->next;
			*/
		}
	}
	return (ret);
}
