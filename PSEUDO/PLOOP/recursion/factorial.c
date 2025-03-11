/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   factorial.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 16:37:41 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/02/23 16:37:48 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>  // For the write() function

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Recursive function to print the digits of a number
void print_number(int num) {
    // Base case: if the number is less than 10, print it
    if (num < 10) {
        char c = num + '0'; // Convert the number to a character
        write(1, &c, 1); // Write the character to stdout
        return;
    }

    // Recursive case: print the next digit
    print_number(num / 10);  // First recurse to print the higher place digits
    char c = (num % 10) + '0'; // Convert the last digit to a character
    write(1, &c, 1); // Write the character to stdout
}

int main() {
    int num = 5;
    int result = factorial(num);

    // Write the result text first
    write(1, "Factorial of 5 is ", 18);

    // Use recursion to print the result
    print_number(result);

    // Write a newline at the end
    write(1, "\n", 1);

    return 0;
}

