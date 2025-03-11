/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:03:05 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/08 16:03:07 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// string.c
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
int	ft_strcmp(char *s1, char *s2);
int	ft_strncmp(char *s1, char *s2, unsigned int n);

// strstr.c
int	ft_strlen(char *str);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strstr(char *str, char *to_find);

// ft_atoi.c
void	ft_putchar(char c);
int	ft_atoi(char *str);
void	ft_putnbr(int nb);

int	ft_strlen(char *str);
char	*ft_strstr(char *str, char *to_find);
char	*my_strchr(const char *str, int c);
