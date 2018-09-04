/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opletsan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 17:48:42 by opletsan          #+#    #+#             */
/*   Updated: 2017/10/27 18:16:15 by opletsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dst, char *app, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (app[j] != '\0' && len - j > 0)
		dst[i++] = app[j++];
	dst[i] = '\0';
	return (dst);
}

int		main(void)
{
	char	dst[20] = "Vasya";
	char	app[20] = "Pupkin";

	printf("%s", ft_strncat(dst, app, 1));
	return (0);
}
