/*!
  \file insertionSort.h
  \author L.Draescher <draescherl@eisti.eu>
  \date 27/11/2020
  \version 0.1 - first draft
  \brief Header file for insertionSort.c
  \remarks None
*/

#ifndef _INSERTIONSORT_H_
#define _INSERTIONSORT_H_

/* Additional librairies */
#include <stdlib.h>
#include <stdio.h>

/* Global variables */


/* Function prototypes */
/*!
  \fn void insertionSort(int* pint_array, int int_size)
  \author L.Draescher <draescherl@eisti.eu>
  \date 28/11/2020
  \version 0.1 - first draft
  \param pint_array The array to sort
  \param int_size The size of the array
  \brief Sorts an array using the insertion sort algorithm
  \remarks None
*/
void insertionSort(int* pint_array, int int_size);

#endif