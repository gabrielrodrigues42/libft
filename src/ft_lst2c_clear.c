/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst2c_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 22:38:51 by gandrade          #+#    #+#             */
/*   Updated: 2021/12/27 12:53:27 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst2c_clear(t_lst2c **lst, void (*del)(void *))
{
	t_lst2c	*tmp;

	if (!*lst)
		return ;
	(*lst)->prev->next = NULL;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lst2c_del_node(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}
