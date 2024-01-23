#include <iostream>
#include <unistd.h>
#include "utils.h"
#include "algorithms.h"

using namespace std;

int main()
{
    const int max_n = 1001;
    create_file("sort_shell.txt");
    for (int n = 100; n < max_n; n += 10)
    {
        int array_1[n];
        fill_array(array_1, n);
        sort_shell(array_1, n);
    }
    create_file("selection_sort.txt");
    for (int n = 100; n < max_n; n += 10)
    {
        int array_2[n];
        fill_array(array_2, n);
        selection_sort(array_2, n);
    }
    create_file("count_sort.txt");
    for (int n = 100; n < max_n; n += 10)
    {
        int array_3[n];
        fill_array(array_3, n);
        count_sort(array_3, n);
    }
    create_file("insertion_sort.txt");
    for (int n = 100; n < max_n; n += 10)
    {
        int array_4[n];
        fill_array(array_4, n);
        insertion_sort(array_4, n);
    }
}