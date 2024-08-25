/*
input : rowSize, columnSize, elements of the matrix (integer).

*/

#include <iostream>
#include "manage_matrix.h";

int main()
{
    int** matrix = allocateMatrix(5,5);
    displayMatrix(matrix,5,5);
    deallocateMatrix(matrix,5,5);
    return 0;
}