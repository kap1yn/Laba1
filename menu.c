#pragma once
#include <stdio.h>

void runtask_1(int *, int, int);
void runtask_2(int *, int, int, int);
void runtask_3(int *, int);
void runtask_4(int *, int);

int print_menu() {
    int task;
    printf("\nList of tasks: ");
    printf("\n[1] Task 1");
    printf("\n[2] Task 2");
    printf("\n[3] Task 3");
    printf("\n[4] Task 4");
    printf("\n[0] for exit");

    return task;
}

void print_task(int task){
    if(task == 1) printf("\n1. Задано одновимірний масив А розміру N. "
                         "Обчислити різницю суми додатних та суми від’ємних елементів масиву\n");
    else if(task == 2) printf("\nЗнайти значення максимального елемента серед елементів,"
                              " кратних k і\nрозташованих до першого від’ємного елемента. \n");
    else if(task == 3) printf("\nЗадано масив цілих чисел A[n], n ? 400, які можуть повторюватися.\n"
                              "Розробити програму, яка відбирає з кожної групи рівних чисел по одному, і\n"
                              "утворює новий масив B[n] та друкує його по сім чисел у рядку\n");
    else if(task == 4) printf("\nУ деяких видах спортивних змагань виступ кожного спортсмена незалежно\n"
                              "оцінюється кількома суддями, потім з усієї сукупності оцінок вилучаються\n"
                              "найвища та найнижча, а для тих оцінок, що залишилися, визначається\n"
                              "середнє арифметичне, яке і йде у залік спортсмену. Якщо найвищу оцінку\n"
                              "виставило кілька суддів, то з сукупності оцінок вилучається лише одна така\n"
                              "оцінка (аналогічно поводяться з найнижчими оцінками). Нехай n (n?3)\n"
                              "суддів виставили одному зі спортсменів відповідні оцінки: a1, a2, …, an.\n"
                              "Визначити, яка остаточна оцінка піде в залік цьому спортсмену\n");
}

void runtask(int task, int n, int *arr){
    int k, res;
    while(1){
        task = print_menu();
        printf("\nChoose one of them: ");
        scanf("%d", &task);
        print_task(task);
        switch(task){
            case 1: runtask_1(arr, res, n); break;
            case 2: runtask_2(arr, res, n, k); break;
            case 3: runtask_3(arr, n); break;
            case 4: runtask_4(arr, n); break;
            case 0:  return;
            default: printf("Invalid number of task"); break;
        }
    }
}