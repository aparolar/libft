/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 11:38:15 by aparolar          #+#    #+#             */
/*   Updated: 2022/04/08 18:34:12 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_array_free(char **array)
{
	char	**tmp;

	if (!array)
		return ;
	tmp = array;
	while (*tmp)
	{
		free(*tmp);
		tmp++;
	}
	free(array);
}
