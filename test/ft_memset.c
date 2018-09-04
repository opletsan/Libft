/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opletsan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:14:33 by opletsan          #+#    #+#             */
/*   Updated: 2017/11/01 18:13:49 by opletsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void*	ft_memset(void *b, int c, size_t len)
{
	unsigned char	*res;

	res = (unsigned char*)b;
	while (len > 0)
	{
		*(unsigned char*)b = (unsigned char)c;
		len--;
		b++;
	}
	return (res);
}

int		main(void)
{
	unsigned char	b[30] = "trrutinvnvn ddik dkk";

	printf("my:   %s\n", ft_memset(b, '_', 3));
	printf("orig: %s\n", memset(b, '_', 3));
	return (0);
}
