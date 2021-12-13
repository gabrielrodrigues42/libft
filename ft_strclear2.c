/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclear2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:08:05 by gandrade          #+#    #+#             */
/*   Updated: 2021/12/12 21:08:30 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclear2(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_strclear(&str[i]);
		i++;
	}
	free(str);
	str = NULL;
}
