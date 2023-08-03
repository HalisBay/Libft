/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:06:55 by hbay              #+#    #+#             */
/*   Updated: 2023/07/13 10:13:08 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*obj;

	i = 0;
	obj = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			obj = (char *)&s[i];
		i++;
	}
	if (s[i] == (char)c)
		obj = (char *)&s[i];
	return (obj);
}
