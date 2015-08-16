/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <tvermeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 22:34:56 by tvermeil          #+#    #+#             */
/*   Updated: 2015/08/16 18:39:50 by tvermeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "grid.h"

struct s_grid	*ft_create_grid(char *lines[])
{
	/* cree la struct grid 
	 * et la remplie avec les fonctions ft_init_lines, ft_init_colums, et ft_init_blocks
	 * renvoie un pointeur sur la structure
	 */
	struct s_grid *pointer_to_grid;

	pointer_to_grid = malloc(sizeof(struct s_grid));
	ft_init_lines(lines, pointer_to_grid);
	ft_init_columns(lines, pointer_to_grid);
	ft_init_blocks(lines, pointer_to_grid);
	return (pointer_to_grid);
}

void			ft_init_lines(char *lines_param[], struct s_grid *grid)
/* remplie les lignes de la grille avec des pointeurs a partir du tableau des ints passé en param
 */
{
	int lin;
	int col;

	lin = 0;
	while(lin < 9)
	{
		col = 0;
		while(col < 9)
		{
			grid->lines[lin][col] = &(lines_param[lin + 1][col]);
			col++;
		}
		lin++;
	}
}

void			ft_init_columns(char *lines_param[], struct s_grid *grid)
/* remplie les colonnes de la grille avec des pointeurs a partir du tableau des ints passé en param
 */
{
	int lin;
	int col;

	col = 0;
	while(col < 9)
	{
		lin = 0;
		while(lin < 9)
		{
			grid->columns[lin][col] = &(lines_param[col][lin + 1]);
			lin++;
		}
		col++;
	}
}

void			ft_init_blocks(char *lines[], struct s_grid *grid)
/* remplie les blocks de la grille avec des pointeurs a partir du tableau des ints passé en param
*/
{
	int lin;
	int col;
	int block;
	int case_in_block;

	lin = 0;
	while(lin < 9)
	{
		col = 0;
		while(col < 9)
		{
			block = ft_get_block_of(col, lin);
			case_in_block = (col % 3) + 3 * (lin % 3);
			grid->blocks[block][case_in_block] = &(lines[lin + 1][col]);
			col++;
		}
		lin++;
	}
}

int				ft_get_block_of(int x, int y)
/* renvoie le numero du block des coordonnees passées en paramètre
*/
{
	return((x / 3) + 3 * (y / 3));
}
