#include <iostream>
#include <algorithm> 

using namespace std;

void fill_array(int array[], int lenght)
{
    srand((unsigned)(time(NULL)));
    for (int i = 0; i < lenght; i++)
    {
        array[i] = rand() % 1000;
    }
}


void print_array(int array[], int lenght)
{
    for (int i = 0; i < lenght; i++)
    {
        cout << "\t" << array[i] << endl;
    }
}
