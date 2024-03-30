/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwongsam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 21:16:10 by nwongsam          #+#    #+#             */
/*   Updated: 2024/03/22 11:08:30 by nwongsam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s != 0)
	{
		while (*s == c)
			s++;
		if (*s != 0)
			count++;
		while (*s != c && *s != 0)
			s++;
	}
	return (count);
}

static void	*ft_free(char **s, int array_index)
{
	int	i;

	i = 0;
	while (i < array_index)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	int		word_len;
	int		i;

	lst = ft_calloc((ft_wordcount(s, c) + 1), sizeof(char *));
	if (s == 0 || lst == 0)
		return (NULL);
	i = 0;
	while (*s != 0)
	{
		while (*s == c && *s != 0)
			s++;
		if (*s != 0)
		{
			if (ft_strchr(s, c) == 0)
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			lst[i++] = ft_substr(s, 0, word_len);
			if (lst[i - 1] == 0)
				return (ft_free(lst, i - 1));
			s += word_len;
		}
	}
	return (lst);
}
