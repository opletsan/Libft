/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opletsan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 14:44:00 by opletsan          #+#    #+#             */
/*   Updated: 2017/11/02 17:30:58 by opletsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*res;

	res = (unsigned char*)dst;
	if (dst <= src)
	{
		while (len > 0)
		{
			*(unsigned char*)dst = *(unsigned char*)src;
			dst++;
			src++;
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			*(unsigned char*)(dst + len - 1) = *(unsigned char*)(src + len - 1);
			len--;
		}
	}
	return (res);
}

int		main(void)
{
	char	*ptr1;
	char	*ptr2;
	char	str1[] = "-VasyaPupkin";
	char	st1[] = "-VasyaPupkin";

	ptr1 = ft_memmove(str1 + 3, str1, 5);
	printf("my:   %s\n", str1);
	printf("ptr:  %s\n\n", ptr1);

	ptr2 = memmove(st1 + 3, st1, 5);
	printf("orig: %s\n", st1);
	printf("ptr:  %s\n", ptr2);
	return (0);
}
