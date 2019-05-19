//
// Created by nutax on 17/05/19.
//

#ifndef UNTITLED1_QUICKSORT_H
#define UNTITLED1_QUICKSORT_H
#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//1.Alogirthm of QuickSort from https://www.geeksforgeeks.org/quick-sort/
//2.Templates made by Josè Ignacio Huby
//3.TDD made by Josè Ignacio Huby


template<typename T> //1 and 2
void swap(T* a, T* b)
{
    T t = *a;
    *a = *b;
    *b = t;
}

template<typename T> //1 and 2
int partition (T arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++)
    {

        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

template<typename T> //1 and 2
void quickSort(T arr[], int low, int high)
{
    if (low < high)
    {

        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

template <typename T, template<typename...> class Container>
void quickSort(Container<T>& c, int size) {
    typename Container<T>::iterator first = c.begin();
    typename Container<T>::iterator temp = first;
    T arr[size];
    for(int i = 0; i<size; i++ ){
        arr[i] = *temp;
        temp++;
    }
    quickSort(arr, 0, size - 1);
    temp = first;
    for(int i = 0; i<size; i++ ){
        *temp = arr[i];
        temp++;
    }

}

template<typename T> //2
void quickSort(T arr[], int size){
    quickSort(arr, 0, size - 1);
}


#endif //UNTITLED1_QUICKSORT_H
