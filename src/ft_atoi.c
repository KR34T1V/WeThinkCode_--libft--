/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 13:19:10 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:21:52 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

static int	ft_move_on(const char *str)
{
	int i;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	return (i);
}

/*
	Takes the given "char *str" and returns the interger conversion thereof.
*/
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
