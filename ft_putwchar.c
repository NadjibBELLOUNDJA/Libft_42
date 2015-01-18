/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbelloun <nbelloun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/26 14:04:51 by nbelloun          #+#    #+#             */
/*   Updated: 2015/01/11 14:28:09 by nbelloun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_putwchar(long long n)
{
	char	*mask_unicode;
	int		*bin;
	int		index;
	int		dec;

	if (0 <= n && n <= 255)
	{
		ft_putchar(n);
		return (1);
	}
	dec = 0;
	index = 0;
	mask_unicode = ft_mask_unicode(n);
	bin = ft_convert_binary(mask_unicode);
	while (bin[index] != -42)
	{
		dec = ft_bin_to_dec(bin[index]);
		write(1, &dec, 1);
		index++;
	}
	return (index);
}
