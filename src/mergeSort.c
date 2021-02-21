/*!
  \file mergeSort.c
  \author L.Draescher <draescherl@eisti.eu>
  \date 27/11/2020
  \version 0.1 - first draft
  \brief merge sort functions
  \remarks None

  This file contains all the methods to
  implement a merge sort algorithm.

*/

#include "mergeSort.h"



/*!
  \fn void mergeArrays(int* pint_array, int int_left, int int_middle, int int_right)
  \author L.Draescher <draescherl@eisti.eu>
  \date 28/11/2020
  \version 0.1 - first draft
  \param pint_array Source array
  \param int_left Left bound of first subarray
  \param int_middle Right bound of the first subarray
  \param int_right Right bound of the second subarray
  \brief Merges two subarrays of array
  \remarks First subarray is [int_left..int_middle]
  Second subarray is [int_middle+1..int_right]
*/
void mergeArrays(int* pint_array, int int_left, int int_middle, int int_right)
{
  /* Variables */
  int i;
  int j;
  int k;
  int int_sizeSubArray1;
  int int_sizeSubArray2;

  /* Init */
  int_sizeSubArray1 = int_middle - int_left + 1;
  int_sizeSubArray2 = int_right - int_middle;

  /* Create temporary arrays */
  int tint_L[int_sizeSubArray1];
  int tint_R[int_sizeSubArray2];

  /* Copy values to temporary arrays */
  for (i = 0; i < int_sizeSubArray1; i++) {
    tint_L[i] = pint_array[int_left + i];
  }
  for (j = 0; j < int_sizeSubArray2; j++) {
    tint_R[j] = pint_array[int_middle + 1 + j];
  }

  /* Merge temporary arrays back into pint_array */
  i = 0;
  j = 0;
  k = int_left;
  while ( (i < int_sizeSubArray1) && (j < int_sizeSubArray2) ) {
    if (tint_L[i] <= tint_R[j]) {
      pint_array[k] = tint_L[i];
      i++;
    } else {
      pint_array[k] = tint_R[j];
      j++;
    }
    k++;
  }

  /* Copy any left-overs */
  while (i < int_sizeSubArray1) {
    pint_array[k] = tint_L[i];
    i++;
    k++;
  }
  while (j < int_sizeSubArray2) {
    pint_array[k] = tint_R[j];
    j++;
    k++;
  }
}

void mergeSort(int* pint_array, int int_left, int int_right)
{
  /* Variables */
  int int_middle;

  if (int_left < int_right) {
    /* Cut the array in half and sort it */
    int_middle = (int_left + int_right)/2;
    mergeSort(pint_array, int_left, int_middle);
    mergeSort(pint_array, int_middle + 1, int_right);

    /* Merge the two halves */
    mergeArrays(pint_array, int_left, int_middle, int_right);
  }
}