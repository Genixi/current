/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 21:13:07 by equiana           #+#    #+#             */
/*   Updated: 2019/09/06 21:33:08 by equiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		subcycle(char *str, char *to_find, int len)
{
	int i;

	i = 0;
	while (str[i] == to_find[i])
	{
		if (to_find[i + 1] == '\0')
			return (1);
		if (i == len - 1)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strnstr(char *str, char *to_find, int len)
{
	int i_str;
	int i_to_find;

	i_str = 0;
	i_to_str = 0;
	while (to_find[i_to_find] != '\0')
		i_to_find++;
	if (i_to_find == 0)
		return (str);
	while (str[i_str] != '\0')
	{
		i_to_find = 0;
		if (subcycle(str + i_str, to_find, len))
			return (str + i_str);
		i_str++;
	}
	return (0);
}
