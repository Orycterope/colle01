/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <tvermeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 20:01:16 by tvermeil          #+#    #+#             */
/*   Updated: 2015/08/16 17:08:47 by tvermeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string_utils.h"

int		fill_grid(t_grid *grid, int x, int y)
/* remplie la grille par recurence
 * check a chaque fois si la nouvelle entrée est valide,
 * sinon passe a la suivante
 * renvoie 1 si la grille est remplie,
 * 0 si cela a mené a une erreur
 */
{
	int value;
	int next_x;
	int next_y;

	if (x == 9 && y == 8)
		return (1);
	next_x = x + 1;
	next_y = y + 1;
	if (next_x == 9)
	{
		next_x = 0;
		next_y++;
	}
	if (*(grid->lines[y][x]) != 0)
		return (fill_grid(next_x, next_y));
	value = 1;
	while (value <= 9)
	{
		*(grid->lines[y][x]) = value;
		if (ft_check_case(x, y, grid) == 1)
			if (fill_grid(next_x, next_y) == 1)
				return (1);
		value++;
	}
	return (0);
}

int		main(argc, *argv[])
/* check le nombre de parametres
 * appelle la fonction grid pour creer et remplir la grille avec les param
 * check le resultat de grid
 * appelle fill_grid pour remplir la grille
 * traite le resultat de fill_grid
 * imprime la grille sur la sortie standard
 */
{
	t_grid	*grid;

	if (ft_precheck(argc, argv == 0))
	{
		ft_error;
		return (0);
	}
	*grid = ft_create_grid(argv);
	if (fill_grid(0, 0, grid) == 0)
	{
		ft_error();
		return (0);
	}
	ft_print_grid(grid);
	return (0);
}

void	ft_error()
{
	ft_putstr("Error\n");
}
