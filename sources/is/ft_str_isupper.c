/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:49:29 by gandrade          #+#    #+#             */
/*   Updated: 2021/08/01 13:47:58 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_isupper(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isupper(str[i]))
			return (1);
		i++;
	}
	return (0);
}
