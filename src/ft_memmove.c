/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 16:34:39 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:24:43 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

/*
	Moves "len" ammount of memory from "src" to "dst".
	Returns the populated pointer.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*strd;
	unsigned char		*strs;

	strd = (unsigned char*)dst;
	strs = (unsigned char*)src;
	if (strs < strd)
	{
		strs += len - 1;
		strd += len - 1;
		while (len--)
			*strd-- = *strs--;
	}
	else
	{
		while (len--)
			*strd++ = *strs++;
	}
	return (dst);
}
