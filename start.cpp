#include "utils.h"
#include "algorithms.h"

using namespace std;

int main()
{
    const int max_n = 1001;
    //stage 1
    test_algoritm("sort_shell.txt", max_n, &sort_shell);
    test_algoritm("selection_sort.txt", max_n, &selection_sort);
    test_algoritm("count_sort.txt", max_n, &count_sort);
    test_algoritm("insertion_sort.txt", max_n, &insertion_sort);
    //stage 2
    test_algoritm_stage2("sort_shell_stage2.txt", max_n, &sort_shell);
    test_algoritm_stage2("selection_sort_stage2.txt", max_n, &selection_sort);
    test_algoritm_stage2("count_sort_stage2.txt", max_n, &count_sort);
    test_algoritm_stage2("insertion_sort_stage2.txt", max_n, &insertion_sort);
    //stage 3
    test_algoritm_stage3("sort_shell_stage3.txt", max_n, &sort_shell);
    test_algoritm_stage3("selection_sort_stage3.txt", max_n, &selection_sort);
    test_algoritm_stage3("count_sort_stage3.txt", max_n, &count_sort);
    test_algoritm_stage3("insertion_sort_stage3.txt", max_n, &insertion_sort);
}