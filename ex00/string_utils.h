/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <tvermeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 18:34:17 by tvermeil          #+#    #+#             */
/*   Updated: 2015/08/15 20:04:24 by tvermeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifdef __STRING_UTILS__
#	define __STRING_UTILS__ 
#	include <unistd.h>
	int		ft_putchar(char	c);
	void	ft_putstr(char *str);
	int		ft_strlen(char *str)
#endif
