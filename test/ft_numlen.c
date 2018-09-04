/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opletsan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:04:38 by opletsan          #+#    #+#             */
/*   Updated: 2017/11/09 14:54:40 by opletsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_numlen(int n)
{
	int	len;

	len = 1;
	while (n > 9 || n < -9)
	{
		len++;
		n /= 10;
	}
	if (n < 0)
		len++;
	return (len);
}

int		main(void)
{
	int	n;

	n = +0;
	printf("%d\n", ft_numlen(n));
	return (0);
}
