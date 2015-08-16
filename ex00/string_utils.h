/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <tvermeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 18:34:17 by tvermeil          #+#    #+#             */
/*   Updated: 2015/08/16 18:25:32 by tvermeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "grid.h"
#ifndef __STRING_UTILS__
#	define __STRING_UTILS__ 
#	include <unistd.h>
	void	ft_putchar(char	c);
	void	ft_putstr(char *str);
	int		ft_strlen(char *str);
	int		ft_print_grid(struct s_grid *grid);
#endif
