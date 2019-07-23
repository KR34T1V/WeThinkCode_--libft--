/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 13:01:49 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 22:26:29 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/private_libft_includes.h"

char	*ft_strtrim(const char *s)
{
	int				end;
	int				start;
	char			*new;

	if (!s)
		return (NULL);
	end = ft_strlen(s) - 1;
	start = 0;
	while (ft_isspace(s[start]) && start != end)
		start++;
	while (ft_isspace(s[end]) && start != end)
		end--;
	if (start == end || ft_strlen(s) == 0)
		return (ft_strnew(1));
	new = ft_strsub(s, start, end - start + 1);
	if (!new)
		return (NULL);
	return (new);
}
