/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bpa_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:11:45 by aparolar          #+#    #+#             */
/*   Updated: 2022/04/25 12:03:54 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_lstiter_bpa_if(t_list *lst, int (*f)(void *, void *, void *))
{
	t_list	*before;
	t_list	*after;

	if (lst && f)
	{
		before = NULL;
		while (lst)
		{
			after = lst->next->content;
			if (before && after
				&& f(before->content, lst->content, after->content))
				return (1);
			else if (!before && !after && f(NULL, lst->content, NULL))
				return (1);
			else if (!before && f(NULL, lst->content, after->content))
				return (1);
			else if (!after && f(before->content, lst->content, NULL))
				return (1);
			before = lst;
			lst = lst->next;
			after = lst->next;
		}
	}
	return (0);
}
