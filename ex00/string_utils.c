/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <tvermeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 18:34:02 by tvermeil          #+#    #+#             */
/*   Updated: 2015/08/16 17:44:09 by kguillot         ###   ########.fr       */
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

int		print_array(grid)
{
	int i;
	int b;

	i = 0;
	b = 0;
	while (i < 9)
	{
		while (b < 9)
		{
			write (1, &grid[i][b], 1);
			write (1, " ", 1);
			b++;
		}
		write (1, "\n", 1);
		b = 0;
		i++;
	}
	return (0);
}
