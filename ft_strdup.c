/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelloun <nbelloun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 19:10:34 by nbelloun          #+#    #+#             */
/*   Updated: 2015/01/11 11:39:52 by nbelloun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	length;
	size_t	i;
	char	*dup;

	if (!src)
		return (NULL);
	length = ft_strlen(src);
	dup = (char *)malloc(sizeof(char) * (length) + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (i < length)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
