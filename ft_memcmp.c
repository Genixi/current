/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 17:22:12 by equiana           #+#    #+#             */
/*   Updated: 2019/09/06 19:03:29 by equiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *s1_def;
	unsigned char *s2_def;

	i = 0;
	s1_def = (unsigned char*)s1;
	s2_def = (unsigned char*)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (*s1_def != *s2_def)
			return (*s1_def - *s2_def);
		s1_def++;
		s2_def++;
		i++;
	}
	return (0);
}

int main(void)
{
	char str1[] = "qwerty";
	char str2[] = "qwerty";
	char str3[] = "qweety";
	printf("%d\n", ft_memcmp(str1, str2, 6));
	printf("%d\n", ft_memcmp(str1, str3, 6));
	printf("%d\n", (int)('r' - 'e'));
	return (0);
}
