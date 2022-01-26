/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:06:16 by aparolar          #+#    #+#             */
/*   Updated: 2022/01/25 21:07:40 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strreplace(char *str, char *seek, char *replace)
{
	char	*find;
	char	*ret;
	char	*tmp;

	if (!str || !seek || !replace)
		return (0);
	while (*str)
	{
		if (*str == *seek)
		{
			find = str;
			tmp = seek;
			while (*find && *tmp && *(find++) == *tmp)
				tmp++;
			//una vez encontrada la string seek pasar punteros a una funcion que devuelva la string hasta el momento remplazado el seek por el replace ¡¡Cuidado posibles leaks!!
		}
	}
}