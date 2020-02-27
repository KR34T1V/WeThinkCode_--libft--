/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 11:14:38 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:22:35 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

/*
	Converts the input interger and returns character string
*/

static size_t	ft_getlen(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

static void		ft_iszero(char *new, int n)
{
	if (n == 0)
		new[0] = '0';
}

char			*ft_itoa(int n)
{
	size_t			i;
	unsigned int	tmp;
	int				sign;
	char			*new;

	sign = 1;
	i = ft_getlen(n);
	if (n < 0)
	{
		sign = -1;
		n *= -1;
		i++;
	}
	tmp = n;
	if (!(new = ft_strnew(i)))
		return (NULL);
	ft_iszero(new, n);
	while (i--)
	{
		new[i] = (tmp % 10) + '0';
		tmp /= 10;
	}
	if (sign == -1)
		new[0] = '-';
	return (new);
}
