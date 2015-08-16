/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <tvermeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 20:14:24 by tvermeil          #+#    #+#             */
/*   Updated: 2015/08/16 22:05:27 by kguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grid.h"

int		ft_check_line(char *line[])
{
	int i;
	int b;
	int found;

	i = '1';
	while (i <= '9')
	{
		found = 0;
		b = 0;
		while (b < 9)
		{
			if (*line[b] == i)
				found++;
			b++;
		}
		if (found > 1)
			return (0);
		i++;
	}
	return (1);
}

int		ft_check_column(char *column[])
{
	int i;
	int b;
	int found;

	i = '1';
	while (i <= '9')
	{
		found = 0;
		b = 0;
		while (b < 9)
		{
			if (*column[b] == i)
				found++;
			b++;
		}
		if (found > 1)
			return (0);
		i++;
	}
	return (1);
}

int		ft_check_block(char *block[])
{
	int i;
	int b;
	int found;

	i = '1';
	while (i <= '9')
	{
		found = 0;
		b = 0;
		while (b < 9)
		{
			if (*block[b] == i)
				found++;
			b++;
		}
		if (found > 1)
			return (0);
		i++;
	}
	return (1);
}

int		ft_check_case(int x, int y, struct s_grid *grid)
{
	if (ft_check_line(grid->lines[y]) && ft_check_column(grid->columns[x])
		&& ft_check_block(grid->blocks[ft_get_block_of(x, y)]) == 1)
		return (1);
	else
		return (0);
}
