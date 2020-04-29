/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 14:23:40 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:22:27 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

/*
	Checks if input character is whitespace (' ','\n','\t','\v','\f','\r').
	Returns boolean result.
*/

int		ft_isspace(int n)
{
	if (n)
	{
		if (n == ' ' || n == '\n' || n == '\t' || n == '\v' || n == '\f' ||
			n == '\r')
			return (1);
	}
	return (0);
}
