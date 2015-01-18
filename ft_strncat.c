/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelloun <nbelloun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 19:55:40 by nbelloun          #+#    #+#             */
/*   Updated: 2015/01/15 22:51:52 by nbelloun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int				i;
	unsigned int	j;

	if (!dest || !src)
		return (NULL);
	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (j < n)
	{
		*(dest + i + j) = *(char *)(src + j);
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
