/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <tvermeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/16 17:30:27 by tvermeil          #+#    #+#             */
/*   Updated: 2015/08/16 17:34:46 by tvermeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_check_line(int *line[]);
int ft_check_column(int *column[]);
int ft_check_block(int *block[]);
int ft_check_case(int x, int y, struct s_grid *grid);
int ft_check_all(struct s_grid *grid);
