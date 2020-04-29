/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 07:58:41 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:25:58 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

/*
	Creates a duplicate string from string "s" performing function (*f)(char),
	on each cahracter.
	Returns the new manipulated string, if successfull or null.
*/

char	*ft_strmap(const char *s, char (*f)(char))
{
	char			*new;
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		new = ft_strnew(ft_strlen(s));
		if (!s || !f || !new)
			return (NULL);
		while (s[i])
		{
			new[i] = (*f)(s[i]);
			i++;
		}
		return (new);
	}
	return (NULL);
}
