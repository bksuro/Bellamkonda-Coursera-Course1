/******************************************************************************
 * Copyright (C) 2017 by Subbarao Bellamkonda 
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Subbarao Bellamkonda is not liable for any misuse of the material.
 *
 *****************************************************************************/

/**
 * @file stats.h
 * @brief Header file for dev_c1m1 declarations
 *
 * @author Subbarao Bellamkonda
 * @date May 16 2019
 *
 */

#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints the statistics of an array including min, max, mean, and median
 *
 * This function takes as inputs two parameters, an array pointer pointing to an
 * array of integers, and an integer that tells the function the size of the 
 * array. Then the function will print out the minimum, maximum, mean, and 
 * median of the numbers on to the screen. 
 *
 * @param array[]  Array of numbers
 * @param arraySize 32-bit integer holding the size of the array
 *
 * @return void
 */
void print_statistics(unsigned char array[], int arraySize);

/**
 * @brief Prints the array of numbers tothe screen
 *
 * This function takes as inputs two parameters, an array pointer pointing to an
 * array of integers, and an integer that tells the function the size of the 
 * array. Then the function will print out the numbers on to the screen. 
 *
 * @param array[]  Array of numbers
 * @param arraySize 32-bit integer  holding the size of the array
 *
 * @return void
 */
void print_array(unsigned char array[], int arraySize);

/**
 * @brief Finds the median of the numbers in the array of numbers.
 *
 * This function takes as inputs two parameters, an array pointer pointing to an
 * array of integers, and an integer that tells the function the size of the 
 * array. Then the function will return the median of the numbers. 
 *
 * @param array[]  Array of numbers
 * @param arraySize 32-bit integer holding the size of the array
 *
 * @return The median of the numbers from the array
 */
double find_median(unsigned char array[], int arraySize);

/**
 * @brief Finds the mean of the numbers in the array of numbers.
 *
 * This function takes as inputs two parameters, an array pointer pointing to an
 * array of integers, and an integer that tells the function the size of the 
 * array. Then the function will return the mean of the numbers. 
 *
 * @param array[]  Array of numbers
 * @param arraySize 32-bit integer holding the size of the array
 *
 * @return The mean of the numbers from the array
 */
double find_mean(unsigned char array[], int arraySize);

/**
 * @brief Finds the minimum number in the array of numbers.
 *
 * This function takes as inputs two parameters, an array pointer pointing to an
 * array of integers, and an integer that tells the function the size of the 
 * array. Then the function will return the minimum of the numbers. 
 *
 * @param array[]  Array of numbers
 * @param arraySize 32-bit integer holding the size of the array
 *
 * @return The minimum number from the array
 */
unsigned char find_minimum(unsigned char array[], int arraySize);

/**
 * @brief Finds the maximum number in the array of numbers.
 *
 * This function takes as inputs two parameters, an array pointer pointing to an
 * array of integers, and an integer that tells the function the size of the 
 * array. Then the function will return the maximum of the numbers. 
 *
 * @param array[]  Array of numbers
 * @param arraySize 32-bit integer holding the size of the array
 *
 * @return The maximum number from the array
 */
unsigned char find_maximum(unsigned char array[], int arraySize);

/**
 * @brief Sorts the numbers in the array
 *
 * Given an array of data and a length, sorts the array from largest to 
 * smallest. (The zeroth Element should be the largest value, and the last 
 * element (n-1) should be the smallest value.)
 *
 * @param array[]  Array of numbers
 * @param arraySize 32-bit integer holding the size of the array
 *
 * @return pointer to the sorted array
 */
unsigned char *sort_array(unsigned char array[], int arraySize);

#endif /* __STATS_H__ */
