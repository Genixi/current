/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 19:50:17 by equiana           #+#    #+#             */
/*   Updated: 2019/09/05 21:43:54 by equiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void* ft_memset(void *b, int c, size_t len)
{
	size_t i;	

	i = 0;
	while (i < len)
	{
		((unsigned char*)b)[i] = (unsigned char)c;
		i++;	
	}
	return b;
}

int main(void)
{
	unsigned char res00[10]="1234567890";
	unsigned char res01[10]="1234567890";
	unsigned char res02[10]="1234567890";

	ft_memset(res00, 65, 10);
	printf("1: %s\n", res00);
	ft_memset(res01, -5, 10);
	printf("-5: %s\n", res01);
	ft_memset(res02, 333, 10);
	printf("333: %s\n", res02);
	return (0);	
}
