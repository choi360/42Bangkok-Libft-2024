/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: komethaw <choi360@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 22:08:32 by komethaw          #+#    #+#             */
/*   Updated: 2024/03/27 22:08:35 by komethaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*output;
	size_t	size;
	size_t	allocsize;
	int		i;

	size = ft_strlen(s);
	if (len < size + 1)
		allocsize = len;
	else
		allocsize = size + 1;
	output = (char *)malloc(sizeof(char) * allocsize);
	if (output == NULL)
		return (NULL);
	i = 0;
	while ((size_t) i < len && s[i + start] != '\0' && i + start < size)
	{
		output[i] = s[i + start];
		i++;
	}
	output[i] = '\0';
	return (output);
}
