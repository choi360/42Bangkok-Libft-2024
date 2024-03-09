/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:30:30 by npiya-is          #+#    #+#             */
/*   Updated: 2022/02/19 17:45:33 by npiya-is         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_convert_neg(int n, int digit, char *str)
{
	while (digit > 0)
	{
		str[digit - 1] = '0' - (n % 10);
		n /= 10;
		digit--;
	}
	return (str);
}

char	*ft_convert(int n, int digit, char *str)
{
	while (digit)
	{
		str[digit - 1] = (n % 10) + '0';
		n /= 10;
		digit--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	long	i;
	int		j;
	char	*str;

	i = 10;
	j = 1;
	while (n / i)
	{
		i *= 10;
		j++;
	}
	if (n < 0)
		j += 1;
	str = malloc((j + 1) * sizeof(char));
	if (!(str))
		return (NULL);
	str[j] = '\0';
	if (n >= 0)
		str = ft_convert(n, j, str);
	else
	{
		str = ft_convert_neg(n, j, str);
		str[0] = '-';
	}
	return (str);
}
/*
#include <string.h>

int	main(void)
{
	printf("%s\n",ft_itoa(-2147483648));
	printf("%s\n",ft_itoa(-1000235));
	printf("%s\n",ft_itoa(-14586));
	printf("%s\n",ft_itoa(-1010));
	printf("%s\n",ft_itoa(-1));
	printf("%s\n",ft_itoa(0));
	printf("%s\n",ft_itoa(10));
	printf("%s\n",ft_itoa(1010));
	printf("%s\n",ft_itoa(1005000));
	printf("%s\n",ft_itoa(2147483647));
	return (0);
}
*/
