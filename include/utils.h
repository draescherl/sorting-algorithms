/*!
  \file utils.h
  \author L.Draescher <draescherl@eisti.eu>
  \date 27/11/2020
  \version 0.1 - first draft
  \brief Header file for utils.c
  \remarks None
*/

#ifndef _UTILS_H_
#define _UTILS_H_

/* Additional librairies */
#include <stdlib.h>
#include <stdio.h>

/* Global variables */
/*!
  \def ALLOCATION_ERROR
  Memory allocation error.
*/
#define ALLOCATION_ERROR -1
/*!
  \def INT_INPUT_ERROR
  Error if user didn't input an int
*/
#define INT_INPUT_ERROR -2


/* Function prototypes */
/*!
  \fn void createDynArray(int* pint_array, int int_size)
  \author L.Draescher <draescherl@eisti.eu>
  \date 27/11/2020
  \version 0.1 - first draft
  \param pint_array The array to create
  \param int_size The size of the array
  \brief Create an array with a given size
  \remarks None
*/
void createDynArray(int* pint_array, int int_size);

/*!
  \fn void initDynArrayRandom(int* pint_array, int int_size)
  \author L.Draescher <draescherl@eisti.eu>
  \date 28/11/2020
  \version 0.1 - first draft
  \param pint_array The array to initialize
  \param int_size The size of the array
  \brief Initialize an array with random values
  \remarks None
*/
void initDynArrayRandom(int* pint_array, int int_size);

/*!
  \fn void printDynArray(int* pint_array, int int_size)
  \author L.Draescher <draescherl@eisti.eu>
  \date 28/11/2020
  \version 0.1 - first draft
  \param pint_array The array to initialize
  \param int_size The size of the array
  \brief Prints an array to the terminal
  \remarks None
*/
void printDynArray(int* pint_array, int int_size);

/*!
  \fn void printMenu(void)
  \author L.Draescher <draescherl@eisti.eu>
  \date 30/11/2020
  \version 0.1 - first draft
  \brief Display menu in terminal
  \remarks None
*/
void printMenu(void);

/*!
  \fn int intInput(void)
  \author L.Draescher <draescherl@eisti.eu>
  \date 13/10/2020
  \version 0.1 - first draft
  \return The user's input
  \brief This function makes sure the user inputs an int
  \remarks None
*/
int intInput(void);

/*!
  \fn int validChoice(int int_minValue, int int_maxValue)
  \author L.Draescher <draescherl@eisti.eu>
  \date 30/11/2020
  \version 0.1 - first draft
  \param int_minValue The min range of the menu
  \param int_maxValue The max range of the menu
  \return Correct menu input
  \brief This function makes sure the user has entered a valid choice
  \remarks None
*/
int validChoice(int int_minValue, int int_maxValue);

#endif