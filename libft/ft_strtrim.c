/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: komethaw <choi360@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 22:08:06 by komethaw          #+#    #+#             */
/*   Updated: 2024/03/31 01:31:30 by komethaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (s1 == 0 || set == 0)
		return (NULL);
	while (s1[start] != 0 && ft_strchr(set, s1[start]) != 0)
		start++;
	if (start == end + 1)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[end]))
		end--;
	trim = ft_substr(s1, start, end - start + 1);
	if (trim == 0)
		return (NULL);
	return (trim);
}
/*
char	*ft_strtrim(char const *s1, char const *set)
{
	int		size;
	int		st;
	int		end;
	char	*out;

	st = 0;
	size = ft_strlen(s1);
	end = size - 1;
	while (ft_strchr(set, s1[st]) && st < end)
		st++;
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	if (end < st)
	{
		out = (char *)malloc(sizeof(char) * 1);
		out[0] = '\0';
		return (out);
	}
	out = ft_substr(s1, st, end - st + 1);
	return (out);
}
*/
