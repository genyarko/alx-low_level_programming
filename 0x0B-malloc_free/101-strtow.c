#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	char **s;
	int i, j, k, l, m, n, o, p, q, r, s1, t, u, v, w, x, y, z;

	if (str == NULL || str == "")
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	for (j = 0, k = 0; j < i; j++)
	{
		if (str[j] == ' ')
			k++;
	}
	s = malloc((k + 2) * sizeof(char *));
	if (s == NULL)
		return (NULL);
	for (l = 0, m = 0; l < i; l++)
	{
		if (str[l] != ' ')
		{
			for (n = l; str[n] != ' ' && str[n] != '\0'; n++)
				;
			s[m] = malloc((n - l + 1) * sizeof(char));
			if (s[m] == NULL)
			{
				for (o = 0; o < m; o++)
					free(s[o]);
				free(s);
				return (NULL);
			}
			for (p = l, q = 0; p < n; p++, q++)
				s[m][q] = str[p];
			s[m][q] = '\0';
			m++;
			l = n;
		}
	}
	s[m] = NULL;
	for (r = 0; r < m; r++)
	{
		for (s1 = 0; s[r][s1] != '\0'; s1++)
			;
		for (t = 0, u = s1 - 1; t < u; t++, u--)
		{
			v = s[r][t];
			w = s[r][u];
			s[r][t] = w;
			s[r][u] = v;
		}
	}
	for (x = 0; x < m; x++)
	{
		for (y = x + 1; y < m; y++)
		{
			if (s[x][0] > s[y][0])
			{
				z = s[x];
				s[x] = s[y];
				s[y] = z;
			}
		}
	}
	return (s);
}
