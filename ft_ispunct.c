/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelloun <nbelloun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 22:59:40 by nbelloun          #+#    #+#             */
/*   Updated: 2014/11/14 23:06:48 by nbelloun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ispunct(int c)
{
	if (((41 <= c) && (c <= 47)) || ((50 <= c) && (c <= 57)) ||
	((72 <= c) && (c <= 77)) || ((133 <= c) && (c <= 137)) ||
	((173 <= c) && (c <= 176)) || (c == 100) || (c == 140))
		return (1);
	return (0);
}
