/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   operations.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhendrik <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/09 17:53:49 by jhendrik      #+#    #+#                 */
/*   Updated: 2023/04/06 18:06:09 by jhendrik      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "../../libft/libft.h"
# include "../Utils/utils.h"
# include "../types.h"

//BASIC OPERATIONS TO SORT WITH ---------------
void	ft_swap(t_stack **a);
/*This function swaps the first two elements
  of the stack pointed to by *a.
  It only does this, if the stack has two or more elements.*/
void	ft_swap_ab(t_stack **a, t_stack **b);
/*This function swaps the first two elements
  of both stack *a and *b.*/

//EXTRA OPERATIONS TO SORT WITH -----------------
void	rotate_a_ntimes(t_stack **a, size_t n);
/*Calls rotate_a() n times.*/
void	rotate_b_ntimes(t_stack **b, size_t n);
/*Calls rotate_b() n times.*/
void	rrotate_a_ntimes(t_stack **a, size_t n);
/*Calls rrotate_a() n times.*/
void	rrotate_b_ntimes(t_stack **b, size_t n);
/*Calls rrotate_b() n times.*/
void	push_a_ntimes(t_stack **a, t_stack **b, size_t n);
/*Calls push_a() n times.*/
void	push_b_ntimes(t_stack **a, t_stack **b, size_t n);
/*Calls push_b() n times.*/

//OPERATIONS WITH MESSAGES STACK-------------------
void	swap_a(t_stack **a);
/*Calls ft_swap() and prints message.*/
void	swap_b(t_stack **b);
/*Calls ft_swap() and prints message.*/
void	swap_ab(t_stack **a, t_stack **b);
/*Calls ft_swap_ab() and prints message.*/
void	push_a(t_stack **a, t_stack **b);
void	push_b(t_stack **a, t_stack **b);
void	rotate_a(t_stack **a);
void	rotate_b(t_stack **b);
void	rotate_ab(t_stack **a, t_stack **b);
void	rrotate_a(t_stack **a);
void	rrotate_b(t_stack **b);
void	rrotate_ab(t_stack **a, t_stack **b);

//OPERATIONS WITH MESSAGES MSTCK -------------------
void	swap_a_mstck(t_mstck **a);
/*Calls ft_swap() and prints message.*/
void	swap_b_mstck(t_mstck **b);
/*Calls ft_swap() and prints message.*/
void	swap_ab_mstck(t_mstck **a, t_mstck **b);
/*Calls ft_swap_ab() and prints message.*/
void	push_a_mstck(t_mstck **a, t_mstck **b);
void	push_b_mstck(t_mstck **a, t_mstck **b);
void	rotate_a_mstck(t_mstck **a);
void	rotate_b_mstck(t_mstck **b);
void	rotate_ab_mstck(t_mstck **a, t_mstck **b);
void	rrotate_a_mstck(t_mstck **a);
void	rrotate_b_mstck(t_mstck **b);
void	rrotate_ab_mstck(t_mstck **a, t_mstck **b);

//EXTRA OPERATIONS TO SORT WITH MSTCK-----------------
void	rotate_a_ntimes_mstck(t_mstck **a, size_t n);
void	rotate_b_ntimes_mstck(t_mstck **b, size_t n);
void	rrotate_a_ntimes_mstck(t_mstck **a, size_t n);
void	rrotate_b_ntimes_mstck(t_mstck **b, size_t n);
void	push_a_ntimes_mstck(t_mstck **a, t_mstck **b, size_t n);
void	push_b_ntimes_mstck(t_mstck **a, t_mstck **b, size_t n);
void	rotate_ab_ntimes_mstck(t_mstck **a, t_mstck **b, size_t n);
void	rrotate_ab_ntimes_mstck(t_mstck **a, t_mstck **b, size_t n);

//BASIC OPERATIONS TO SORT WITH MSTCK---------------
void	ft_swap_mstck(t_mstck **a);
/*This function swaps the first two elements
  of the stack pointed to by *a.
  It only does this, if the stack has two or more elements.*/
void	ft_swap_ab_mstck(t_mstck **a, t_mstck **b);
/*This function swaps the first two elements
  of both stack *a and *b.*/

//SPECIAL OPERATIONS -----------------------------
void	case_one(t_stack **a);
void	case_two(t_stack **a);
void	case_three(t_stack **a);
void	case_four(t_stack **a);
void	case_five(t_stack **a);
#endif
