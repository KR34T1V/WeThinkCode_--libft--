/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 13:19:10 by cterblan          #+#    #+#             */
/*   Updated: 2018/06/14 08:30:24 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_move_on(const char *str)
{
	int i;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	return (i);
}

int			ft_atoi(char const *str)
{
	int i;
	int sign;
	int ans;

	i = ft_move_on(str);
	sign = 1;
	ans = 0;
	if (str[i] == '+' && ft_isdigit(str[i + 1]))
		i++;
	if (str[i] == '-' && ft_isdigit(str[i + 1]))
	{
		sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		ans += (str[i] - '0');
		if (ft_isdigit(str[i + 1]))
			ans *= 10;
		i++;
	}
	return (ans * sign);
}
