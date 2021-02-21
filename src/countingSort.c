/*!
  \file countingSort.c
  \author L.Draescher <draescherl@eisti.eu>
  \date 27/11/2020
  \version 0.1 - first draft
  \brief Counting sort functions
  \remarks None

  This file contains all the methods to
  implement a counting sort algorithm.

*/

#include "countingSort.h"



/*!
  \fn void arrayMinMax(int* pint_array, int int_size, int* int_min, int* int_max)
  \author L.Draescher <draescherl@eisti.eu>
  \date 30/11/2020
  \version 0.1 - first draft
  \param pint_array The array to sort
  \param int_size The size of the array
  \param int_min The min value
  \param int_max The max value
  \brief Finds the minimum and maximum values of the array
  \remarks None
*/
void arrayMinMax(int* pint_array, int int_size, int* int_min, int* int_max)
{
  /* Variables */
  int i;

  /* Init min and max values to the 
  first value of the array */
  *int_min = pint_array[0];
  *int_max = pint_array[0];

  /* Go through array */
  for (i = 1; i < int_size; i++) {
    /* Find min */
    if (pint_array[i] < *int_min) {
      *int_min = pint_array[i];
    }
    /* Find max */
    if (pint_array[i] > *int_max) {
      *int_max = pint_array[i];
    }
  }
}

/*!
  \fn void histogram(int* pint_array, int int_arraySize, int* pint_histo, int int_histoSize, int int_min)
  \author L.Draescher <draescherl@eisti.eu>
  \date 30/11/2020
  \version 0.1 - first draft
  \param pint_array The source array to generate the histogram
  \param int_arraySize The size of the source array
  \param pint_histo The array to store the histogram
  \param int_histoSize The size of the histogram array
  \param int_min The min value of the source array
  \brief Creates the histogram
  \remarks None
*/
void histogram(int* pint_array, int int_arraySize, int* pint_histo, int int_histoSize, int int_min)
{
  /* Variables */
  int i;

  /* Init histogram array to 0 */
  for (i = 0; i < int_histoSize; i++) {
    pint_histo[i] = 0;
  }

  /* Fill array with values */
  for (i = 0; i < int_arraySize; i++) {
    pint_histo[pint_array[i] - int_min]++;  
  }
}

void countingSort(int* pint_array, int int_size)
{
  /* Variables */
  int i;
  int j;
  int int_x;
  int int_min;
  int int_max;
  int int_histoSize;
  int* pint_histo;

  /* Get min and max */
  arrayMinMax(pint_array, int_size, &int_min, &int_max);

  /* Create histogram array */
  int_histoSize = int_max - int_min + 1;
  pint_histo = malloc(int_histoSize * sizeof(int));
  histogram(pint_array, int_size, pint_histo, int_histoSize, int_min);

  /* Sort the array */
  int_x = 0;
  for (i = 0; i <= int_histoSize; i++) {
    for (j = 0; j < pint_histo[i]; j++) {
      pint_array[int_x] = i + int_min;
      int_x++;
    }
  }

  /* Free memory */
  free(pint_histo);
}