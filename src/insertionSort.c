/*!
  \file insertionSort.c
  \author L.Draescher <draescherl@eisti.eu>
  \date 27/11/2020
  \version 0.1 - first draft
  \brief Insertion sort functions
  \remarks None

  This file contains all the methods to
  implement an insertion sort algorithm.

*/

#include "insertionSort.h"



void insertionSort(int* pint_array, int int_size)
{
  /* Variables */
  int i;
  int j;
  int int_c;

  /* Sort the array */
  for (i = 1; i < int_size; i++) {
    int_c = pint_array[i];
    j = i-1;

    while ( (j > -1) && (pint_array[j] > int_c) ) {
      pint_array[j+1] = pint_array[j];
      j--;
    }

    pint_array[j+1] = int_c;
  }
}