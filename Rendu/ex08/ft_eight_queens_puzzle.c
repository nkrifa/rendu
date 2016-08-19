/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkrifa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 15:44:10 by nkrifa            #+#    #+#             */
/*   Updated: 2016/08/10 16:44:55 by nkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char *c)
{
	write (1, c, 1);
}

int		main(void)
{
	char* txt = "Salut";

	printf("%s", txt);
	return (0);
}
