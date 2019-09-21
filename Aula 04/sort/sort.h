#include <iostream>
#include <time.h>
#include <bits/stdc++.h>

#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

void createIntArry(int arr[], int size);
void copyIntArry(int *arrSource, int *arrCopy, int tamanho);
void printTimeExec(clock_t start, clock_t end);
void printArray(int arr[], int size);
void swap(int *xp, int *yp);

void selectionSort(int arr[], int n);

void bubbleSort(int arr[], int n);

void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r);

int partition (int arr[], int low, int high);
void quickSort(int arr[], int low, int high);

#endif // SORT_H_INCLUDED
