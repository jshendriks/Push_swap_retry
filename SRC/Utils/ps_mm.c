/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ps_mm.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhendrik <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 12:20:21 by jhendrik      #+#    #+#                 */
/*   Updated: 2023/04/14 16:51:06 by jhendrik      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "utils.h"

t_stack	*ps_max(t_stack *head)
{
	t_stack	*node;
	t_stack	*max;

	max = NULL;
	if (head != NULL)
	{
		node = head;
		max = head;
		while (node != NULL)
		{
			if (node->content > max->content)
				max = node;
			node = node->next;
		}
		return (max);
	}
	return (max);
}

t_stack	*ps_min(t_stack *head)
{
	t_stack	*node;
	t_stack	*min;

	min = NULL;
	if (head != NULL)
	{
		node = head;
		min = head;
		while (node != NULL)
		{
			if (node->content < min->content)
				min = node;
			node = node->next;
		}
		return (min);
	}
	return (min);
}

t_mstck	*ps_mstckmax(t_mstck *head)
{
	t_mstck	*node;
	t_mstck	*max;

	max = NULL;
	if (head != NULL)
	{
		node = head;
		max = head;
		while (node != NULL)
		{
			if (node->content > max->content)
				max = node;
			node = node->next;
		}
		return (max);
	}
	return (max);
}

t_mstck	*ps_mstckmin(t_mstck *head)
{
	t_mstck	*node;
	t_mstck	*min;

	min = NULL;
	if (head != NULL)
	{
		node = head;
		min = head;
		while (node != NULL)
		{
			if (node->content < min->content)
				min = node;
			node = node->next;
		}
		return (min);
	}
	return (min);
}
