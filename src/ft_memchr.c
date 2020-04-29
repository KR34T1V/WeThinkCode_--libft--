/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 09:06:59 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:22:59 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

/*
	Attempts to find character "c" at "*s" for up to "n" bytes.
	Returns the address of "c" if found, else NULL.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned char charc;

	charc = (unsigned char)c;
	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == charc)
			return (str);
		str++;
	}
	return (NULL);
}
