/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkrifa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 02:41:23 by nkrifa            #+#    #+#             */
/*   Updated: 2016/08/12 03:19:53 by nkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_collatz_one(unsigned int base, int k)
{
	while (base != 1)
	{
		if (base % 2 == 0)
			return (ft_collatz_one(base / 2, k + 1));
		else
			return (ft_collatz_one(base * 3 + 1, k + 1));
	}
	return (k);
}
unsigned int	ft_collatz_conjecture(unsigned int base)
{
	int k;

	k = 0;
	ft_collatz_one(base. k);
	return (ft_collatz_one(base, k));
}
