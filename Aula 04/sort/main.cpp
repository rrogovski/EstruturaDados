#include <iostream>
#include <time.h>
#include <bits/stdc++.h>

#include "sort.h"

#define tamanho 100000

using namespace std;

int main()
{
    clock_t start, end;
    int arr[tamanho];
    int arrTemp[tamanho];
    //int arr[] = {64, 34, 25, 12, 22, 11, 90};
    //int n = sizeof(arr)/sizeof(arr[0]);

    createIntArry(arr, tamanho);
    //cout<< sizeof(arr)/sizeof(arr[0]) << "Default array: \n";
    //printArray(arr, tamanho);

    copyIntArry(arr, arrTemp, tamanho);
    //cout<< sizeof(arrTemp)/sizeof(arrTemp[0]) << "Copy array: \n";
    start = clock();
    selectionSort(arrTemp, tamanho);
    end = clock();
    cout << "Sorted array by selection: \n";
    //printArray(arrTemp, tamanho);
    printTimeExec(start, end);

    copyIntArry(arr, arrTemp, tamanho);
    start = clock();
    bubbleSort(arrTemp, tamanho);
    end = clock();
    cout<<"\n\nSorted array by bubble: \n";
    //printArray(arrTemp, tamanho);
    printTimeExec(start, end);

    copyIntArry(arr, arrTemp, tamanho);
    start = clock();
    mergeSort(arrTemp, 0, tamanho - 1);
    end = clock();
    cout<<"\n\nSorted array by merge: \n";
    //printArray(arrTemp, tamanho);
    printTimeExec(start, end);

    copyIntArry(arr, arrTemp, tamanho);
    start = clock();
    quickSort(arrTemp, 0, tamanho - 1);
    end = clock();
    cout << "\n\nSorted array by quick: \n";
    //printArray(arrTemp, tamanho);
    printTimeExec(start, end);
    return 0;
}
