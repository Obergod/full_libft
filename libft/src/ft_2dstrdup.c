/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2dstrdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafioron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 17:55:55 by mafioron          #+#    #+#             */
/*   Updated: 2025/07/03 17:55:58 by mafioron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	**ft_2dstrdup(char **ss)
{
	int	i;
	char	**dst;

	i = 0;
	while (ss[i])
		i++;
	dst = malloc(sizeof(char *) * (i + 1));
	if (!dst)
		return (NULL);
	i = -1;
	while (ss[++i])
	{
		dst[i] = ft_strdup(ss[i]);
		if (!dst[i])
		{
			return (NULL);
		}
	}
	dst[i] = NULL;
	return (dst);
}
