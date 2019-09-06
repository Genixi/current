/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 15:27:13 by equiana           #+#    #+#             */
/*   Updated: 2019/09/06 16:46:03 by equiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dst_def;
	const char	*src_def;

	i = len;
	dst_def = dst;
	src_def = src;
	if (dst_def <= src_def || dst_def >= (src_def + len))
	{
		while (i--)
			*dst_def++ = *src_def++;
	}
	else
	{
		dst_def = dst_def + len - 1;
		src_def = src_def + len - 1;
		while (len > 0)
		{
			*dst_def = *src_def;
			dst_def--;
			src_def--;
			len--;
		}
	}
	return (dst);
}

int		main(void)
{
	char src[] = "*********************";
	char dest[] = "abcdefghijklmnopqrstuvwxyz0123456789";
	char *dest_1;
	printf("%s\n", dest);
	dest_1 = ft_memmove(dest, src, 12);
	printf("%s\n", dest_1);
	return (0);
}
