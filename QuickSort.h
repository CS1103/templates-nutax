//
// Created by utec on 17/05/19.
//

#ifndef UNTITLED9_QUICKSORT_H
#define UNTITLED9_QUICKSORT_H

#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;


template<typename T>
void QuickSort(vector<T> a, int first, int last ){

    srand(time(NULL));
    int pivote = rand()%last + first;

    for (int i = first; i<last; i++){
        if ( i<pivote && a[i]>a[pivote] ){
            a.insert(int(pivote+1),a[i]);
            a.erase(i);
            pivote--;
        }
        if ( i>pivote && a[i]<a[pivote] ){
            a.insert(int(pivote-1),T(a[i]));
            a.erase(i+1);
            pivote++;
        }
    }

    if (last - pivote > 1){
        QuickSort(a, pivote, last);
    }

    if ((pivote -1 ) - first > 0){
        QuickSort(a, first, pivote -1);
    }


}





#endif //UNTITLED9_QUICKSORT_H
