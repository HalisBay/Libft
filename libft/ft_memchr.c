/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:58:41 by hbay              #+#    #+#             */
/*   Updated: 2023/07/13 10:11:54 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*conv_s;

	i = 0;
	conv_s = (unsigned char *) s;
	while (i < n)
	{
		if (conv_s[i] == (unsigned char) c)
			return ((void *) &conv_s[i]);
		i++;
	}
	return (NULL);
}
