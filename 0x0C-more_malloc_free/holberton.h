#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>

int _isupper(int c);

int _isdigit(int c);

int mul(int a, int b);

int _putchar(char n);

void print_numbers(void);

void print_most_numbers(void);

void more_numbers(void);

void print_line(int n);

void print_diagonal(int n);

void print_square(int size);

void print_triangle(int size);

void *malloc_checked(unsigned int b);

char *string_nconcat(char *s1, char *s2, unsigned int n);

void *_calloc(unsigned int nmemb, unsigned int size);

int *array_range(int min, int max);

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif /* HOLBERTON_H */
