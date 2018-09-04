/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opletsan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 21:51:46 by opletsan          #+#    #+#             */
/*   Updated: 2017/10/28 16:16:54 by opletsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
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
		while (str[j + i] == to_find[i] && (len - j - i) >= 1)
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
	size_t	len;
	char 	a[20] = "kfhhFsd jfj5";
	char 	b[20] = "kf";

	len = 3;
	printf("%s\n", strnstr(a, b, len));
	printf("%s\n", ft_strnstr(a, b, len));
	return (0);
}
