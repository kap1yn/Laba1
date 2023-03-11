#pragma once

void runtask_4(int *, int);
void minMax_task_4(int *, int, int *, int *);
float avg_score_task_4(int *, int, int, int);
void output_data_task_4(float);

void runtask_4(int *arr, int n){
    float res;
    int min_arr = 0, max_arr = 0;
    if(arr) {
        minMax_task_4(arr, n, &min_arr, &max_arr);
        res = avg_score_task_4(arr, n, min_arr, max_arr);
        output_data_task_4(res);
    }
    else
        printf("Memory allocation failed");
}

void minMax_task_4(int *arr, int n, int *min_arr, int *max_arr){
    for(int i = 1; i < n; i++){
        if(arr[*max_arr] < arr[i]) *max_arr = i;
        if(arr[*min_arr] > arr[i]) *min_arr = i;
    }
}

float avg_score_task_4(int *arr, int n, int min_arr, int max_arr){
    float avg = 0, sum = 0;
    for(int i = 0; i < n; i++)
        if(i != max_arr || i != min_arr)
            sum += arr[i];
    avg = sum / n;
    return avg;
}

void output_data_task_4(float res){
    printf("%.2f", res);
}