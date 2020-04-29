/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 10:59:27 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:25:38 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

/*
	Copies string "src" to "dst" and returns populated pointer "dst".
*/

char	*ft_strcpy(char *dst, const char *src)
{
	char *tdst;

	tdst = dst;
	while (*src)
	{
		*tdst++ = *src++;
	}
	*tdst = '\0';
	return (dst);
}
