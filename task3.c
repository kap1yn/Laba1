#pragma once

void runtask_3(int *, int);
void create_b_task3(int **, int *);
void selection_task_3(int *, int, int *, int *);
void output_task3(int *, int);

void runtask_3(int *arr, int n){
    int *b, k = 0;
    create_b_task3(&b, &n);
    if(arr){
        selection_task_3(arr, n, b, &k);
        output_task3(b, k);
        free(b);
    }
    else
        printf("Memory allocation failed");
}

void selection_task_3(int *arr, int n, int *b, int *k) {
    int flag, counter = 0;
    for(int i = 0; i < n; i++){
        flag = 0;
        for(int j = 0; j < counter; j++) {
            if (arr[i] == b[j]) {
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            b[counter++] = arr[i];
        }
    }
    *k = counter;
}

void output_task3(int *b, int k){
    printf("Selected array: ");
    for(int i = 0; i < k; i++) {
        if(i != 0 && (i%7 == 0)) printf("\n");
        printf("%d ", b[i]);
    }
}