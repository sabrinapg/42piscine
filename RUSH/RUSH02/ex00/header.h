/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whuth <whuth@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:56:12 by whuth             #+#    #+#             */
/*   Updated: 2025/03/09 18:23:26 by whuth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

void			ft_numbers(char *dict, char *key, int index);
void			ft_two_digit(char *dict, char *key, int index, int is_tens);
void			ft_dtos(char *dict, char *dict_name);
void			ft_get_current_dict(char *dict_name);
void			ft_key_check(char *key, int index);
void			ft_mil(char *dict, int len_key);
void			ft_new_dict(char *dict);
void			ft_hundred(char *dict);
void			ft_parsing(char *key);
int				ft_strcat(char *dest, char *src, int index_values);
int				ft_arg_check(char *str, char *key);
int				ft_strlen(char *str);
int				ft_isspace(char c);
char			*ft_strcmp(char *dict, char *nb_len);

#endif
