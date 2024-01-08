/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:55:44 by zmoumni           #+#    #+#             */
/*   Updated: 2023/12/28 13:23:42 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// int	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 		i++;
// 	return (i);
// }

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
static int	count_word(char *str, char c)
{
	int	i;
	int	cp;

	i = 0;
	cp = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
			cp++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (cp);
}

static char	**malloc_error(char **tbl)
{
	int	k;

	k = 0;
	while (tbl[k])
	{
		free(tbl[k]);
		k++;
	}
	free (tbl);
	return (tbl);
}

static void	skip_char(char	**str, char c, int *j, int i)
{
	while ((*str)[i] && (*str)[i] == c)
		(*str)++;
	(*j) = 0;
	while ((*str)[i] && (*str)[i] != c)
	{
		i++;
		(*j)++;
	}
}

char	**ft_split(char *str, char c)
{
	int		i;
	int		cp;
	int		j;
	char	**tbl;
	int		k;

	k = 0;
	i = 0;
	if (!str)
		return (NULL);
	cp = count_word(str, c);
	tbl = malloc(sizeof(char *) * (cp + 1));
	if (!tbl)
		return (NULL);
	while (cp-- > 0 && str[i])
	{
		skip_char(&str, c, &j, i);
		tbl[k] = (char *)malloc(j + 1);
		if (tbl[k] == 0)
			return (malloc_error(tbl), NULL);
		ft_strlcpy(tbl[k++], str, j + 1);
		str += j;
		i = 0;
	}
	return (tbl[k] = NULL, tbl);
}
