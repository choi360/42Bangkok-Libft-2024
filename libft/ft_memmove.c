/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: komethaw <choi360@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 21:43:53 by komethaw          #+#    #+#             */
/*   Updated: 2024/03/31 01:16:39 by komethaw         ###   ########.fr       */
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
/*
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*pdst;
	char const	*psrc;

	pdst = dst;
	psrc = src;
	if (!dst)
		return (NULL);
	if ((unsigned long)pdst < (unsigned long)psrc)
		return (ft_memcpy(dst, src, len));
	else
	{
		while (len--)
			*(pdst + len) = *(psrc + len);
	}
	return (dst);
}
*/
/*
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*pdst;
	const unsigned char	*psrc;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	i = 0;
	if (!pdst && !psrc)
		return (NULL);
	if (pdst > psrc)
		while (++i <= len)
			pdst[len - i] = psrc[len - i];
	else
		while (len-- > 0)
			*(pdst++) = *(psrc++);
	return (dst);
}
*/
