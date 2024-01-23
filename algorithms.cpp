#include <iostream>
#include <algorithm>
#include <chrono>
#include <fstream>
#include <vector>


using namespace std;
using namespace std::chrono;
void sort_shell(int *a, int N)
{
    auto start = high_resolution_clock::now();
    for (int d = N / 2; d >= 1; d /= 2)
        for (int i = d; i < N; i++)
            for (int j = i; j >= d && a[j - d] > a[j]; j -= d)
                swap(a[j], a[j - d]);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    // cout << "With N = " << N << " 'sort shell' duration  = " << duration.count() << " microseconds.\n";
    ofstream out("sort_shell.txt", ios::app);
    out << N << ";" << duration.count()<< endl;
    out.close();
}
void selection_sort(int *a, int N)
{
    auto start = high_resolution_clock::now();
    for (int startIndex = 0; startIndex < N - 1; ++startIndex)
    {
        int smallestIndex = startIndex;
        for (int currentIndex = startIndex + 1; currentIndex < N; ++currentIndex)
        {
            if (a[currentIndex] < a[smallestIndex])
                smallestIndex = currentIndex;
        }
        swap(a[startIndex], a[smallestIndex]);
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    // cout << "With N = " << N << " 'selection sort' duration  = " << duration.count() << " microseconds.\n";
    ofstream out("selection_sort.txt", ios::app);
    out << N << ";" << duration.count()<< endl;
    out.close();
}
void count_sort(int *a, int N) 
{ 
    auto start = high_resolution_clock::now();
    int k = *max_element(a, a + N); 
  
    // declare a count array and initialize the array by 
    // 0 
    int count[k + 1] = { 0 }; 
  
    // count the frequency of each distinct element in 
    // the original array 
    for (int i = 0; i < N; i++) { 
        count[a[i]]++; 
    } 
  
    // perform prefix sum and update the count array 
    for (int i = 1; i <= k; i++) { 
        count[i] = count[i] + count[i - 1]; 
    } 
  
    // store our answer in the ans array 
    int ans[N]; 
    for (int i = N - 1; i >= 0; i--) { 
        ans[--count[a[i]]] = a[i]; 
    } 
  
    // copy the contents on ans array to our 
    // original array 
    for (int i = 0; i < N; i++) { 
        a[i] = ans[i]; 
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    // cout << "With N = " << N << " 'cout sort' duration  = " << duration.count() << " microseconds.\n";
    ofstream out("count_sort.txt", ios::app);
    out << N << ";" << duration.count()<< endl;
    out.close();
} 