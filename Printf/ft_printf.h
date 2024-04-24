/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <pterekho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:15:17 by pterekho          #+#    #+#             */
/*   Updated: 2023/06/07 17:30:29 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>
# include <limits.h>

int	ft_printf(const char *str, ...);	
int	ft_format(va_list args, const char letter);
int	ft_print_char(int c);
int	ft_print_string(char *str);
int	ft_putnbr(int n);
int	ft_print_unsigned(unsigned int n);
int	ft_print_hex(unsigned long long n, char minMayusc);
int	ft_print_pointer(void *pointer);

#endif
