/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bpa_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:11:45 by aparolar          #+#    #+#             */
/*   Updated: 2022/04/25 12:25:35 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_lstiter_bpa_if(t_list *lst, int (*f)(void *, void *, void *))
{
	t_list	*before;
	t_list	*after;

	if (!lst || !f)
		return (0);
	before = NULL;
	while (lst)
	{
		after = lst->next;
		if (before && after
			&& f(before->content, lst->content, after->content))
			return (0);
		else if (!before && !after && f(NULL, lst->content, NULL))
			return (0);
		else if (!before && f(NULL, lst->content, after->content))
			return (0);
		else if (!after && f(before->content, lst->content, NULL))
			return (0);
		before = lst;
		lst = lst->next;
	}
	return (1);
}
