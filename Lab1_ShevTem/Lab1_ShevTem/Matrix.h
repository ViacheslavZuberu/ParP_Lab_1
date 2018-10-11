#pragma once
class Matrix
{
public:
    int ** matrix;
    Matrix(int n);
    ~Matrix();
    void Fill();
    void Print();
    friend const Matrix operator*(const Matrix & left, const Matrix & right);

private:
    int N;
    void InitMatrix();
};