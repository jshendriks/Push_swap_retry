/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ps_mstcknew.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhendrik <marvin@42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/27 14:36:51 by jhendrik      #+#    #+#                 */
/*   Updated: 2023/04/14 16:58:57 by jhendrik      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "utils.h"

static t_moves	*st_movesnew(void)
{
	t_moves	*moves;

	moves = malloc(sizeof(t_moves));
	if (moves == NULL)
		return (NULL);
	moves->ra = 0;
	moves->rb = 0;
	moves->rr = 0;
	moves->rra = 0;
	moves->rrb = 0;
	moves->rrr = 0;
	moves->sa = 0;
	moves->sb = 0;
	moves->ss = 0;
	moves->pa = 0;
	moves->pb = 0;
	moves->total = 0;
	return (moves);
}

static t_map	*st_free_incommap(t_map *map)
{	
	if (map->upup == NULL)
		return (free(map), NULL);
	else if (map->updown == NULL)
	{
		free(map->upup);
		return (free(map), NULL);
	}
	else if (map->downdown == NULL)
	{
		free(map->upup);
		free(map->updown);
		return (free(map), NULL);
	}
	else
	{
		free(map->upup);
		free(map->updown);
		free(map->downdown);
		return (free(map), NULL);
	}
}

static t_map	*st_allocmoves(t_map *map)
{
	map->upup = st_movesnew();
	if (map->upup == NULL)
		return (st_free_incommap(map));
	map->updown = st_movesnew();
	if (map->updown == NULL)
		return (st_free_incommap(map));
	map->downdown = st_movesnew();
	if (map->downdown == NULL)
		return (st_free_incommap(map));
	map->downup = st_movesnew();
	if (map->downup == NULL)
		return (st_free_incommap(map));
	return (map);
}

static t_map	*st_mapnew(void)
{
	t_map	*map;

	map = malloc(sizeof(t_map));
	if (map == NULL)
		return (NULL);
	return (st_allocmoves(map));
}

t_mstck	*ps_mstcknew(int content)
{
	t_mstck	*node;

	node = malloc(sizeof(t_mstck));
	if (node == NULL)
		return (NULL);
	node->map = st_mapnew();
	if (node->map == NULL)
		return (free(node), NULL);
	node->prev = NULL;
	node->content = content;
	node->index = 0;
	node->mark = 0;
	node->next = NULL;
	return (node);
}
