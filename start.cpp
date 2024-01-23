#include <iostream>
#include <unistd.h>
#include "utils.h"
#include "algorithms.h"

using namespace std;

int main()
{
    for (int n = 100; n < 501; n += 10)
    {
        int array_1[n];
        fill_array(array_1, n);
        sort_shell(array_1, n);
    }
    for (int n = 100; n < 501; n += 10)
    {
        int array_2[n];
        fill_array(array_2, n);
        selection_sort(array_2, n);
    }
    for (int n = 100; n < 501; n += 10)
    {
        int array_3[n];
        fill_array(array_3, n);
        count_sort(array_3, n);
    
    }
    
}