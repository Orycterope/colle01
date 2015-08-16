/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <tvermeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 22:34:12 by tvermeil          #+#    #+#             */
/*   Updated: 2015/08/16 18:22:14 by tvermeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__GRILLE__
#	define __GRILLE__
struct	s_grid
{
		int	*lines[9][9];
		int	*columns[9][9];
		int	*blocks[9][9];
};
struct s_grid	*ft_create_grid(char *lines[]);
void			ft_init_lines(char *lines_param[], struct s_grid *grid);
void			ft_init_columns(char *lines_param[], struct s_grid *grid);
void			ft_init_blocks(char *lines[], struct s_grid *grid);
int				ft_get_block_of(int x, int y);
#endif
