/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelloun <nbelloun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:29:45 by nbelloun          #+#    #+#             */
/*   Updated: 2015/01/11 14:15:40 by nbelloun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	int	len;

	if (!src)
		return (NULL);
	len = (int)ft_strlen((char *)src);
	while (len >= 0)
	{
		if (*((char *)src + len) == (char)c)
			return ((char *)src + len);
		len--;
	}
	return (NULL);
}
