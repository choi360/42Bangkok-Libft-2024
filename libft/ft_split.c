/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: komethaw <choi360@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 21:45:54 by komethaw          #+#    #+#             */
/*   Updated: 2024/03/31 01:34:55 by komethaw         ###   ########.fr       */
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
/*
static size_t	find_split_size(char const *s, char c)
{
	size_t	split_size;
	char	*t;

	split_size = 0;
	t = (char *)s;
	while (*t != '\0')
	{
		while (*t != '\0' && *t != c)
			t++;
		while (*t != '\0' && *t == c)
			t++;
		split_size++;
	}
	return (split_size);
}

static size_t	find_next_ind(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static void	split(char **output, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	w;
	char	*t;

	w = 0;
	t = (char *)s;
	i = find_next_ind(t, c);
	while (i != 0)
	{
		output[w] = (char *)malloc(sizeof(char) * (i + 1));
		j = 0;
		while (j < i)
			output[w][j++] = *(t++);
		output[w][j] = '\0';
		w++;
		while (*t != '\0' && *t == c)
			t++;
		i = find_next_ind(t, c);
	}
	output[w] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**output;

	while (*s != '\0' && *s == c)
		s++;
	output = (char **)malloc(sizeof(char *) * (find_split_size(s, c) + 1));
	if (output == NULL)
		return (NULL);
	split(output, s, c);
	return (output);
}
*/
/* not work
static int	count_words(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (1);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int	i;

	i = 0;
	word = malloc(sizeof(char) * (finish - start + 1));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int	index;
	char	**split;

	if (!s || !(split = malloc(sizeof(char *) * (count_words(s, c) + 1))))
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
*/
