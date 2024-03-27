/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: komethaw <choi360@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 21:46:38 by komethaw          #+#    #+#             */
/*   Updated: 2024/03/27 21:46:41 by komethaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*output;

	output = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!output)
		return (NULL);
	ft_memcpy(output, s1, ft_strlen(s1) + 1);
	return (output);
}
