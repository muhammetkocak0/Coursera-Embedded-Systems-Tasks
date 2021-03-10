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
 * @file stats.c
 * @brief My First Assignment
 *
 *
 * @author  Muhammet Koçak
 * @date 10/3/2021
 *
 */


#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)
//main function entery point
void main()
{

    unsigned char test[SIZE] = { 39, 201, 190, 154,   8, 194,   2,   6,
                                 114, 88,   45,  76, 123,  87,  25,  23,
                                 200, 122, 150, 90,   92,  87, 177, 244,
                                 201,   6,  12,  60,   8,   2,   5,  67,
                                 7,  87, 250, 230,  99,   3, 100,  90
                               };

    /* Other Variable Declarations Go Here */
    /* Statistics and Printing Functions Go Here */
    print_array(test,SIZE);
    print_statistics(test,SIZE);

}

/* Add other Implementation File Code Here */
void find_mean(unsigned char *arry,unsigned int count)
{
    unsigned int counter=0;
    int sum=0;
    for (counter; counter<count; counter++)
    {
        sum = sum + arry[counter];
    }
    printf("\nThe mean is : ");
    printf("%d\n",(sum/count)-1);

}

void sort_array(unsigned char *arry,unsigned int count)
{
    unsigned int i, counter =0;
    int temp=0;
    for (counter; counter<count; counter++)
    {
        for (i=0; i<count; i++)
        {
            if(arry[counter]>arry[i])
            {
                temp=arry[counter];
                arry[counter]=arry[i];
                arry[i]=temp;
            }
        }

    }
    printf("\n\nSorted Array is : ");
    for (i=0; i<count; i++)
    {
        printf("%d ",arry[i]);
    }
}

void find_maximum(unsigned char *arry,unsigned int count)
{
    unsigned int i;
    int max =arry[0];

    for (i=0; i<count; i++)
    {
        if (arry[i]>max)
        {
            max=arry[i];
        }
    }
    printf("\n\nThe Maximum number is : %d\n",max);

}

void find_minimum(unsigned char *arry,unsigned int count)
{
    unsigned int i;
    int min =arry[0];

    for (i=0; i<count; i++)
    {
        if (arry[i]<min)
        {
            min=arry[i];
        }
    }

    printf("\nThe Minimum number is : %d \n",min);

}

void print_array(unsigned char *arry,unsigned int count)
{
    unsigned int i=0;

    printf("\nOriginal array is : ");
    for (i; i<count; i++)
    {
        printf("%d ",arry[i]);

    }

}

void find_median(unsigned char *arry,unsigned int count)
{
    int mid;

    if (count%2!=0)
    {
        mid =arry[(count/2)];
    }

    if (count%2==0)
    {

        mid =(arry[(count/2)-1]+arry[(count/2)])/2.0;

    }
    printf("\nThe median is : ");
    printf("%d\n",mid);
}

void print_statistics(unsigned char *arry,unsigned int count)
{sort_array(arry ,count);
    find_maximum( arry,count);
    find_minimum( arry,count);
    find_mean(arry,count);
    find_median( arry,count);
}
