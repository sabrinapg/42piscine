/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 20:33:13 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/02/24 20:33:16 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    while (*s1 && *s2)  // Continue until one of the strings ends
    {
        if (*s1 != *s2)  // Check if characters differ
        {
            if (*s1 > *s2)
                return 1;  // s1 is greater than s2
            else
                return -1; // s1 is less than s2
        }
        s1++;
        s2++;
    }

    // Now check if strings have different lengths
    if (*s1 != *s2) 
    {
        if (*s1 > *s2)
            return 1;  // s1 is greater (longer)
        else
            return -1; // s1 is shorter
    }

    return 0; // The strings are identical
}

int main(void)
{
    char a[] = "Mansour stinks";
    char b[] = "Mansour";
    char error[] = "Whoa, they're not equal";
    char wow[] = "It's equal!!";

    if (ft_strcmp(a, b) != 0)
    {
        printf("%s", error);
    }
    else
    {
        printf("%s", wow);
    }

    return 0;
}

