/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <tvermeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 22:34:12 by tvermeil          #+#    #+#             */
/*   Updated: 2015/08/16 22:03:52 by tvermeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRID_H
# define GRID_H

struct			s_grid
{
	char	*lines[9][9];
	char	*columns[9][9];
	char	*blocks[9][9];
};
struct s_grid	*ft_create_grid(char *lines[]);
void			ft_init_lines(char *lines_param[], struct s_grid *grid);
void			ft_init_columns(char *lines_param[], struct s_grid *grid);
void			ft_init_blocks(char *lines[], struct s_grid *grid);
int				ft_get_block_of(int x, int y);
#endif
