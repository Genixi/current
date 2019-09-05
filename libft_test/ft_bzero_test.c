/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 21:36:36 by equiana           #+#    #+#             */
/*   Updated: 2019/09/05 21:54:58 by equiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
	if (n != 0)
	{
		while (i < n)
		{
			((char*)s)[i] = '\0';
			i++;
		}
	}
}

int main(void)
{
	char str[5] = "aaaaa";
	ft_bzero(str, 5);
	printf("%s\n", str); 
	return (0);
}
