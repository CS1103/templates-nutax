#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "QuickSort.h"

using namespace std;

//By Josè Ignacio Huby Ochoa

//Alogirthm of QuickSort from https://www.geeksforgeeks.org/quick-sort/
//Templates made by Josè Ignacio Huby
//TDD made by Josè Ignacio Huby

//STRUCTURE: quickSort(group, group size);
//KEY CONCEPTS: templates, iterators

SCENARIO("Test quicksort"){
    GIVEN("A group of variables"){
        WHEN("The group is an array"){
            int a[] = {5,2,3,1,4,6};
            int size = 6;
            quickSort(a, size);
            THEN("Sort"){
                REQUIRE(a[0] == 1);
                REQUIRE(a[1] == 2);
                REQUIRE(a[2] == 3);
                REQUIRE(a[3] == 4);
                REQUIRE(a[4] == 5);
                REQUIRE(a[5] == 6);
            }
        }
        WHEN("The group is a dynamic array"){
            int* a = new int[6]{5,2,3,1,4,6};
            int size = 6;
            quickSort(a, size);
            THEN("Sort"){
                REQUIRE(a[0] == 1);
                REQUIRE(a[1] == 2);
                REQUIRE(a[2] == 3);
                REQUIRE(a[3] == 4);
                REQUIRE(a[4] == 5);
                REQUIRE(a[5] == 6);
            }
        }
        WHEN("The group is a vector"){
            vector<int> a = {5,2,3,1,4,6};
            quickSort(a, a.size());
            THEN("Sort"){
                REQUIRE(a[0] == 1);
                REQUIRE(a[1] == 2);
                REQUIRE(a[2] == 3);
                REQUIRE(a[3] == 4);
                REQUIRE(a[4] == 5);
                REQUIRE(a[5] == 6);
            }
        }
        WHEN("The group is a list"){
            list<int> a = {5,2,3,1,4,6};
            quickSort(a, a.size());
            THEN("Sort"){
                auto e = a.begin();
                REQUIRE(*e == 1);
                e++;
                REQUIRE(*e == 2);
                e++;
                REQUIRE(*e == 3);
                e++;
                REQUIRE(*e == 4);
                e++;
                REQUIRE(*e == 5);
                e++;
                REQUIRE(*e == 6);
            }
        }

    }
}