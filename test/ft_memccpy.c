/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opletsan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 21:21:15 by opletsan          #+#    #+#             */
/*   Updated: 2017/11/02 14:38:35 by opletsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	while (n > 0)
	{
		*(unsigned char*)dst = *(const unsigned char*)src;
		if (*(unsigned char*)dst == (unsigned char)c)
		{
			return (++dst);
			break ;
		}
		dst++;
		src++;
		n--;
	}
	return (0);
}

int		main(void)
{
	char	str1[50];
	char	str2[] = "ror7-tutu";
	char	st1[50];
	char	st2[] = "ror7-tutu";
	char	*ptr1;
	char	*ptr2;

	ptr1 = ft_memccpy(str1, str2, 'y', 7);
	printf("my:   %s\n", str1);
	ptr2 = memccpy(st1, st2, 'y', 7);
	printf("orig: %s\n", st1);
	if(ptr1)
	{
		*ptr1 = '\0';
		printf("My:   Был найден символ %s\n", ptr1);
	}
	else
		printf("My:   Символ не найден\n");
	if(ptr2)
	{
		*ptr2 = '\0';
		printf("Orig: Был найден символ %s\n", ptr2);
	}
	else
		printf("Orig: Символ не найден\n");
	return (0);
}

