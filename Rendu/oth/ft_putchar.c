/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkrifa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 20:29:27 by nkrifa            #+#    #+#             */
/*   Updated: 2016/08/08 20:30:43 by nkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}
