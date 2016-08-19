/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fichier_correction_07.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glictevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 08:02:58 by glictevo          #+#    #+#             */
/*   Updated: 2016/08/09 14:12:27 by glictevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//EXERCICE 07
int		ft_find_next_prime(int nb);

int	main(void)
{
	printf("EXERCICE 07");
	printf("\n");
	printf("Doit afficher \"2\" puis \"2\" puis \"2\" puis \"2\" puis \"7\" puis \"23\" puis \"29\" puis \"1129\"");
	printf("\n");
	printf("%d", ft_find_next_prime(-1));
	printf("\n");
	printf("%d", ft_find_next_prime(0));
	printf("\n");
	printf("%d", ft_find_next_prime(1));
	printf("\n");
	printf("%d", ft_find_next_prime(2));
	printf("\n");
	printf("%d", ft_find_next_prime(7));
	printf("\n");
	printf("%d", ft_find_next_prime(21));
	printf("\n");
	printf("%d", ft_find_next_prime(28));
	printf("\n");
	printf("%d", ft_find_next_prime(1124));
	printf("\n");
	printf("Le prochain resultat doit mettre moins de deux secondes a s'afficher et afficher \"2147400011\", ce test n'est pas vraiment bon, si vous trouvez un bon teest pour faire ca, dites-le moi");
	printf("\n");
	printf("%d", ft_find_next_prime(2147400002));
	printf("\n");
}
