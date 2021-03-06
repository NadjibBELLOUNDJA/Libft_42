/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelloun <nbelloun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 16:40:52 by nbelloun          #+#    #+#             */
/*   Updated: 2015/01/18 13:16:17 by nbelloun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_startindex(char const *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] && ((s[i] == ' ') || (s[i] == '\n') || (s[i] == '\t')))
		i++;
	return (i);
}

static size_t	ft_endindex(char const *s)
{
	size_t	j;

	if (!s)
		return (0);
	if (ft_strlen(s) == 0 || ft_strlen(s) == 1)
		return (0);
	j = ft_strlen(s) - 1;
	while (j && ((s[j] == ' ') || (s[j] == '\n') || (s[j] == '\t')))
		j--;
	return (j);
}

char			*ft_strtrim(char const *s)
{
	size_t		start;
	size_t		end;
	size_t		len;
	char		*dest;

	if (!s)
		return (NULL);
	start = ft_startindex(s);
	end = ft_endindex(s);
	if (end < start)
		return (ft_strdup(""));
	len = end - start + 1;
	if (!(dest = ft_strsub(s, start, (size_t)len)))
		return (NULL);
	return (dest);
}
