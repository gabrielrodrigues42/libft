/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst2c_add_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 22:38:51 by gandrade          #+#    #+#             */
/*   Updated: 2021/12/29 10:02:36 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst2c_add_front(t_lst2c **head, t_lst2c *new_node)
{
	t_lst2c	*tail;

	if (!*head)
	{
		new_node->next = new_node;
		new_node->prev = new_node;
		*head = new_node;
	}
	else
	{
		tail = ft_lst2c_last(*head);
		new_node->next = *head;
		new_node->prev = tail;
		(*head)->prev = new_node;
		tail->next = (*head)->prev;
		*head = new_node;
	}
}
