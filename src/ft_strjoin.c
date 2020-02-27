/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 12:36:49 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:25:51 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

/*
	Joins string "s2" with string "s1", returns the allocated joined string
	or NULL if unsuccessfull.
*/

char	*ft_strjoin(const char *s1, const char *s2)
{
	char			*new;

	if (s1 && s2)
	{
		new = (ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1));
		if (!s1 || !s2 || !new)
			return (NULL);
		ft_strcat(new, s1);
		ft_strcat(new, s2);
		return (new);
	}
	return (NULL);
}
