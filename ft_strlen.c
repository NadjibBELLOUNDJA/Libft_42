/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelloun <nbelloun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 19:02:06 by nbelloun          #+#    #+#             */
/*   Updated: 2015/01/11 14:28:44 by nbelloun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *str)
{
	char	*length;

	if (!str)
		return (0);
	length = (char *)str;
	while (*length != '\0')
		length++;
	return (length - str);
}
