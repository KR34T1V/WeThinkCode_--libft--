/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 08:23:42 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:25:59 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

/*
	Creates a duplicate string from string "s" performing function 
	(*f)(unsigned int, char), passing count and character.
	Returns the new manipulated string, if successfull or null.
*/

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	if (s && f)
	{
		new = ft_strnew(ft_strlen(s));
		i = 0;
		if (!s || !f || !new)
			return (NULL);
		while (s[i])
		{
			new[i] = (*f)(i, s[i]);
			i++;
		}
		return (new);
	}
	return (NULL);
}
