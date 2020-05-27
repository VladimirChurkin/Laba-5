#pragma once
#include <iostream>

template <typename T>
class Matrix{
public:
    Matrix(int columns, int lines);
    void DataTypeSize();
    int AddColumns();
    int AddLines();
private:
    T variablesType;
    int columns;
    int lines;
};

template class Matrix<int>;