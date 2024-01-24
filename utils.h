#ifndef UTILS_H
#define UTILS_H

void fill_array(int arr[], int lenght);
void print_array(int array[], int lenght);
void create_file(const char *name);
void append_to_file(const char *name, const char *data);
void test_algoritm(const char *file_name,
                   int n_max,
                   void (*sort_algoritm)(int *a, int N, const char *file_name));
void test_algoritm_stage2(const char *file_name,
                   int n_max,
                   void (*sort_algoritm)(int *a, int N, const char *file_name));
void test_algoritm_stage3(const char *file_name,
                   int n_max,
                   void (*sort_algoritm)(int *a, int N, const char *file_name));
#endif