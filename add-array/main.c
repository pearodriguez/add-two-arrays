//
//  main.c
//  add-array
//
//  Created by Peter Rodriguez.
//
/*
Adds numbers of two EQUAL size integer arrays.

 */
#include <stdio.h>

int main() {
    
    int i, num = 3;
    int array1[num];
    array1[0] = 2;
    array1[1] = 4;
    array1[2] = 6;
    
    int array2[num];
    array2[0] = 2;
    array2[1] = 3;
    array2[2] = 5;
    
    int sum_array[num];
    
    for (i = 0; i < num; i++){
        sum_array[i] = array1[i] + array2[i];
    }
    
    for (i = 0; i < num; i++){
        printf("\nsum_array at index %d", i);
        printf(" is %d", sum_array[i]);
    }
    
    printf("\n");
    
    return 0;
}
