/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 01:53:19 by hbay              #+#    #+#             */
/*   Updated: 2023/07/13 10:13:20 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	if (s1[i] == '\0')
	{
		str = ft_strdup("");
		if (!str)
			return (NULL);
		return (str);
	}
	len = ft_strlen(s1 + i);
	while (len > 0 && ft_strchr(set, s1[i + len - 1]))
		len--;
	str = ft_substr(s1, i, len);
	if (!str)
		return (NULL);
	return (str);
}
