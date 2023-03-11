#pragma once
#include <stdio.h>
#include <stdlib.h>

void create_array(int **arr, int *pn){
    printf("\nCreate array");
    printf("\n n = ");
    scanf("%d", pn);

    *arr = (int*)malloc((*pn) * sizeof(int));
}

void create_b_task3(int **b, int *n){
    *b = (int*)malloc((*n) * sizeof(int));
}

void input_array(int *arr, int n) {
    printf("Array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}