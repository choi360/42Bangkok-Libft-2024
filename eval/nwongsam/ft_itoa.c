/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwongsam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:45:23 by nwongsam          #+#    #+#             */
/*   Updated: 2024/03/10 21:19:30 by nwongsam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int n)
{
	int	len;

	len = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long int	n_tmp;
	int			i;
	char		*str;

	n_tmp = n;
	i = int_len(n);
	if (n < 0)
	{
		n_tmp *= -1;
		i++;
	}
	str = malloc(sizeof(char) * (i + 1));
	if (str == 0)
		return (NULL);
	*(str + i) = 0;
	while (i-- > 0)
	{
		*(str + i) = (n_tmp % 10) + '0';
		n_tmp /= 10;
	}
	if (n < 0)
		*str = '-';
	return (str);
}
