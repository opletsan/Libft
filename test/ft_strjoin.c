/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opletsan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:49:18 by opletsan          #+#    #+#             */
/*   Updated: 2017/11/06 20:28:39 by opletsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len;
	char		*res;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	printf("%zu\n", len);
	res = (char*)malloc(sizeof(*res) * len + 1);
	if (!res)
		return (NULL);
	while (s1[i] != '\0')
	{
		res[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	printf("%s\n", res);
	while (s2[i] != '\0')
	{
		res[j] = s2[i];
		i++;
		j++;
	}
	printf("%s\n", res);
	res[j] = '\0';
	printf("%s\n", res);
	return (res);
}

int		main(void)
{
	char const	s1[] = "-VasyaPupkin";
//	char const	s2[] = "-chebyrashka";

	printf("%s\n", ft_strjoin(s1 + 6, s1));
	return (0);
}
