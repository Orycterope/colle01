/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <tvermeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 20:14:24 by tvermeil          #+#    #+#             */
/*   Updated: 2015/08/16 15:38:10 by kguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grid.h"

int ft_check_line(int *line[])
{
	int i;
	int b;

	i = 0;
	b = 0;
	while (i < 9)
	{
		while (b < 9)
		{
			if (i == b)
				b++;
			if (*line[i] == *line[b])
				return (0);
			b++;
		}
		i++;
	}
	return (1);
}

int ft_check_column(int *column[])
{
	int i;
	int b;

	i = 0;
	b = 0;
	while (i < 9)
	{
		while (b < 9)
		{
			if (i == b)
				b++;
			if (*column[i] == *column[b])
				return (0);
			b++;
		}
		i++;
	}
	return (1);
}

int ft_check_block(int *block[])
{
	int i;
	int b;

	i = 0;
	b = 0;
	while (i < 9)
	{
		while (b < 9)
		{
			if (i == b)
				b++;
			if (*block[i] == *block[b])
				return (0);
			b++;
		}
		i++;
	}
	return (1);
}

int ft_check_case(int x, int y, t_grid *grid)
{
	if (ft_check_line(grid->line[x]) && ft_check_column(grid->column[y])
				&& ft_check_block(grid->block[ft_get_block_of(x, y)]) == 1)
			return (1);
	else
		return (0);
	/* check la colone, la ligne, et le block a partir du tableau de pointeur des valeurs dans la struct
	 * retourne 0 si faux, 1 si vrai
	 */
}

int ft_check_all(t_grid *grid)
{
	/* check toute la grille en ceckant une a une toutes les lignes,
	 * toutes les collonnes et tous les blocks
	 */
}
