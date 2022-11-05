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
 * @file <stats.c> 
 * @brief <This file contains all the functions implementation >
 *
 * <Add Extended Description Here>
 *
 * @author <Mahdi Kaffel>
 * @date < 05/11/2022  >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */

#define NELEMS(x) (sizeof(x)/sizeof((x)[0]))


/*----------------------*/
int main() {
  
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  
   unsigned int length = NELEMS(test);
   
   print_array(test,length);
   print_statistics(test,length);
   sort_array(test,length);


}

/*------------------------------------------------------------------*/

unsigned char find_maximum(unsigned char* Array , unsigned int len )
{
   int i;
   unsigned char* Maximum = &Array[0];

   for(i=0;i<SIZE;i++)
   {
   if( Array[i] > *Maximum)
     {
     Maximum = &Array[i];
     }
    }
   printf("Maximum = %d\n",*Maximum);
   return *Maximum;
}

/*------------------------------------------------------------------*/

unsigned char find_minimum( unsigned char* Array , unsigned int len )
{
 int i;
   unsigned char* Minimum = &Array[0];

   for(i=0;i<SIZE;i++)
   {
   if( Array[i] < *Minimum)
     {
     Minimum = &Array[i];
     }
    }
   printf("Minimum = %d\n",*Minimum);
   return *Minimum;
}

/*------------------------------------------------------------------*/

unsigned char find_median( unsigned char* Array , unsigned int len )
{
 unsigned char* median;
 if( len % 2 == 0)
 {
  *median = ((Array[SIZE/2] + Array[(SIZE-1)/2])/2);
 }
 else
 {
  median = &Array[SIZE/2];
 }
 printf("median = %d\n" , *median);
 return *median;
}

/*------------------------------------------------------------------*/

void print_array( unsigned char* Array , unsigned int len )
{
  int i,index ;
  printf("******* Printing Data Array ********\n");
  for( i=0 ; i<len ; i++ )
  {
  index = i ;
  printf(" test[%d] = %d\n" , index , Array[i]);
  }

}

/*------------------------------------------------------------------*/

unsigned char find_mean( unsigned char* Array , unsigned int len )
{
 unsigned char* mean ;
 int i , sum = 0 ;

  for(i=0 ; i < len ; i++)
  {
  sum += Array[i];
  *mean = sum / len ;
  }
  printf("Mean = %d\n " , *mean);
  return *mean ;
}

/*------------------------------------------------------------------*/

void print_statistics( unsigned char* Array , unsigned int len )
{
 printf("******** Printing Statistics ********\n");
 find_maximum(Array,len);
 find_minimum(Array,len);
 find_mean(Array,len);
 find_median(Array,len);

}

/*------------------------------------------------------------------*/

unsigned char sort_array(unsigned char* Array , unsigned int len )
{
 int i , index ;

 printf("************* Sorting Arrays *************\n");

 for(i=0 ; i < len ; i++)
 {
  index = i;
   for(int j =i+1 ; j < len ; j++)
   {
     if(Array[i]<Array[j])
    {
     int tmp = Array[i];  // Temporary variable for storing last value
     Array[i] = Array[j];
     Array[j] = tmp;

    }
   }

  printf("test[%d] = %d \n" , index , Array[i]);
}
 return *Array;
}

