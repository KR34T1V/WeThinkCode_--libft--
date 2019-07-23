/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount_white.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:07:50 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:26:38 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

size_t		ft_wordcount_white(const char *s)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	if (!s)
		return (0);
	if (!(ft_isspace(s[i])))
		words++;
	while (s[i] != '\0')
	{
		if (ft_isspace(s[i]))
		{
			while (ft_isspace(s[i]))
				i++;
			if ((!ft_isspace(s[i])) && (s[i] != '\0'))
				words++;
		}
		i++;
	}
	return (words);
}
