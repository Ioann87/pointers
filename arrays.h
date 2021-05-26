#ifndef ARRAYS_H
#define ARRAYS_H

void init_array(int* array, int& size);

void output_array(int* array, int& size);

int** create_matr(int& row, int& col);

void init_array(int** matr, int* array, int& row, int& col, int& size);

void output_array(int** matr, int& row, int& col);

void delete_matr(int** matr, int& row);

#endif // ARRAYS_H
