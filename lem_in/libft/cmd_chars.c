/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_chars.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 11:05:23 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/15 11:05:27 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	cmd_chars(char *str)
{
	if ((str == NULL) || (ft_strlen(str) == 0))
		return (0);
	if ((str[0] == '#') && (str[1] == '#'))
		return (1);
	return (0);
}
