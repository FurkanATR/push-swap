/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 19:24:24 by fakman            #+#    #+#             */
/*   Updated: 2023/02/24 19:24:24 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_r_rotate(t_stack **root, char opt)
{
	t_stack	*tail;
	t_stack	*rt_val;

	if (*root == NULL || (*root)->next == NULL)
		return ;
	tail = *root;
	while (tail->next->next != NULL)
		tail = tail->next;
	rt_val = ft_stack_new(tail->next->num);
	free(tail->next);
	tail->next = NULL;
	ft_stack_push(root, rt_val);
	free(rt_val);
	if (opt == 'a')
		ft_printf("rra\n");
	else if (opt == 'b')
		ft_printf("rrb\n");
}

void	ft_rrr(t_stack **root_a, t_stack **root_b)
{
	if (*root_a != NULL && (*root_a)->next != NULL)
		ft_r_rotate(root_a, '0');
	if (*root_b != NULL && (*root_b)->next != NULL)
		ft_r_rotate(root_b, '0');
	ft_printf("rrr\n");
}
