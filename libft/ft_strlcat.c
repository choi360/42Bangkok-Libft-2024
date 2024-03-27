/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: komethaw <choi360@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 21:48:26 by komethaw          #+#    #+#             */
/*   Updated: 2024/03/27 21:48:29 by komethaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dstsize == 0)
		return (slen);
	while (src[i] && dlen + i < dstsize -1)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = 0;
	if (dlen < dstsize)
		return (dlen + slen);
	return (dstsize + slen);
}
/*
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		n;
	size_t		nd;
	char		*pdst;
	char const	*psrc;

	pdst = dst;
	psrc = src;
	nd = 0;
	n = dstsize;
	while (*(pdst + nd) && n--)
		nd++;
	n = dstsize - nd;
	pdst = pdst + nd;
	if (n == 0)
		return (nd + ft_strlen(src));
	while (n != 1 && *psrc)
	{
		*pdst++ = *psrc;
		n--;
		psrc++;
	}
	*pdst = '\0';
	return (nd + ft_strlen(src));
}
*/
/*
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*s;
	size_t	dlen;
	size_t	slen;
	size_t	res;
	size_t	i;

	s = (char *)src;
	dlen = ft_strlen(dst);
	slen = ft_strlen(s);
	res = 0;
	i = 0;
	if (dstsize > dlen)
		res = slen + dlen;
	else
		res = slen + dstsize;
	while (s[i] && (dlen + 1) < dstsize)
	{
		dst[dlen] = s[i];
		dlen++;
		i++;
	}
	dst[dlen] = '\0';
	return (res);
}
*/
