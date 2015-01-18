/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelloun <nbelloun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 19:44:34 by nbelloun          #+#    #+#             */
/*   Updated: 2015/01/15 21:51:17 by nbelloun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	index;

	index = 0;
	if (!dest)
		return (NULL);
	while (src && index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (src && index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
