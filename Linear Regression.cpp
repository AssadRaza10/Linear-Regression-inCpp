#include<iostream>
using namespace std;

float mean(int mat[][2], int rows, int mean_col)
{
    float sum = 0;
    for(int i=0; i<rows; i++)
        sum += mat[i][mean_col];
    return sum / rows;
}

float beta1(int mat[][2], int rows)
{
    float x_mean = mean(mat, rows, 0);
    float y_mean = mean(mat, rows, 1);

    float numerator = 0;
    float denominator = 0;

    for(int i=0; i<rows; i++)
    {
        numerator += (mat[i][0]-x_mean)*(mat[i][1]-y_mean);
        denominator += (mat[i][0]-x_mean)*(mat[i][0]-x_mean);
    }

    return numerator / denominator;
}

float beta0(int mat[][2], int rows)
{
    return mean(mat, rows, 1) - beta1(mat, rows)*mean(mat, rows, 0);
}

void linear_regression(int mat[][2], int rows)
{
    float b0 = beta0(mat, rows);
    float b1 = beta1(mat, rows);

    for(int i=0; i<rows; i++)
        cout << "y_pred["<<i<<"] = " << b0 + b1*mat[i][0] << endl;
}

int main()
{
    int matrix[4][2]= {{5,11},{4,8},{7,14},{2,5}};
    int rows = 4;

    cout<<"Beta 1 : "<<beta1(matrix,rows)<<endl;
    cout<<"Beta 0 : "<<beta0(matrix,rows)<<endl;

    linear_regression(matrix,rows);
}

