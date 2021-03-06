/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/******************************************************************************
 * @file stats.c
 * @brief This is the implementation file of statistical functions of an array.
 *
 * The functions in this file analyze an array of unsigned char data items and 
 * report analytics on the maximum, minimum, mean, and median of the data set.
 * In addition, it reorders this data set from large to small.
 *
 * @author Muhammet Kocak
 * @date 13/03/2021
 *****************************************************************************/

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */

  /* Statistics and Printing Functions Go Here */
  print_array(test,SIZE);
  print_statistics(test,SIZE);

}

void print_statistics(unsigned char *arr, unsigned int length){
  sort_array(arr,length);
  
  printf("The mean of the array is %0.0f\n", find_mean(arr,length));
  printf("The median of the array is %d\n", find_median(arr,length));
  printf("The min of the array is %d\n", find_minimum(arr,length));
  printf("The max of the array is %d\n", find_maximum(arr,length));
 
}

void print_array(unsigned char *arr, unsigned int length){
  unsigned int i;

  printf("Array: ");

  for(i=0; i<length; i++){
    printf("%d ", arr[i]);
  }
  
  printf("\n\n");
}

unsigned char find_median(unsigned char *arr, unsigned int length){
  return arr[length/2];
}

float find_mean(unsigned char *arr, unsigned int length){
  unsigned int i;
  unsigned int sum = 0;

  for(i=0; i<length; i++){
    sum += arr[i];
  }

  return sum/length;
}

unsigned char find_maximum(unsigned char *arr, unsigned int length){
  return arr[length-1];
}

unsigned char find_minimum(unsigned char *arr, unsigned int length){
  return arr[0];
}

void sort_array(unsigned char *arr, unsigned int length){
  unsigned int i, j;

  for(i=0; i<length-1; i++){
    for(j=0; j<length-1; j++){
      if(arr[j] > arr[j+1]){
        int temp = arr[j];
	arr[j] = arr[j+1];
	arr[j+1] = temp;
      }
    }
  }

  printf("Sorted Array: ");

  for(i=0; i<length; i++){
    printf("%d ", arr[i]);
  }
  
  printf("\n\n");
}
