/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opletsan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 19:59:58 by opletsan          #+#    #+#             */
/*   Updated: 2017/11/02 20:23:08 by opletsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char*)s == (unsigned char)c)
		{
			return ((unsigned char*)s);
			break ;
		}
		s++;
		n--;
	}
	return (0);
}

int		main(void)
{
	char	str1[] = "ror7-tutu";
	char	st1[] = "ror7-tutu";
	char	*ptr1;
	char	*ptr2;

	ptr1 = ft_memchr(str1, '-', 7);
	printf("mys:    %s\n", str1);
	printf("myp:    %s\n", ptr1);

	ptr2 = memchr(st1, '-', 7);
	printf("origs:  %s\n", st1);
	printf("origp:  %s\n", ptr2);
	return (0);
}

