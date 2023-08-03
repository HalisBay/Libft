/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:42:33 by hbay              #+#    #+#             */
/*   Updated: 2023/07/13 10:11:30 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*yer_ayir;

	yer_ayir = malloc(count * size);
	if (yer_ayir == NULL)
		return (yer_ayir);
	ft_bzero (yer_ayir, count * size);
	return (yer_ayir);
}
