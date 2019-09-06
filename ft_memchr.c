/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 16:37:51 by equiana           #+#    #+#             */
/*   Updated: 2019/09/06 19:03:58 by equiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_def;

	i = 0;
	s_def = (unsigned char*)s;
	while (i <= n)
	{
		if (*s_def == (unsigned char)c)
			return ((void*)s_def);
		s_def++;
		i++;
	}
	return (NULL);
}

int		main(void)
{
	char src[] = "qwerty";
	size_t i;
	i = 0;
	printf("%s\n", src);
	printf("%s\n",(char*)ft_memchr(src, 'q', 6));
	printf("%s\n",(char*)ft_memchr(src, 'e', 3));
	return (0);
}
