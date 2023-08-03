/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:10:39 by hbay              #+#    #+#             */
/*   Updated: 2023/07/13 10:12:26 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		uzunluk;
	char	*string;

	i = 0;
	uzunluk = ft_strlen(s1);
	string = (char *) malloc(sizeof(*string) * (uzunluk + 1));
	if (!string)
		return (NULL);
	while (i < uzunluk)
	{
		string[i] = s1[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}
