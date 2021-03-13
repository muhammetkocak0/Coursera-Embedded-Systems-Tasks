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
 * @file stats.h
 * @brief This is the header file of statistical functions of an array.
 *
 * This file contains the function declerations and their descriptions of
 * statistical functions of an array.
 *
 * @author Muhammet Kocak
 * @date 13/03/2021
 *
 *****************************************************************************/

#ifndef __STATS_H__
#define __STATS_H__

/******************************************************************************
 * @brief Prints the statistics of an array including minimum, maximum, mean,
 * 	  and median.
 *
 * This function takes as inputs an unsigned char array and its length, then 
 * prints the min, max, mean and median of that array.
 * 
 * @param arr The pointer to the array of unsigned char type
 * @param length The number of items in the array
 *****************************************************************************/
void print_statistics(unsigned char *arr, unsigned int length);

/******************************************************************************
 * @brief Prints the unsigned char array.
 * 
 * This function takes as inputs an unsigned char array and its length, then 
 * prints the array to the screen.
 * 
 * @param arr The pointer to the array of unsigned char type
 * @param length The number of items in the array
 *****************************************************************************/
void print_array(unsigned char *arr, unsigned int length);

/******************************************************************************
 * @brief Finds the median of the unsigned char array.
 * 
 * This function takes as inputs an unsigned char array and its length, then 
 * returns the median of the unsigned char array.
 * 
 * @param arr The pointer to the array of unsigned char type
 * @param length The number of items in the array
 * @return The median of the unsigned char array
 *****************************************************************************/
unsigned char find_median(unsigned char * arr, unsigned int length);

/******************************************************************************
 * @brief Finds the mean of the unsigned char array.
 * 
 * This function takes as inputs an unsigned char array and its length, then 
 * returns the mean of the unsigned char array.
 * 
 * @param arr The pointer to the array of unsigned char type
 * @param length The number of items in the array
 * @return The mean of the unsigned char array
 *****************************************************************************/
float find_mean(unsigned char * arr, unsigned int length);

/******************************************************************************
 * @brief Finds the maximum of the unsigned char array.
 * 
 * This function takes as inputs an unsigned char array and its length, then 
 * returns the maximum of the unsigned char array.
 * 
 * @param arr The pointer to the array of unsigned char type
 * @param length The number of items in the array
 * @return The maximum of the unsigned char array
 *****************************************************************************/
unsigned char find_maximum(unsigned char * arr, unsigned int length);

/******************************************************************************
 * @brief Finds the minimum of the unsigned char array.
 * 
 * This function takes as inputs an unsigned char array and its length, then 
 * returns the minimum of the unsigned char array.
 * 
 * @param arr The pointer to the array of unsigned char type
 * @param length The number of items in the array
 * @return The minimum of the unsigned char array
 *****************************************************************************/
unsigned char find_minimum(unsigned char * arr, unsigned int length);

/******************************************************************************
 * @brief Sorts the array from largest to smallest.
 * 
 * This function takes as inputs an unsigned char array and its length, then 
 * sorts the array from largest to smallest.
 * 
 * @param arr The pointer to the array of unsigned char type
 * @param length The number of items in the array
 *****************************************************************************/
void sort_array(unsigned char * arr, unsigned int length);

#endif /* __STATS_H__ */
