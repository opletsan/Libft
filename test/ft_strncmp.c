/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opletsan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 20:34:05 by opletsan          #+#    #+#             */
/*   Updated: 2017/10/27 20:52:13 by opletsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (n - i > 0))
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

int		main(void)
{
	char	a[20] = "";
	char	b[20] = "";

	if (ft_strncmp(a, b, 5) == 0)
		printf("%s", "true\n");
	else
		printf("%s", "false\n");
	if (strncmp (a, b, 5) == 0)
		puts ("Первые пять символов строк идентичны");
	else
		puts ("Первые пять символов строк отличаются");
	return (0);
}
