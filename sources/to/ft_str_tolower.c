/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_tolower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 00:50:53 by gandrade          #+#    #+#             */
/*   Updated: 2021/08/01 13:57:19 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_tolower(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isupper(str[i]))
			ft_tolower(str[i]);
		i++;
	}
	return (str);
}
