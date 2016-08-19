/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fichier_correction_d04_06.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glictevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 07:32:53 by glictevo          #+#    #+#             */
/*   Updated: 2016/08/10 01:14:14 by nkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//EXERCICE 06
int		ft_is_prime(int nb);

int		main(void)
{
	printf("EXERCICE 06");
	printf("\n");
	printf("Doit afficher \"0\" puis \"0\" puis \"0\" puis \"1\" puis \"1\" puis \"\
0\" puis \"1\"");
	printf("\n");
	printf("2,%d", ft_is_prime(2));
	printf("\n");
	printf("3,%d", ft_is_prime(3));
	printf("\n");
	printf("5,%d", ft_is_prime(5));
	printf("\n");
	printf("11,%d", ft_is_prime(11));
	printf("\n");
	printf("100,%d", ft_is_prime(100));
	printf("\n");
	printf("97,%d", ft_is_prime(97));
	printf("\n");
	printf("98,%d", ft_is_prime(98));
	printf("\n");
	printf("Le prochain resultat doit mettre moins de deux secondes a s'afficher et\
 afficher \"1\"");
	printf("\n");
	printf("%d", ft_is_prime(2147483647));
	printf("\n");
}
