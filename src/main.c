/*!
  \file main.c
  \author L.Draescher <draescherl@eisti.eu>
  \date 27/11/2020
  \version 0.1 - first draft
  \brief Main project file
  \remarks None
*/

/* Additional librairies */
#include <time.h>
#include "countingSort.h"
#include "mergeSort.h"
#include "insertionSort.h"
#include "utils.h"



/*!
  \fn void sort(int* pint_array, int int_size, int int_choice)
  \author L.Draescher <draescherl@eisti.eu>
  \date 30/11/2020
  \version 0.1 - first draft
  \param pint_array The array to sort
  \param int_size The size of the array
  \param int_choice Which algorithm the user wants
  \brief Calls the correct functions
  \remarks None
*/
void sort(int* pint_array, int int_size, int int_choice)
{ 
  /* Display initial array to user */
  initDynArrayRandom(pint_array, int_size);
  printf("Initial array : ");
  printDynArray(pint_array, int_size);

  /* Choice of sorting algorithm */
  switch (int_choice) {
    case 1: /* Insertion sort */
      insertionSort(pint_array, int_size);
      break;

    case 2: /* Merge sort */
      mergeSort(pint_array, 0, int_size - 1);
      break;

    case 3: /* Counting sort */
      countingSort(pint_array, int_size);
      break;
    
    default:
      break;
  }

  /* Print sorted array to user */
  printf("Sorted array  : ");
  printDynArray(pint_array, int_size);
}



/*!
  \fn int main(int argc, char** argv)
  \author L.Draescher <draescherl@eisti.eu>
  \date 27/11/2020
  \version 0.1 - first draft
  \param argc Number of console arguments
  \param argv Console parameters
  \return 0 on success
  \brief Main program
  \remarks None
*/
int main(int argc, char** argv) {
  /* Variables */
  int int_size;
  int int_choice;
  int* pint_array;

  /* Seed random number generator */
  srand(time(NULL));

  /* Print menu and ask user for the 
  sorting algorithm to use */
  printMenu();
  int_choice = validChoice(0, 3);

  /* Exit if the user asked */
  if (int_choice == 0) {
    printf("Exiting program. \n");
    return(0);
  }

  /* If the user has chosen an algorithm
  prompt him for the size of the array */
  printf("Input array size (size > 0) : ");
  int_size = intInput();

  /* Create array, allocate memory
  and exit if something went wrong */
  pint_array = malloc(int_size * sizeof(int));
  if (pint_array == NULL) {
    fprintf(stderr, "Error allocating memory.\n");
    exit(ALLOCATION_ERROR);
  }

  /* Call sorting algorithm */
  sort(pint_array, int_size, int_choice);

  /* Free memory */
  free(pint_array);

  return(0);
}