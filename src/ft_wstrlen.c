/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 11:52:11 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:26:43 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

/*
	Returns the length of a wide character string "ws"
*/

size_t	ft_wstrlen(wchar_t *ws)
{
	int		i;
	size_t	rtn;

	i = 0;
	rtn = 0;
	while (ws[i++] != '\0')
	{
		if (ws[i] >= 0 && ws[i] <= 127)
			rtn += 1;
		else if (ws[i] >= 128 && ws[i] <= 2047)
			rtn += 2;
		else if (ws[i] >= 2048 && ws[i] <= 65535)
			rtn += 3;
		else if (ws[i] >= 65536 && ws[i] <= 1114111)
			rtn += 4;
	}
	return (rtn);
}
