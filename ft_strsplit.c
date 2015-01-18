/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelloun <nbelloun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 16:40:52 by nbelloun          #+#    #+#             */
/*   Updated: 2015/01/18 13:55:22 by nbelloun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_count_words(char *s, char c)
{
	size_t			counter;
	size_t			count;

	counter = 0;
	count = 0;
	if (!s || !c)
		return (0);
	if (*s != c && *s != '\0')
		count++;
	while (s[counter] != '\0')
	{
		if (s[counter] == c && s[counter + 1] != c && s[counter + 1] != '\0')
			count++;
		counter++;
	}
	return (count);
}

static size_t		ft_word_len(char *s, char c)
{
	size_t			len;

	if (!s)
		return (0);
	len = 0;
	while (*s && *s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char				**ft_strsplit(char const *s, char c)
{
	size_t			nb_words;
	size_t			word_len;
	char			**array;
	size_t			j;
	size_t			i;

	nb_words = ft_count_words((char *)s, c);
	if (!s || !c || !(array = (char **)malloc(sizeof(char *) * (nb_words + 1))))
		return (NULL);
	j = 0;
	i = 0;
	while (j < nb_words)
	{
		if (s[i] != c)
		{
			word_len = ft_word_len((char *)(s + i), c);
			array[j] = ft_strsub(s + i, 0, word_len);
			j++;
			i += word_len;
		}
		i++;
	}
	array[nb_words] = NULL;
	return (array);
}
