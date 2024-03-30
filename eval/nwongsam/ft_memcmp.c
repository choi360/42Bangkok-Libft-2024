/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwongsam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 11:23:03 by nwongsam          #+#    #+#             */
/*   Updated: 2024/03/10 17:23:28 by nwongsam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_conv;
	unsigned char	*s2_conv;
	size_t			i;

	s1_conv = (unsigned char *)s1;
	s2_conv = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_conv[i] != s2_conv[i])
			return (s1_conv[i] - s2_conv[i]);
		i++;
	}
	return (0);
}
