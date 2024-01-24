#include <cstddef>
#ifndef ALGORITHMS_H
#define ALGORITHMS_H

void sort_shell(int *a, int N, const char *file_name = NULL);
void selection_sort(int *a, int N, const char *file_name = NULL);
void count_sort(int *a, int N, const char *file_name = NULL);
void insertion_sort(int *a, int N, const char *file_name = NULL);

#endif