/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:47:46 by equiana           #+#    #+#             */
/*   Updated: 2019/09/04 17:11:50 by equiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *ptr;

	i = 0;
	if (min >= max)
		return (NULL);
	ptr = (int*)malloc(sizeof(int) * (max - min));
	if (ptr == NULL)
		return (NULL);
	while (i < max - min)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
