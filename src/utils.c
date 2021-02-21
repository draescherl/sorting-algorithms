/*!
  \file utils.c
  \author L.Draescher <draescherl@eisti.eu>
  \date 27/11/2020
  \version 0.1 - first draft
  \brief General utilities
  \remarks None

  This file contains general 
  utility functions.

*/

#include "utils.h"




void initDynArrayRandom(int* pint_array, int int_size)
{
  /* Variables */
  int i;

  /* Init array with values between -10 and 10 */
  for (i = 0; i < int_size; i++) {
    pint_array[i] = rand() % 21 - 10;
  }
}

void printDynArray(int* pint_array, int int_size)
{
  /* Variables */
  int i;

  printf("|");
  for (i = 0; i < int_size; i++) {
    printf("%d|", pint_array[i]);
  }
  printf("\n");
}

void printMenu(void)
{
  printf("---Menu---\n");
  printf("1) Insertion sort.\n");
  printf("2) Merge sort.\n");
  printf("3) Counting sort. \n");
  printf("0) Exit. \n");
}

int intInput(void)
{
  /* Variables */
  int int_input;
  int int_correct;
  int int_c;

  /* User input */
  int_correct = scanf("%d", &int_input);
  
  /* Check if user didn't input an int */
  if (int_correct == 0) {
    fprintf(stderr, "The value is not an int.\n");
    exit(INT_INPUT_ERROR);
  }

  /* Empty buffer */
  while ( ((int_c = getchar()) != '\n') && (int_c != EOF) ) { }
  
  /* Return value if input is valid */
  return (int_input);
}

int validChoice(int int_minValue, int int_maxValue)
{
  /* Variables */
  int int_userChoice;
  int int_correct;

  /* User input */
  do {

    printf("Which sorting algorithm do you want to use ? ");
    int_userChoice = intInput();
    int_correct = ( 
      (int_userChoice >= int_minValue) && 
      (int_userChoice <= int_maxValue) 
    ) ? int_userChoice : -1;
    printf("\n");

  } while (int_correct == -1);

  return(int_correct);
}