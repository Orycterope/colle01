/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <tvermeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 22:34:56 by tvermeil          #+#    #+#             */
/*   Updated: 2015/08/16 21:44:12 by kguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "grid.h"

struct s_grid	*ft_create_grid(char *lines[])
{
	struct s_grid *pointer_to_grid;

	pointer_to_grid = malloc(sizeof(struct s_grid));
	ft_init_lines(lines, pointer_to_grid);
	ft_init_columns(lines, pointer_to_grid);
	ft_init_blocks(lines, pointer_to_grid);
	return (pointer_to_grid);
}

void			ft_init_lines(char *lines_param[], struct s_grid *grid)
{
	int lin;
	int col;

	lin = 0;
	while (lin < 9)
	{
		col = 0;
		while (col < 9)
		{
			grid->lines[lin][col] = &(lines_param[lin + 1][col]);
			col++;
		}
		lin++;
	}
}

void			ft_init_columns(char *lines_param[], struct s_grid *grid)
{
	int lin;
	int col;

	col = 0;
	while (col < 9)
	{
		lin = 0;
		while (lin < 9)
		{
			grid->columns[col][lin] = &(lines_param[lin + 1][col]);
			lin++;
		}
		col++;
	}
}

void			ft_init_blocks(char *lines[], struct s_grid *grid)
{
	int lin;
	int col;
	int block;
	int case_in_block;

	lin = 0;
	while (lin < 9)
	{
		col = 0;
		while (col < 9)
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
{
	return ((x / 3) + 3 * (y / 3));
}
