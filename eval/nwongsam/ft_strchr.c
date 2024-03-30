/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwongsam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 11:23:25 by nwongsam          #+#    #+#             */
/*   Updated: 2024/03/10 17:24:36 by nwongsam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			c_conv;
	unsigned int	i;

	i = 0;
	c_conv = (char)c;
	while (s[i] != 0)
	{
		if (s[i] == c_conv)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == c_conv)
		return ((char *)&s[i]);
	return (0);
}
