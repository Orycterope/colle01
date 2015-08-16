/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precheck.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <tvermeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/16 15:17:30 by tvermeil          #+#    #+#             */
/*   Updated: 2015/08/16 18:42:21 by tvermeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string_utils.h"

int	ft_precheck(int argc, char *argv[])
{
	int	lin;
	int	col;

	if (argc != 10)
		return (0);
	lin = 1;
	while (lin < 10)
	{
		if (ft_strlen(argv[lin]) != 9)
			return (0);
		col = 0;
		while (col < 9)
		{
			if (argv[lin][col] == '.')
				argv[lin][col] = '0';
			else if (argv[lin][col] < '0' || argv[lin][col] > '9')
				return (0);
			col++;
		}
		lin++;
	}
	return (1);
}
