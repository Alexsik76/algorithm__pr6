#include <iostream>
#include <fstream>
#include <algorithm> 

using namespace std;
FILE *fptr;

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

void create_file(const char* name){
    ofstream myfile;
    myfile.open(name);
    myfile << "N;t\n";
    myfile.close();
}

void append_to_file(const char* name, const char* data){
    ofstream myfile;
    myfile.open(name, ios::app);
    myfile << data;
    myfile.close();
}
