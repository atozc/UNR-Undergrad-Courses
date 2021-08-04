/**
 * Name: CS 202 - Project 1
 * Author: Crystal Atoz
 * Date Last Modified: 1/29/20
 */

#include <iostream>
#include <fstream>
using namespace.std;

//Function Prototypes
void readNames(inputFile,namesArray);
void printNamesToTerminal(namesArray);
void sortNamesAlphabetic(namesArray);
int sortNamesByLength(namesArray);
void printNamesToFile(outputFile,namesArray);
void myStringCopy(char destination[], const char source[]);
int myStringLength(const char str[]);
int myStringCompare(const char str[], const char str2[]);

int main() {

  char input_File[100];
  char output_File[100];
  ifstream infile;
  ofstream outfile;

  // Asks user for input and output file names
  std::cout << "Please enter input file name: " << endl;
  std::cin >> input_File;
  std::cout << "Please enter output file name: " << endl;
  std::cin >> output_File;

  infile.open(input_File);

  // Calls Functions
  readNames(input_File,namesArray);

  printNamesToTerminal(namesArray);

  sortNamesAlphabetic(namesArray);

  sortNamesByLength(namesArray);

  printNamesToFile(output_File,namesArray);

  for (int i = 0; i < namesArray; i++) {
    void myStringCopy(char destination[i], const char source[i]);
  }
  int myStringLength(const char str[]);

  int myStringCompare(const char str1[], const char str2[]);

  return 0;
}

// Function Definitions

/** Reads in the list of names from the input file
 *  @param Input File, A character array
 *  @param
 *  @pre
 *  @post Assigns the names read in from the file to the characte array
 *  @return
 */
readNames(inputFile,namesArray) {

}

/** Prints the list of names to the terminal
 *  @param A character array
 *  @param
 *  @pre The character array is unsorted
 *  @post Prints the unsorted array to the terminal
 *  @return
 */
printNamesToTerminal(namesArray[], size) {

  int i;
  for (i = 0; i < size; i++) {
    cout << namesArray[i] << " ";
  }
  cout << endl;
}

/** Sorts the list of names alphabetically
 *  @param A character array
 *  @param
 *  @pre The list of names are unsorted
 *  @post The list of names are sorted alphabetically and printed to terminal
 *  @return
 */
sortNamesAlphabetic(namesArray) {


}

/** Sorts the list of names by length then alphabetically
 *  @param A character array
 *  @param
 *  @pre
 *  @post List of names are sorted by length and alphabetitized
 *  @return
 */
sortNamesByLength(namesArray) {

}

/** Writes the sorted list of names to the output file
 *  @param Output file, A character array
 *  @param
 *  @pre List of names should be sorted by length and alphabetically
 *  @post Sorted list of names should be written to the output file
 *  @return
 */
printNamesToFile(outputFile,namesArray) {

}

/** Copies characters from the source to the destination
 *  @param Destination, Source
 *  @param
 *  @pre
 *  @post
 *  @return
 */
void myStringCopy(char destination[], const char source[]) {

  int i;
  for (i = 0; destination[i] != '\0'; i++) {
    source[i] = destination[i];
    i++;
  }
  source[i] = '\0';
}

/** Counts characters in an array
 *  @param Character array
 *  @param
 *  @pre
 *  @post
 *  @return Length of array without NULL character
 */
int myStringLength(const char str[]) {

  int i = 0;
  while (str[i] != '\0') {
    i++;
  }
  return i;
}

/** Compares the two arrays
 *  @param Array 1, Array 2
 *  @param
 *  @pre
 *  @post  Compares the two arrays
 *  @return The appropriate value after comparing
 */
int myStringCompare(const char str1[], const char str2[]) {

  int i = 0;
  while (str1[i] && str2[i] && str1[i] = str2[i]) {
    i++;
  }
  return str1[i] - str2[i];
}
