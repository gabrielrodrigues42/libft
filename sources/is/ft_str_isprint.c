/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isprint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:14:57 by gandrade          #+#    #+#             */
/*   Updated: 2021/08/01 13:47:44 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_isprint(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isprint(str[i]))
			return (1);
		i++;
	}
	return (0);
}
