/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opletsan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 19:58:54 by opletsan          #+#    #+#             */
/*   Updated: 2017/11/01 21:14:56 by opletsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*res;

	res = (unsigned char*)dst;
	while (n > 0)
	{
		*(unsigned char*)dst = *(const unsigned char*)src;
		dst++;
		src++;
		n--;
	}
	return (res);
}

int		main(void)
{
	char	str1[40];
	char	str2[] = "r7ru-tutu";
	char	st1[40];
	char	st2[] = "r7ru-tutu";

	ft_memcpy(str1, str2, 0);
	printf("my:   %s\n", str1);
	memcpy(st1, st2, 0);
	printf("orig: %s\n", st1);
	return (0);
}
