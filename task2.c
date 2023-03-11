#pragma once

void runtask_2(int *, int, int, int);
int max_task_2(int *, int, int);
int input_k_task2();
void output_data(int);


void runtask_2(int *arr, int res, int n, int k){
    if(arr) {
        k = input_k_task2();
        res = max_task_2(arr, n, k);
        output_data(res);
    }
    else
        printf("Memory allocation failed");
}

int input_k_task2(){
    int k;
    printf("k = ");
    scanf("%d", &k);
    return k;
}

int max_task_2(int *arr, int n, int k){
    int maxx = arr[0];
    for(int i = 1; (i < n) && (arr[i] >= 0); i++)
        if(arr[i] % k == 0)
            if(maxx < arr[i]) maxx = arr[i];
    return maxx;
}



