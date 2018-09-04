/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opletsan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 18:28:40 by opletsan          #+#    #+#             */
/*   Updated: 2017/11/01 18:53:52 by opletsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	while (n > 0)
	{
		*(unsigned char*)s = 0;
		n--;
		s++;
	}
}


int		main(void)
{
	unsigned char	b[30] = "trrutinvnvn ddik dkk";

	ft_bzero(b, 5);
	printf("my:   %s\n", b);
	printf("orig: %s\n", bzero(b, 5));
	return (0);
}
