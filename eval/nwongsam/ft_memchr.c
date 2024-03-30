/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwongsam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 11:18:44 by nwongsam          #+#    #+#             */
/*   Updated: 2024/03/10 17:22:29 by nwongsam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*conv_s;
	unsigned char	conv_c;
	size_t			i;

	conv_s = (unsigned char *)s;
	conv_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (conv_s[i] == conv_c)
			return ((void *)&conv_s[i]);
		i++;
	}
	return (0);
}
