#include <iostream>
#include <fstream>
#include <algorithm>
#include "algorithms.h"

using namespace std;

void fill_array(int array[], int lenght)
{
    srand((unsigned)(time(NULL)));
    for (int i = 0; i < lenght; i++)
    {
        array[i] = rand() % 10000;
    }
}

void print_array(int array[], int lenght)
{
    for (int i = 0; i < lenght; i++)
    {
        cout << "\t" << array[i] << endl;
    }
}

void create_file(const char *name)
{
    ofstream myfile;
    myfile.open(name);
    myfile << "N;t\n";
    myfile.close();
}

void append_to_file(const char *name, const char *data)
{
    ofstream myfile;
    myfile.open(name, ios::app);
    myfile << data;
    myfile.close();
}

void test_algoritm(const char *file_name,
                   int n_max,
                   void (*sort_algoritm)(int *a, int N, const char *file_name))
{
    create_file(file_name);
    for (int n = 100; n < n_max; n += 10)
    {
        int arr[n];
        fill_array(arr, n);
        sort_algoritm(arr, n, file_name);
    }
}
void test_algoritm_stage2(const char *file_name,
                          int n_max,
                          void (*sort_algoritm)(int *a, int N, const char *file_name))
{
    create_file(file_name);
    for (int n = 100; n < n_max; n += 10)
    {
        int arr[n];
        fill_array(arr, n);
        sort_shell(arr, n, NULL);
        int n_1 = static_cast<int>(n/10);
        int arr_1_1[n_1];
        fill_array(arr_1_1, n_1);
        int arr_2[n+n_1];
        copy(arr, (arr + n), arr_2);
        copy(arr_1_1, (arr_1_1 + n_1), (arr_2 + n));
        sort_algoritm(arr_2, n+n_1, file_name);
    }
}

void test_algoritm_stage3(const char *file_name,
                          int n_max,
                          void (*sort_algoritm)(int *a, int N, const char *file_name))
{
    create_file(file_name);
    for (int n = 100; n < n_max; n += 10)
    {
        int arr[n];
        fill_array(arr, n);
        sort_shell(arr, n, NULL);
        int n_1 = static_cast<int>(n/10);
        int arr_1_1[n_1];
        fill_array(arr_1_1, n_1);
        int arr_2[n+n_1];
        copy(arr, (arr + n), arr_2);
        copy(arr_1_1, (arr_1_1 + n_1), (arr_2 + n));
        sort_shell(arr_2, n+n_1, NULL);

        int n_2 = n+n_1;
        int n_3 = 11*n + n_1;
        int arr_3[n_3];
        copy(arr_2, (arr_2 + n_2), arr_3);
        for(int i =1; i < 11; i++)
        {   
            int t_arr[n];
            fill_array(t_arr, n);
            copy(t_arr, (t_arr + n), (arr_3 + n_2 + n*(i-1)));
        }
        sort_algoritm(arr_3, n_3, file_name);
    }
}
