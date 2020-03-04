/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CTerblanche <1997corry@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 02:59:36 by CTerblanche       #+#    #+#             */
/*   Updated: 2020/03/04 03:05:04 by CTerblanche      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

/*
    Appends string "s2" to string "s1" and clears the memory of "s1"
*/

char	*ft_strjoinfree(const char *s1, const char *s2) 
{    
    char *tmp;

    tmp = ft_strjoin(s1,s2);
    ft_memdel((void *)&s1);
    return(tmp);
}