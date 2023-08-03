/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:14:00 by hbay              #+#    #+#             */
/*   Updated: 2023/07/08 07:06:03 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*conv_dst;
	const unsigned char	*conv_src;

	i = 0;
	conv_dst = (unsigned char *) dst;
	conv_src = (const unsigned char *) src;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		conv_dst[i] = conv_src[i];
		i++;
	}
	return (dst);
}
