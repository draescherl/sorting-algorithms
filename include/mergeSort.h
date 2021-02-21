/*!
  \file mergeSort.h
  \author L.Draescher <draescherl@eisti.eu>
  \date 27/11/2020
  \version 0.1 - first draft
  \brief Header file for mergeSort.c
  \remarks None
*/

#ifndef _MERGESORT_H_
#define _MERGESORT_H_

/* Additional librairies */
#include <stdlib.h>
#include <stdio.h>

/* Global variables */


/* Function prototypes */
/*!
  \fn void mergeSort(int* pint_array, int int_left, int int_right)
  \author L.Draescher <draescherl@eisti.eu>
  \date 28/11/2020
  \version 0.1 - first draft
  \param pint_array The array to sort
  \param int_left Left index of the sub-array
  \param int_right Right index of the sub-array
  \brief Sort array
  \remarks None
*/
void mergeSort(int* pint_array, int int_left, int int_right);

#endif