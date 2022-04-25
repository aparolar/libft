/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 09:36:41 by aparolar          #+#    #+#             */
/*   Updated: 2022/04/25 10:31:48 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstsplit(t_list *lst, int (*f)(void *))
{
	t_list	*ret;
	t_list	*last;

	ret = ft_lstnew(ft_calloc(1, sizeof(t_list)));
	last = ret;
	ft_lstadd_back(&ret, last);
	if (lst && f)
	{
		while (lst)
		{
			if (!f(lst->content))
			{
				ft_lstadd_back((t_list **)&last->content,
					ft_lstnew(lst->content));
			}
			else
			{
				last = ft_lstnew(ft_calloc(1, sizeof(t_list)));
				ft_lstadd_back(&ret, last);
			}
			lst = lst->next;
		}
	}
	return (ret);
}
