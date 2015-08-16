/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <tvermeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 18:34:17 by tvermeil          #+#    #+#             */
/*   Updated: 2015/08/16 22:09:32 by tvermeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_UTILS_H
# define STRING_UTILS_H
# include "grid.h"
# include <unistd.h>

void	ft_putchar(char	c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_print_grid(struct s_grid *grid);
#endif
