/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 10:09:57 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/07 10:10:01 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	m;

	m = 0;
	while (s1[m] == s2[m] && s1[m])
	{
		m++;
	}
	return (s1[m] - s2[m]);
}

char	**ft_sort_arrays(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
	return (argv);
}

int	main(int argc, char **argv)
{
	int		i;
	char	**sorted;

	i = 1;
	sorted = ft_sort_arrays(argc, argv);
	if (argc < 2)
		return (0);
	while (i < argc)
	{
		ft_putstr(sorted[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
