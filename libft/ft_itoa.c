/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 01:52:11 by hbay              #+#    #+#             */
/*   Updated: 2023/07/13 10:11:46 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length(int nb)
{
	int	s;

	if (nb == 0)
		return (1);
	s = 0;
	if (nb < 0)
		s = 1;
	while (nb)
	{
		s++;
		nb = nb / 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	unsigned int	num;

	len = length(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	else
		num = n;
	while (num)
	{
		str[len] = ('0' + (num % 10));
		num = num / 10;
		len--;
	}
	return (str);
}
