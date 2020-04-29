/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 10:31:26 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:25:24 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

/*
	Attempts to find char "c" in string "s".
	Returns pointer position to "c" if it is found '\0' included, or NULL.
*/

char	*ft_strchr(const char *s, int c)
{
	char a;
	char *str;

	a = (char)c;
	str = (char *)s;
	while (*str != '\0')
	{
		if (*str == a)
			return (&*str);
		str++;
	}
	if (a == '\0' && *str == '\0')
		return (&*str);
	else
		return (NULL);
}
