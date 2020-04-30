/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CTerblanche <1997corry@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 10:50:35 by CTerblanche       #+#    #+#             */
/*   Updated: 2020/02/27 18:17:51 by CTerblanche      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

/*
	Changes all lowercase characters to uppercase, in 
	string "str" and returns the converted string.
*/

char *ft_strtoupper(const char *str)
{
	size_t i;
    char *tmp;

	i = 0;
    tmp = (char *)str;
	while (tmp[i] != '\0'){
    	if (ft_islower(tmp[i])){
        	tmp[i] = ft_toupper(tmp[i]);
		}
		i++;
	}
	return (tmp);
}
