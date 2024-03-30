/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwongsam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 11:23:14 by nwongsam          #+#    #+#             */
/*   Updated: 2024/03/10 12:04:30 by nwongsam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*con_src;
	char	*con_dst;
	size_t	i;

	con_src = (char *) src;
	con_dst = (char *) dst;
	i = 0;
	if (con_dst == con_src)
		return (dst);
	if (con_dst > con_src)
	{
		while (len-- > 0)
			con_dst[len] = con_src[len];
	}
	else
	{
		while (i < len)
		{
			con_dst[i] = con_src[i];
			i++;
		}
	}
	return (dst);
}
