/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:52:19 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/11 15:53:06 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef enum {
    FALSE = 0;
    TRUE = 1;
} t_bool;

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void    EVEN(int nbr)
{
    if (nbr % 2 == 0)
        return (0)
    else
        return (1);
}


void    EVEN_MSG(void)
{
    char s[];

    s[] = "I have an even number of arguments."
    ft_putstr(s);
}

void    ODD_MSG(void)
{
    char a[];

    a[] = "I have an odd number of arguments."
    ft_putstr(a);
}

void    SUCCESS(void)
{
    char    b[];

    b[] = "\n";
    ft_putstr(b);
}
