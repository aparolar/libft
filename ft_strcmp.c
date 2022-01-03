/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 23:11:42 by aparolar          #+#    #+#             */
/*   Updated: 2021/12/30 01:10:13 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcmp(char *s1, char *s2)
{
	if (s1 && s2 && (ft_strlen(s1) == ft_strlen(s2)))
	{
		while (*s1)
		{
			if (*s1 != *s2)
				return (0);
			s1++;
			s2++;
		}
		return (s1);
	}
	return (0);
}
