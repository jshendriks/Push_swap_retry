/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_mm_n.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhendrik <marvin@42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/06 16:52:10 by jhendrik      #+#    #+#                 */
/*   Updated: 2023/04/13 11:49:40 by jhendrik      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "utils.h"

static t_stack	*rec_nth_max(t_stack *a, size_t n)
{
	t_stack	*prev_max;
	t_stack	*new_max;
	t_stack	*node;

	if (n == 1)
		return (ft_max(a));
	else
	{
		prev_max = rec_nth_max(a, n - 1);
		new_max = NULL;
		node = a;
		while (node)
		{
			if (node->content < prev_max->content)
			{
				if (new_max == NULL)
					new_max = node;
				else if (node->content > new_max->content)
					new_max = node;
			}
			node = node->next;
		}
		return (new_max);
	}
}

static t_stack	*rec_nth_min(t_stack *a, size_t n)
{
	t_stack	*prev_min;
	t_stack	*new_min;
	t_stack	*node;

	if (n == 1)
		return (ft_min(a));
	else
	{
		prev_min = rec_nth_min(a, n - 1);
		new_min = NULL;
		node = a;
		while (node)
		{
			if (node->content > prev_min->content)
			{
				if (new_min == NULL)
					new_min = node;
				else if (node->content < new_min->content)
					new_min = node;
			}
			node = node->next;
		}
		return (new_min);
	}
}

t_stack	*ft_nth_max(t_stack *a, size_t n)
{
	size_t	sizea;

	if (a != NULL && n != 0)
	{
		sizea = ft_stacksize(a);
		if (n <= sizea)
			return (rec_nth_max(a, n));
		return (NULL);
	}
	return (NULL);
}

t_stack	*ft_nth_min(t_stack *a, size_t n)
{
	size_t	sizea;

	if (a != NULL && n != 0)
	{
		sizea = ft_stacksize(a);
		if (n <= sizea)
			return (rec_nth_min(a, n));
		return (NULL);
	}
	return (NULL);
}
