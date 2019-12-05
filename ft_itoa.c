/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 20:10:00 by mlabrayj          #+#    #+#             */
/*   Updated: 2019/10/28 22:13:19 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*itoa1(int n, int j, int k)
{
	char	*s;
	int		i;

	i = 0;
	if (n < 0)
	{
		if (!(s = (char *)malloc(sizeof(char) * (j + 3))))
			return (NULL);
		s[i++] = '-';
	}
	else if (!(s = (char*)malloc(sizeof(char) * (j + 2))))
		return (NULL);
	while (j-- >= 0)
	{
		if (n < 0)
			s[i] = -n / k + 48;
		else
			s[i] = n / k + 48;
		n = n % k;
		k = k / 10;
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	*itoa2(int n)
{
	char *p;

	if (n < 0)
	{
		if (!(p = (char *)malloc(sizeof(char) * 3)))
			return (NULL);
		p[0] = '-';
		p[1] = -n + 48;
		p[2] = '\0';
	}
	else
	{
		if (!(p = (char *)malloc(sizeof(char) * 2)))
			return (NULL);
		p[0] = n + 48;
		p[1] = '\0';
	}
	return (p);
}

char	*ft_itoa(int n)
{
	int i;
	int j;
	int k;

	i = n;
	j = 0;
	k = 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 10 && n > -10)
		return (itoa2(n));
	if (i < 0)
		i = i * -1;
	while (i >= 10)
	{
		i = i / 10;
		j++;
	}
	i = 0;
	while (i < j)
	{
		k = k * 10;
		i++;
	}
	return (itoa1(n, j, k));
}
