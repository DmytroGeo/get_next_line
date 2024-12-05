/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <dgeorgiy@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 10:15:03 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/12/05 12:15:39 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	n;

	n = 0;
	while (s[n])
		n++;
	return (n);
}

char	*ft_strchr(const char *s, int c)
{
	size_t			n;
	unsigned char	uc;
	char			*str;

	str = (char *)s;
	n = 0;
	uc = (unsigned char)c;
	if (uc == '\0')
		return (str + ft_strlen(str));
	else
	{
		while (str[n] != '\0')
		{
			if (str[n] == uc)
				return (str + n);
			n++;
		}
		return (NULL);
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, len1);
	ft_memcpy(str + len1, s2, len2);
	str[len1 + len2] = '\0';
	return (str);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

	d = dest;
	s = src;
	while (n != 0)
	{
		n--;
		d[n] = s[n];
	}
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*str;

	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	else
		ft_memcpy(str, s, ft_strlen(s) + 1);
	return (str);
}
