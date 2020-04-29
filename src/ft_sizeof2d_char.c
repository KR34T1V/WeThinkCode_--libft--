/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sizeof2d_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 09:52:16 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:25:20 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"
/*
	Returns the size of the input 2d array (including null terminates)
*/
size_t	ft_sizeof2d_char(char **array)
{
	size_t i;

	if (array)
	{
		i = 0;
		while (array[i])
			i++;
		return (i + 1);
	}
	else
		return (0);
}
