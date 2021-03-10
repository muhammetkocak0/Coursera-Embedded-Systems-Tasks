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
/**
 * @file stats.h
 * @brief a header file contains declaration and documentation of a function
 *
 *
 * @author Muhammet Koçak
 * @date 10/3/2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */




void print_statistics(unsigned char *arry,unsigned int count);
 /*    Description of print_statistics:
 *     This function prints the statistics of an array including minimum, maximum, mean, and median.
 *     Parameters of print_statistics:
 *               int *arry: Pointer to a data set
 *               int count: Number of items in data set
 */



void find_median(unsigned char *arry,unsigned int count);
/*
* Description of find_median:
*     This function takes an array of data and a length, print the median value
*   Parameters of find_median:
*               int *arry: Pointer to a data set
*               int count: Number of items in data set
*/





void print_array(unsigned char *arry,unsigned int count);
/*
* Description of print_array:
*     This function takes an array of data and a length, prints the array to the screen
*     Parameters of print_array:
*               int *arry: Pointer to a data set
*               int count: Number of items in data set
*/





void find_minimum(unsigned char *arry,unsigned int count);
/*
* Description of find_minimum:
*     This function takes an array of data and a length, print the minimum value
* Parameters of find_minimum:
*               int *arry: Pointer to a data set
*               int count: Number of items in data set
*/






void find_maximum(unsigned char *arry,unsigned int count);
/*
* Description of find_maximum:
*     This function takes an array of data and a length, print the maximum value
* Parameters of find_maximum:
*               int *arry: Pointer to a data set
*               int count: Number of items in data set
*/






void sort_array(unsigned char *arry,unsigned int count);
/*
* Description of sort_array:
*     This function takes an array of data and a length, sort the array (largest to smallest)
*     Parameters of sort_array:
*               int *arry: Pointer to a data set
*               int count: Number of items in data set
*/








void find_mean(unsigned char *arry,unsigned int count);
/*
* Description of find_mean:
*     This function takes an array of data and a length, print the mean
* Parameters of find_mean:
*               int *arry: Pointer to a data set
*               int count: Number of items in data set
*/






#endif /* __STATS_H__ */
