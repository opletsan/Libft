/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opletsan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 21:28:00 by opletsan          #+#    #+#             */
/*   Updated: 2017/11/02 21:44:43 by opletsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*entr;
	
	entr = s;
	while (*s != '\0')
		s++;
	while (s != entr)
	{
		if (*s == (char)c)
		{
			return ((char*)s);
			break ;
		}
		s--;
	}
	if (s == entr && *s == (char)c)
		return ((char*)s);
	return (0);
}

int		main(void)
{
	char	str1[] = "qror7-tutu";
	char	*ptr1;
	char	*ptr2;

	ptr1 = ft_strrchr(str1, '\0');
	printf("myp:    %s\n", ptr1);

	ptr2 = strrchr(str1, '\0');
	printf("origp:  %s\n", ptr2);
	return (0);
}
