#pragma once
#include <stdio.h>

void runtask_1(int *, int, int);
int task_1(int *, int);
void output_data(int);

void runtask_1(int *arr, int res, int n){
    if(arr) {
        res = task_1(arr, n);
        output_data(res);
    }
    else
        printf("Memory allocation failed");
}

int task_1(int *arr, int n) {
    int sum_p = 0, sum_n = 0, res;
    for(int i = 0; i < n; i++) {
        if (arr[i] >= 0)
            sum_p += arr[i];
        else sum_n += arr[i];
    }
    res = sum_p - sum_n;
    return res;
}

void output_data(int res){
    printf("res = %d\n", res);
}