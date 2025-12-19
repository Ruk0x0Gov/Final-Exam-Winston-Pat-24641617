/*
 * CS101 Final Exam - File 1: sort_array.cpp
 * The Logic Test: Sorting an Array
 *
 * Student Name: Winston Pat
 * Date: 12/18/25
 *
 * OBJECTIVE:
 * Write a program that sorts an array of 100 integers in ascending order.
 *
 * REQUIREMENTS:
 * 1. Use the provided array 'numbers' containing integers 1-100 in random order
 * 2. Implement a sorting algorithm (Bubble Sort is recommended for simplicity)
 * 3. Display the array before and after sorting (at least the first 10-20 elements)
 *
 * HINTS:
 * - You'll need a nested loop (a loop inside another loop)
 * - You'll need to swap two elements when they're in the wrong order
 * - To swap: temp = a; a = b; b = temp;
 *
 * GRADING FOCUS:
 * - Do you understand the sorting logic?
 * - Can you use nested loops correctly?
 * - Does your swap mechanism work?
 */

#include <iostream>
using namespace std;

int main()
{
    // An unsorted array of numbers 1-100 for you to sort
    int numbers[100] = {
        63, 12, 89, 45, 23, 78, 34, 91, 56, 7,
        82, 29, 67, 14, 95, 41, 18, 73, 50, 36,
        98, 5, 61, 27, 84, 48, 10, 75, 32, 69,
        21, 58, 93, 15, 80, 44, 3, 70, 37, 96,
        52, 19, 86, 31, 65, 9, 77, 42, 24, 88,
        54, 1, 71, 39, 94, 25, 81, 47, 13, 68,
        35, 99, 59, 22, 85, 46, 11, 74, 30, 97,
        51, 6, 72, 38, 92, 26, 83, 49, 16, 66,
        33, 100, 57, 20, 87, 43, 8, 76, 40, 62,
        28, 90, 55, 17, 79, 4, 64, 2, 53, 60};
    
    // TODO: Display the array BEFORE sorting
    cout << "Array before sorting:" << endl;
    
    for (int i=0; i<15; i++) // shows the first 20 numbers
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    
    
    // sorting the array code
    for(int i = 0; i < 100; i++)
    {
        for(int j = 0; j < 100-1; j++)
        {
            if(numbers[j] > numbers[j+1])
            {
                // swaps them
                int temp = numbers[j];// create temp to store number
                numbers[j] = numbers[j+1];// puts right number to left (swap )
                numbers[j+1] = temp;// pulls saved number to the right spot
            }
        }
    }
    
    
    
    // TODO: Display the array AFTER sorting
    cout << "\nArray after sorting:" << endl;
    // Hint: Print the first 10-20 elements to verify they're now in order (should be 1, 2, 3, ...)
    
    // prints 15 digits in sorted order
    for(int i=0; i<15; i++)
    {
        cout<<numbers[i] << " ";
    }
    cout << endl;
    
    
    
    
    
    return 0;
  }
