#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
int _print_int(int n);
int _print_binary(unsigned int n);
int _print_unsigned(unsigned int n);
int _print_octal(unsigned int n);
int _print_hex(unsigned int n);
int _print_pointer(void *p);
int _print_plus_flag(int n);
int _print_space_flag(int n);
int _print_hash_flag(unsigned int n, char format);
int _print_long_flag(long int n);
int _print_short_flag(short int n);
int _print_zero_flag(int n);
int _print_minus_flag(int n);
int _print_reversed(char *str);
int _print_rot13(char *str);
int _print_non_printable(char *str);

#endif /* MAIN_H */

