#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include <vector>


class Matrix
{
protected:
    int number_lines, number_columns;
    std::vector < std::vector < float > > matrix;
public:
    Matrix();
    Matrix(int,int);
    Matrix(int,int,std::vector< std::vector < float > >);
    friend std::istream& operator>> (std::istream& in, Matrix&x);
    friend std::ostream& operator<< (std::ostream& out, Matrix&x);
    Matrix& operator= (Matrix&x);
    Matrix& operator+ (Matrix&x);
    Matrix& operator* (Matrix&x);
    std::vector< std::vector <float> > getMatrix();
    float determinant();
    Matrix& transposed();
    Matrix& star();
    Matrix& reversed();
    ~Matrix(){};
};

#endif // MATRIX_H
