/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 10:58:42 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:26:17 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

char	*ft_strrchr(const char *s, int c)
{
	char a;
	char *str;
	char *tmp;

	a = (char)c;
	str = (char *)s;
	tmp = NULL;
	if (!s || !c)
		return (NULL);
	while (*str != '\0')
	{
		if (*str == a)
			tmp = &*str;
		str++;
	}
	if (a == '\0' && *str == '\0')
		tmp = &*str;
	return (tmp);
}
