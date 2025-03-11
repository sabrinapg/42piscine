/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   even.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 21:50:24 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/11 21:54:24 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int	num;

	num = 5;
	if (num & 1)
	{
        	printf("%d is odd.\n", num);
	}
	else 
	{
        	printf("%d is even.\n", num);
	}

    return 0;
}

/*
The expression num & 1 checks the least significant bit (LSB) of num.
If num is odd, the LSB is 1, and num & 1 will be 1, so it prints "odd".
If num is even, the LSB is 0, and num & 1 will be 0, so it prints "even".

Least Significant Bit:

In binary: LSB (the rightmost) of even is always 0; and for odd its always 1.


4: "100" = so it's even
5: "101" = so it's odd

*/
