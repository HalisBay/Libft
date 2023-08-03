/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:24:43 by hbay              #+#    #+#             */
/*   Updated: 2023/07/13 10:11:59 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*conv_s1;
	unsigned char	*conv_s2;

	i = 0;
	conv_s1 = (unsigned char *)s1;
	conv_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if (conv_s1[i] != conv_s2[i])
		{
			return (conv_s1[i] - conv_s2[i]);
		}
		i++;
	}
	return (0);
}
