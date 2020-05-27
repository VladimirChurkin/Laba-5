#include "Matrix.h"
template<typename T>
Matrix<T>::Matrix(int columns, int lines) {
    this->variablesType = variablesType;
    this->columns = columns;
    this->lines = lines;
}

template <typename T>
void Matrix<T> :: DataTypeSize() {
    //std::cout << "123" << std::endl;
    std::cout << "Variables are " << sizeof(variablesType) << "byte" << std::endl;
}

template <typename T>
int Matrix<T> :: AddColumns(){
    return columns++;
}

template <typename T>
int Matrix<T> :: AddLines(){
    return lines++;
}
