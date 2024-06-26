/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: komethaw <choi360@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 22:08:32 by komethaw          #+#    #+#             */
/*   Updated: 2024/03/31 01:19:44 by komethaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	if (s == 0)
		return (0);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = malloc(sizeof(char) * (len + 1));
	if (substr == 0)
		return (NULL);
	ft_memcpy(substr, s + start, len);
	substr[len] = 0;
	return (substr);
}
/*
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
*/
