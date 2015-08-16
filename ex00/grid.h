/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <tvermeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 22:34:12 by tvermeil          #+#    #+#             */
/*   Updated: 2015/08/16 12:12:25 by tvermeil         ###   ########.fr       */
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
#endif
