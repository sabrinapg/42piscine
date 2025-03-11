/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setnth.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 21:54:48 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/11 23:08:46 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int num = 5;    // 0101 in binary
    int n = 3;      // Set the 3rd bit
    int result = num | (1 << n);  // Set the 3rd bit to 1
    
    printf("Before: %d\n", num);   // Output: Before: 5
    printf("After: %d\n", result); // Output: After: 13 (1101 in binary)

    return 0;
}

