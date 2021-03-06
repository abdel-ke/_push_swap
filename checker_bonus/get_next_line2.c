/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 16:13:03 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/13 18:05:54 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_n(char *str)
{
	while (*str)
	{
		if (*str == '\n')
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strjoin(char *str1, char *str2)
{
	int		i;
	int		len1;
	int		len2;
	char	*new;

	i = 0;
	len1 = ft_strlen(str1);
	len2 = ft_strlen(str2);
	new = malloc(sizeof(char) * (len1 + len2 + 1));
	while (*str1)
		new[i++] = *str1++;
	while (*str2)
		new[i++] = *str2++;
	new[i] = '\0';
	return (new);
}

char	*my_strcut(char *str, int n)
{
	int		len;
	int		i;
	char	*new;

	i = 0;
	len = ft_strlen(str);
	if (len > n)
		len = n;
	new = malloc(sizeof(char) * (len + 1));
	while (*str && len--)
		new[i++] = *str++;
	new[i] = '\0';
	return (new);
}

int	fill_line(char **content, char **line)
{
	int		end;
	char	*tmp;

	end = 0;
	while ((*content)[end] != '\n' && (*content)[end] != '\0')
		end++;
	if ((*content)[end] == '\n')
	{
		*line = my_strcut(*content, end);
		tmp = ft_strdup(*content + end + 1);
		free(*content);
		*content = tmp;
		return (1);
	}
	else if ((*content[end]) == '\0')
	{
		*line = ft_strdup(*content);
		free(*content);
	}
	return (0);
}

int	get_next_line(char **line)
{
	int				r;
	static char		*content;
	char			*tmp;
	char			*buff;

	if (content == NULL)
		content = ft_strdup("");
	buff = malloc(sizeof(char) * 101);
	if (!is_n(content))
	{
		r = 1;
		while (r > 0)
		{
			buff[r] = '\0';
			tmp = ft_strjoin(content, buff);
			free(content);
			content = tmp;
			if (is_n(buff))
				break ;
			r = read(0, buff, 100);
		}
	}
	free(buff);
	return (fill_line(&content, line));
}
