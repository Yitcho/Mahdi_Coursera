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
 * @file <stats.h> 
 * @brief <This the header file that contains all the function prototypes >
 *
 * <Add Extended Description Here>
 *
 * @author <Mahdi Kaffel>
 * @date < 05/11/2022 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
unsigned char find_maximum(unsigned char* Array , unsigned int len ); // This function will find the Maximum in the Data set
unsigned char find_minimum( unsigned char* Array , unsigned int len ); // This function will find the minimum in the Data set
unsigned char find_median( unsigned char* Array , unsigned int len ); // This function will calculate the median in the Data set
unsigned char find_mean( unsigned char* Array , unsigned int len ); // this function will calculate the mean in the Data set
unsigned char sort_array(unsigned char* Array , unsigned int len ); // this function will sort the Data set in descending order
void print_array( unsigned char* Array , unsigned int len ); // this function will print the Data set
void print_statistics( unsigned char* Array , unsigned int len ); // this function will print the median , mean , maximum 
								  // and minimum of the data set 
/**
 * @brief <Add Brief Description of Function Here>
 * All the find and sort function will take the same entry arguments "Array of Data" and "Length of Array"
 * the printing functions will print the "Array of Data"
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */


#endif /* __STATS_H__ */

/* Proper Defines */

#define SIZE (40)



