#include <stdlib.h>
#include "menu.c"
#include "array.c"
#include "task1.c"
#include "task2.c"
#include "task3.c"
#include "task4.c"


int main() {
    int n, task = 0;
    int *arr;

    create_array(&arr, &n);
    input_array(arr, n);
    runtask(task, n, arr);

    free(arr);
}



