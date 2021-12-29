/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst2c_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 22:38:51 by gandrade          #+#    #+#             */
/*   Updated: 2021/12/29 10:48:51 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lst2c_size(t_lst2c *head)
{
	int	len;

	len = 0;
	head->prev->next = NULL;
	while (head)
	{
		head = head->next;
		len++;
	}
	return (len);
}
