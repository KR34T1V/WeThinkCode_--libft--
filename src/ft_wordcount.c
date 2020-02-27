/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:07:50 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:26:40 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

/*
	Counts all the words separated by the character "c" in string "s".
	Returns the amount of words found in string "s"
*/

int	ft_wordcount(const char *s, char c)
{
	unsigned int	words;
	unsigned int	i;

	words = 0;
	i = 0;
	if (!s || !c)
		return (0);
	if (s[i] != c)
		words++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
			words++;
		}
		i++;
	}
	return (words);
}
