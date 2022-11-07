/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugde-cl <hugde-cl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:28:23 by hugde-cl          #+#    #+#             */
/*   Updated: 2022/11/07 17:33:05 by hugde-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	i;
	int	words_tot;

	i = 0;
	words_tot = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words_tot++;
		i++;
	}
	return (words_tot);
}

static size_t	ft_size_words(const char *s, char c, int word, int *i)
{
	size_t	j;

	*i = 0;
	j = 0;
	if (s[0] != c)
		word--;
	while (s[*i] && word > 0)
	{
		if (s[*i] == c && (s[(*i) + 1] != c && s[(*i) + 1] != '\0'))
		{
			word--;
		}
		(*i)++;
	}
	while (!word && (s[(*i) + j] != c && s[(*i) + j]))
		j++;
	return (j);
}

static char	*ft_write_words(const char *s, char *matrix, char c, int i)
{
	int	j;

	j = 0;
	while (s[i + j] != c && s[i + j])
	{
		matrix[j] = s[i + j];
		j++;
	}
	matrix[j] = '\0';
	return (matrix);
}

static char	*ft_matrix(const char *s, char c, char **matrix, int word)
{
	int	k;
	int	i;

	i = 0;
	k = 0;
	matrix[word] = malloc(sizeof(*matrix[word])
			* ft_size_words(s, c, word + 1, &i) + 1);
	if (!matrix[word])
	{
		while (k < word)
		{
			free(matrix[k]);
			k++;
		}
		free(matrix);
		return (NULL);
	}
	matrix[word] = ft_write_words(s, matrix[word], c, i);
	return (matrix[word]);
}

char	**ft_split(const char *s, char c)
{	
	int		words_tot;
	int		word;
	char	**matrix;

	if (!s)
		return (NULL);
	word = 0;
	words_tot = ft_count_words(s, c);
	matrix = malloc(sizeof(*matrix) * (words_tot + 1));
	if (!matrix)
		return (NULL);
	while (word < words_tot)
	{
		matrix[word] = ft_matrix(s, c, matrix, word);
		if (!matrix[word])
			return (NULL);
		word++;
	}
	matrix[word] = NULL;
	return (matrix);
}

// int	ft_countword(char const *s, char c)
// {
// 	int	i;
// 	int	check_word;

// 	i = 0;
// 	check_word = 0;
// 	while (s[i])
// 	{
// 		if ((s[i] != c && s[i + 1] == c) || s[i + 1] == '\0')
// 			check_word++;
// 		i++;
// 	}
// 	return (check_word);
// }

// static	size_t	ft_sizeword(const char *s, char c, int word, int *i)
// {
// 	size_t	j;

// 	*i = 0;
// 	j = 0;
// 	if (s[*i] && word > 0)
// 	{
// 		if (s[*i] == c && (s[*i + 1]) != c
// 			&& s[(*i) + 1] && s[(*i) + 1] != '\0')
// 			word--;
// 		(*i)++;
// 	}
// 	while (!word && (s[(*i) + j] != c && s[(*i) + j]))
// 		j++;
// 	return (j);
// }	

// static	char	*ft_writeword(char const *s, char c, int word, char *matrix)
// {
// 	int	i;

// 	i = 0;
// 	while (s[word + i] != c && s[word + i])
// 	{
// 		matrix[i] = s[word + i];
// 		i++;
// 	}
// 	matrix[i] = '\0';
// 	return (matrix);
// }

// static	char	*ft_matrix(const char *s, char c, char **matrix, int word)
// {
// 	int	k;
// 	int	j;

// 	k = 0;
// 	j = 0;
// 	matrix[word] = malloc(sizeof(*matrix[word])
// 			* ft_sizeword(s, c, word + 1, &j) + 1);
// 	if (!matrix[word])
// 	{
// 		while (k < word)
// 		{
// 			free(matrix[k]);
// 			k++;
// 		}
// 		free(matrix);
// 		return (NULL);
// 	}
// 	matrix[word] = ft_writeword(s, c, word, matrix[word]);
// 	return (matrix[word]);
// }

// char	**ft_split(char const *s, char c)
// {
// 	int		word;
// 	int		word_total;
// 	char	**matrix;

// 	word = 0;
// 	if (!s)
// 		return (NULL);
// 	word_total = ft_countword(s, c);
// 	matrix = malloc(sizeof(matrix) * (word_total + 1));
// 	if (!matrix)
// 		return (NULL);
// 	while (word < word_total)
// 	{
// 		matrix[word] = ft_matrix(s, c, matrix, word);
// 		if (!matrix[word])
// 			return (NULL);
// 		word++;
// 	}
// 	matrix[word] = NULL;
// 	return (matrix);
// }

// #include <stdio.h>

// int main ()
// {
// 	char str1[] = "hugoseparateur!";
// 	char lettre = 's';

// 	printf ("%c\n", **ft_split(str1, lettre));
// 	return (0);	
// }