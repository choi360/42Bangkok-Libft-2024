/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwongsam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 11:23:37 by nwongsam          #+#    #+#             */
/*   Updated: 2024/03/10 18:58:30 by nwongsam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dstsize == 0)
		return (src_len);
	if (dst_len >= dstsize)
		return (src_len + dstsize);
	dstsize = dstsize - dst_len;
	dst = dst + dst_len;
	while (*src != 0 && --dstsize != 0)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = 0;
	return (src_len + dst_len);
}
