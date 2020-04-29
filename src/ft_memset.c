/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 07:55:24 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:24:52 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

/*
	Populates input pointer "mem" with character "c" for "len" amount of bytes.
	Returns the populated pointer address. 
*/

void	*ft_memset(void *mem, int c, size_t len)
{
	char *ptr;

	if (len == 0)
		return (mem);
	ptr = mem;
	while (len-- > 0)
	{
		*ptr++ = c;
	}
	return (mem);
}
