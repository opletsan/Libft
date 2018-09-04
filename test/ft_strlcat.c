/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opletsan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 21:08:06 by opletsan          #+#    #+#             */
/*   Updated: 2017/10/31 18:11:51 by opletsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *app, size_t dstsize)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && dstsize != 0)
	{
		i++;
		dstsize--;
	}
	while (app[j] != '\0')
		j++;
	if (dstsize <= i)
		return (dstsize + j);
	dst[i] ='\0';
	return (i + j);
}

int		main(void)
{
	char	dst[50] = "ygt";
	char	app[50] = "";

	printf("my:       %zu\n", ft_strlcat(dst, app, 6));
	printf("original: %zu\n", strlcat(dst, app, 6));
	return (0);
}
