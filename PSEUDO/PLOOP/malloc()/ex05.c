/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:49:50 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/08 14:55:51 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student {
	char name[50];
	int age;
	float grade;
};

int	main(void)
{
	struct Student *student = (struct Student *)malloc(sizeof(struct Student));

	if (student == NULL)
	{
		printf("Memory Allocation Failed!\n");
		return (1);
	}

	strcpy(student->name, "John Doe");
	student->age = 20;
	student->grade = 90.5;

	printf("Student Info: \n");
	printf("Name: %s\n", student->name);
	printf("Age: %d\n", student-> age);
	printf("Grade: %.2f\n", student->grade);

	free(student);
	return (0);
}
