/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarcill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 22:38:32 by ymarcill          #+#    #+#             */
/*   Updated: 2017/11/07 23:16:34 by ymarcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*rec;

	i = 0;
	while (src[i] != '\0')
		i++;
	rec = (char *)malloc(sizeof(char) * i);
	if (rec == NULL)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		rec[i] = src[i];
		i++;
	}
	rec[i] = '\0';
	return (rec);
}
