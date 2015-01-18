/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelloun <nbelloun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 16:40:52 by nbelloun          #+#    #+#             */
/*   Updated: 2015/01/18 13:52:05 by nbelloun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*s_new;

	if (s != NULL && f != NULL)
	{
		len = ft_strlen(s);
		if (!(s_new = ft_strnew(len)))
			return (NULL);
		i = 0;
		while (i < len)
		{
			s_new[i] = (*f)(i, s[i]);
			i++;
		}
		return (s_new);
	}
	return (NULL);
}
