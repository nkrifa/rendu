/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkrifa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 19:52:25 by nkrifa            #+#    #+#             */
/*   Updated: 2016/08/17 00:28:37 by nkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *str;

	str =(int*)malloc(sizeof(int) * (max - min + 1));
	i = min + 1;
	while (i < max)
	{
		str[i - min + 1] = i;
		i++;
	}
	return (str);
}
