/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <tvermeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 20:01:16 by tvermeil          #+#    #+#             */
/*   Updated: 2015/08/16 22:17:36 by tvermeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string_utils.h"
#include "grid.h"
#include "main.h"
#include "check.h"
#include "precheck.h"

int		fill_grid(struct s_grid *grid, int x, int y)
{
	int value;
	int next_x;
	int next_y;

	if (y == 9)
		return (1);
	next_x = x + 1;
	next_y = y;
	if (next_x == 9)
	{
		next_x = 0;
		next_y++;
	}
	if (*(grid->lines[y][x]) != '0')
		return (fill_grid(grid, next_x, next_y));
	value = '0';
	while (++value <= '9')
	{
		*(grid->lines[y][x]) = value;
		if (ft_check_case(x, y, grid) == 1)
			if (fill_grid(grid, next_x, next_y) == 1)
				return (1);
	}
	*(grid->lines[y][x]) = '0';
	return (0);
}

int		main(int argc, char *argv[])
{
	struct s_grid	*grid;

	if (ft_precheck(argc, argv) == 0)
	{
		ft_error();
		return (0);
	}
	grid = ft_create_grid(argv);
	if (fill_grid(grid, 0, 0) == 0)
	{
		ft_error();
		return (0);
	}
	ft_print_grid(grid);
	return (0);
}

void	ft_error(void)
{
	ft_putstr("Erreur\n");
}
