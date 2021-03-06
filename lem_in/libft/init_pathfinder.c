/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_pathfinder.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 11:38:14 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/20 11:38:26 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	init_pathfinder(t_pathfinder *pt_map, t_sgraph *pt_sgraph)
{
	int		vertices;

	if ((pt_map == NULL) || (pt_sgraph == NULL))
		return (0);
	vertices = pt_sgraph->pt_graph->vertices;
	pt_map->visited = (int *)ft_memalloc(sizeof(int) * vertices);
	if (pt_map->visited == NULL)
		return (0);
	pt_map->edge_to = (int *)ft_memalloc(sizeof(int) * vertices);
	if (pt_map->edge_to == NULL)
	{
		ft_memdel((void **)&(pt_map->visited));
		return (0);
	}
	pt_map->pt_sgraph = pt_sgraph;
	pt_map->paths = NULL;
	return (1);
}
