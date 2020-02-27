/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:30:40 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:25:41 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

/*
	Clears string, frees and points "str" to NULL. 
*/

void	ft_strdel(char **str)
{
	if (str)
	{
		ft_strclr(*str);
		free(*str);
		*str = NULL;
	}
}
