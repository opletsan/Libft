/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opletsan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:44:06 by opletsan          #+#    #+#             */
/*   Updated: 2017/11/09 18:16:17 by opletsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_numline(char const *s, char c)
{
	size_t	i;

	i = 1;
	if (*s == c)
		i--;
	while (*s != '\0')
	{
		if (*s == c)
		{
			i++;
			while (*s == c)
				s++;
		}
		else
			s++;
	}
	if (*(--s) == c)
		i--;
	return (i);
}

static size_t	ft_numlett(char const *s, unsigned int i, char c)
{
	size_t	len;

	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_strsplit(char const *s, char c)
{
	char			**res;
	char			**rres;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	res = (char**)malloc(sizeof(char*) * ft_numline(s, c) + 1);
	if(!res)
		return (NULL);
	rres = res;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			*res = ft_strsub(s, i, ft_numlett(s, i, c));
			i += ft_numlett(s, i, c);
		}
		res++;
	}
	*res = NULL;
	return (rres);
}

int		main(void)
{
	char const	*s = "Every*word*in*a new*line";
	char		c = '*';
	char		**res;

	res = ft_strsplit(s, c);
	while (*res)
	{
		printf("%s\n", *res);
		res++;
	}
	return (0);
}
