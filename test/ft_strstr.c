/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opletsan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 21:51:46 by opletsan          #+#    #+#             */
/*   Updated: 2017/10/28 16:12:49 by opletsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(const char *str, const char *to_find)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return ((char*)str);
	while (str[j] != '\0')
	{
		i = 0;
		while (str[j + i] == to_find[i])
		{
			if (to_find[i + 1] == '\0')
				return ((char*)str + j);
			i++;
		}
		j++;
	}
	return (0);
}

int		main(void)
{
	char 	a[20] = "kfhhFsd jfj5";
	char 	b[20] = "kf";

	printf("%s\n", strstr(a, b));
	printf("%s", ft_strstr(a, b));
	return (0);
}
