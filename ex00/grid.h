/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <tvermeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 22:34:12 by tvermeil          #+#    #+#             */
/*   Updated: 2015/08/15 22:34:35 by tvermeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__GRILLE__
#	define __GRILLE__
typedef struct	s_grid
{
		int	***lines;
		int	***columns;
		int	***blocks;
}	t_grille;
#endif
