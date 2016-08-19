/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkrifa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 19:52:25 by nkrifa            #+#    #+#             */
/*   Updated: 2016/08/18 20:07:31 by nkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*str;

	if (min >= max)
		return (str = 0);
	i = 0;
	if((str = (int*)malloc(sizeof(int) * (max - min + 1))) == NULL)
		return (NULL);
	while (min < max)
	{
		str[i] = min;
		i++;
		min++;
	}
	return (str);
}
