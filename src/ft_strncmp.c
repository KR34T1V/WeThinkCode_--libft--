/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 15:15:58 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:26:04 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

/*
	Compares string "s1" with string "n2" for "n" ammount of characters,
	if the strings match 0 is returned, otherwise the difference size is retiurned;
*/

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	while (*s1 == *s2 && --n)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return ((*(unsigned const char *)s1) - (*(unsigned const char *)s2));
}
