/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 20:26:51 by equiana           #+#    #+#             */
/*   Updated: 2019/09/06 20:45:34 by equiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char *ptr;
	char *last;

	ptr = s;
	last = NULL;
	while (*ptr != '\0')
	{
		if (*ptr == (char)c)
			last = ptr;
		ptr++;
	}
	if (last != NULL)
		return (last);
	if (c == '\0')
		return (ptr);
	return (NULL);
}
