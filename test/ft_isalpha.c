/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opletsan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 21:52:53 by opletsan          #+#    #+#             */
/*   Updated: 2017/11/03 12:50:16 by opletsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_isalpha(int c)
{
	if (((unsigned char)c >= 65 && (unsigned char)c <= 90) ||
			((unsigned char)c >= 97 && (unsigned char)c <= 122))
		return (1);
	return (0);
}
int		main(void)
{
	printf("%d\n", ft_isalpha(' '));
	printf("%d\n", isalpha(' '));
	return (0);
}
