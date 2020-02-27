/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 16:27:35 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:26:08 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

/*
	Copies "n" amount of characters from string "src" to string "dst",
	returns a pointer to populated string "dst"
*/

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char		*tdst;
	size_t		tlen;

	tdst = dst;
	tlen = -1;
	while (++tlen < len && *src)
		*tdst++ = *src++;
	while (tlen++ < len)
		*tdst++ = '\0';
	return (dst);
}
