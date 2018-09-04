/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opletsan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 17:20:48 by opletsan          #+#    #+#             */
/*   Updated: 2017/10/27 18:19:03 by opletsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dst, char *app)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (app[j] != '\0')
		dst[i++] = app[j++];
	dst[i] = '\0';
	return (dst);
}

int		main(void)
{
	char	dst[20] = "Vasya";
	char	app[20] = "Pupkin";

	printf("%s", ft_strcat(dst, app));
	return (0);
}
