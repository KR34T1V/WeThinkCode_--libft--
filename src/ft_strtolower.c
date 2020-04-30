/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CTerblanche <1997corry@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 10:50:35 by CTerblanche       #+#    #+#             */
/*   Updated: 2020/02/27 18:17:31 by CTerblanche      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

/*
	Changes all uppercase characters to lowercase in 
	string "str" and returns the converted string.
*/

char *ft_strtolower(const char *str)
{
	size_t i;
    char *tmp;

	i = 0;
    tmp = (char *)str;
	while (tmp[i] != '\0'){
    	if (ft_isupper(tmp[i])){
        	tmp[i] = ft_tolower(tmp[i]);
		}
		i++;
	}
	return (tmp);
}
