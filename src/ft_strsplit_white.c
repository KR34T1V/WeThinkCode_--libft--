/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_white.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 11:55:59 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:26:19 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

/*
	Split string "s" at every whitespace, 
	Returning a string array containing all the split words.
*/

char	**ft_strsplit_white(const char *s)
{
	char	**str;
	int		a1;
	int		a2;
	int		start;

	a1 = 0;
	a2 = 0;
	str = (char **)ft_memalloc(sizeof(char *) * (ft_wordcount_white(s) +1));
	if (!s || !str)
		return (NULL);
	while (s[a2])
	{
		if (ft_isspace(s[a2]))
			a2++;
		else
		{
			start = a2;
			while (s[a2] && (!(ft_isspace(s[a2]))))
				a2++;
			str[a1++] = ft_strsub(s, start, a2 - start);
		}
	}
	str[a1] = 0;
	return (str);
}
