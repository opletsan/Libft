/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opletsan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 20:27:42 by opletsan          #+#    #+#             */
/*   Updated: 2017/11/02 20:48:58 by opletsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char*)s1 == *(unsigned char*)s2)
		{
			s1++;
			s2++;
		}
		else
			return (*(unsigned char*)s1 - *(unsigned char*)s2);
		n--;
	}
	return (0);
}

int		main(void)
{
	char a[] = "434";
	char b[] = "432";

	ft_memcmp(a, b, 0);
	printf("%d\n", ft_memcmp(a, b, 0));
	memcmp(a, b, 0);
	printf("%d\n", memcmp(a, b, 0));
	return (0);
}

