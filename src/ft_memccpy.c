/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 15:12:15 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:22:56 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

/*
	Copies memory from "src" to "dst" for "n" ammount bytes, but stops on "c".
	If "c" is found it returns the next memory byte position. else NULL. 
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*str2;
	unsigned const char	*str1;

	str2 = (unsigned char *)dst;
	str1 = (unsigned const char *)src;
	while (n--)
	{
		*str2 = *str1;
		if (*str1 == (unsigned char)c)
			return (++str2);
		str1++;
		str2++;
	}
	return (NULL);
}
