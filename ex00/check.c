/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <tvermeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 20:14:24 by tvermeil          #+#    #+#             */
/*   Updated: 2015/08/16 21:19:19 by tvermeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grid.h"
#include <stdio.h>

int ft_check_line(char *line[])
{
	int i;
	int b;
	int found;

	i = '1';
	//  printf("%s\n", *line);
	while (i <= '9')
	{
	//	printf("Now testing with : %c\n", i);
		found = 0;
		b = 0;
		while (b < 9)
		{
	//		printf("reading %c while searching for : %c\n", *line[b],i);
			if (*line[b] == i){
	//			printf("added one with%c\n", i);
				found++;
			}
			b++;
		}
		if(found > 1)
		{
	//		printf("error with %c\n", i);
			return 0;
		}
		i++;
	}
//	printf("line ok\n");
	return (1);
}

int ft_check_column(char *column[])
{
	int i;
	int b;
	int found;

	i = '1';
//	 printf("%s\n", *column);
	while (i <= '9')
	{
//		printf("Now testing with : %c\n", i);
		found = 0;
		b = 0;
		while (b < 9)
		{
//			printf("reading %c while searching for : %c\n", *column[b],i);
			if (*column[b] == i){
//				printf("added one with%c\n", i);
				found++;
			}
			b++;
		}
		if(found > 1)
		{
		//	printf("error with %c\n", i);
			return 0;
		}
		i++;
	}
//	printf("column ok\n");
	return (1);
}

int	ft_check_block(char *block[])
{
	int i;
	int b;
	int found;

	i = '1';
	// printf("%s\n", *line);
	while (i <= '9')
	{
	//	printf("Now testing with : %c\n", i);
		found = 0;
		b = 0;
		while (b < 9)
		{
	//		printf("reading %c while searching for : %c\n", *line[b],i);
			if (*block[b] == i){
	//			printf("added one with%c\n", i);
				found++;
			}
			b++;
		}
		if(found > 1)
		{
	//		printf("error with %c\n", i);
			return 0;
		}
		i++;
	}
//	printf("block ok\n");
	return (1);
}

int ft_check_case(int x, int y, struct s_grid *grid)
{
	if (ft_check_line(grid->lines[y]) && ft_check_column(grid->columns[x])
				&& ft_check_block(grid->blocks[ft_get_block_of(x, y)]) == 1)
			return (1);
	else
		return (0);
	/* check la colone, la ligne, et le block a partir du tableau de pointeur des valeurs dans la struct
	 * retourne 0 si faux, 1 si vrai
	 */
}
