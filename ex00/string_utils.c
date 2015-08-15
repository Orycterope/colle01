/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <tvermeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 18:34:02 by tvermeil          #+#    #+#             */
/*   Updated: 2015/08/15 23:06:31 by tvermeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string_utils.h"

int		ft_putchar(char	c)
{
	write(1, &c, 1);
	return 0;
}

void	ft_putstr(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		ft_putchar(str[c]);
		c++;
	}
}

int		ft_strlen(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c + 1);
}

int		*ft_get_int_array_from_string(char *str)
{
	/* retourne un tableau d'entier a partir de la string
	 * transforme les points en 0,
	 * verifie les caractères de la string
	 * check si la ligne est valide avec ft_check_line
	 * retourne 0 si il y a eu une erreur.
	 */
}
