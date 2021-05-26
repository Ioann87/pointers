#include <iostream>

using namespace std;

void init_array(int* array, int& size)
{
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    return;
}

void output_array(int* array, int& size)
{
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    return;
}

int** create_matr(int& row, int& col)
{
    int** ptr = nullptr;
    ptr = new int*[row];
    for (int i = 0; i < col; i++) {
        ptr[i] = new int[col];
    }
    return ptr;
}

void init_array(int** matr, int* array, int& row, int& col, int& size)
{
    int k = 0;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (k < size) {
                matr[i][j] = array[k];
                k++;
            } else {
                matr[i][j] = 88;
            }
        }
    }
    return;
}

void output_array(int** matr, int& row, int& col)
{
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << matr[i][j] << " ";
        }
        cout << endl;
    }
    return;
}

void delete_matr(int** matr, int& row)
{
    for (int i = 0; i < row; i++) {
        delete[] matr[i];
    }
    delete[] matr;
    return;
}
