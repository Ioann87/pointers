#include "arrays.h"
#include <iostream>

using namespace std;

int main()
{
    int size = 0;
    cout << "Enter size of array: ";
    cin >> size;

    int* user_array = nullptr;
    user_array = new int[size];

    cout << "Enter array numbers(integer): " << endl;
    init_array(user_array, size);

    cout << "User array: " << endl;
    output_array(user_array, size);

    cout << "Make array 2d" << endl;
    int row = 0;
    cout << "Enter quantity of rows: ";
    cin >> row;
    int col = 0;
    cout << "Enter quantity of columns: ";
    cin >> col;

    cout << "New array will be " << row << " x " << col << " size";
    cout << endl;

    int** new_array = nullptr;
    new_array = create_matr(row, col);

    init_array(new_array, user_array, row, col, size);

    output_array(new_array, row, col);

    delete[] user_array;
    delete_matr(new_array, row);

    system("pause");
    return 0;
}
