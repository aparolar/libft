/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 11:42:02 by aparolar          #+#    #+#             */
/*   Updated: 2022/01/03 11:44:04 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_array_count(char **array)
{
	size_t	count;

	if (!array)
		return (0);
	count = 0;
	while (*array)
	{
		array++;
		count++;
	}
	return (count);
}
