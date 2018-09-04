/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opletsan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 17:25:03 by opletsan          #+#    #+#             */
/*   Updated: 2017/10/28 19:24:41 by opletsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(const char *str)
{
	int i;
	int x;
	int y;

	i = 0;
	x = 0;
	y = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i++] == '-')
		y = -1;
	if (str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			x = x * 10 + (str[i] - '0');
		else
			break ;
		i++;
	}
	return (x * y);
}

int		main(void)
{
	char str[] = "  	--836481";

	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	return (0);
}
