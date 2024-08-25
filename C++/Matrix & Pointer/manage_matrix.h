#include <iostream>

int** allocateMatrix(int rowSize, int columnSize)
{
    int** matrix = new int*[rowSize]();
    for(int i = 0; i < rowSize; i++)
    {
        matrix[i] = new int[columnSize](); 
    }
    return matrix;
}

void displayMatrix(int** matrix, int rowSize, int columnSize)
{
    for(int i = 0; i < rowSize; i++)
    {
        for(int j = 0; j < columnSize; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void deallocateMatrix(int** matrix, int rowSize, int columnSize)
{
    for(int i = 0; i < rowSize; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}
