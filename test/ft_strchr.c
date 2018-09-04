/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opletsan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 21:00:42 by opletsan          #+#    #+#             */
/*   Updated: 2017/11/02 21:26:29 by opletsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return ((char*)s);
			break ;
		}
		s++;
	}
	if (*s == '\0' && *s == (char)c)
		return ((char*)s);
	return (0);
}

int		main(void)
{
	char	str1[] = "ror7-tutu";
	char	st1[] = "ror7-tutu";
	char	*ptr1;
	char	*ptr2;

	ptr1 = ft_strchr(str1, '-');
	printf("mys:    %s\n", str1);
	printf("myp:    %s\n", ptr1);

	ptr2 = strchr(st1, '-');
	printf("origs:  %s\n", st1);
	printf("origp:  %s\n", ptr2);
	return (0);
}
