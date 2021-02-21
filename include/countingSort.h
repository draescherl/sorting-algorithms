/*!
  \file countingSort.h
  \author L.Draescher <draescherl@eisti.eu>
  \date 27/11/2020
  \version 0.1 - first draft
  \brief Header file for countingSort.c
  \remarks None
*/

#ifndef _COUNTINGSORT_H_
#define _COUNTINGSORT_H_

/* Additional librairies */
#include <stdlib.h>
#include <stdio.h>

/* Global variables */


/* Function prototypes */
/*!
  \fn void countingSort(int* pint_array, int int_size)
  \author L.Draescher <draescherl@eisti.eu>
  \date 30/11/2020
  \version 0.1 - first draft
  \param pint_array The array to sort
  \param int_size The size of the array 
  \brief Sort an array using a counting sort algorithm
  \remarks None
*/
void countingSort(int* pint_array, int int_size);

#endif