// Problem1: Overload the binary operator - to multiply the 2x2 matrix. Define a class Matrix with 2-D integer type array with equal size 2. Initialize one object of Matrix M1 with predefined values. Initialize another object of Matrix M2 with user’s values. Similarly, create another object M3 with 0 values to store the result. Now define an operator function to make the expression M3 = M1-M2 executable.

#include <iostream>

using namespace std;


class Matrix
{
    
public:
    int numbers[2][2];
    Matrix()
    {
        int count = 1;
        for(int i = 0; i<2; i++)
        {
            for(int j = 0;j<2; j++)
            {
                numbers[i][j] = 0;
            }
        }
    }

    Matrix(int num1, int num2, int num3, int num4)
    {
        numbers[0][0] = num1;
        numbers[0][1] = num2;
        numbers[1][0] = num3;
        numbers[1][1]= num4;
    }

    void show()
    {
        for(int i = 0; i<2; i++)
        {
            for(int j =0; j<2; j++)
            {
                cout<<numbers[i][j]<<"   ";
            }
            cout<<endl;
        }
    }

    void get_numbers()
    {
        cout<<"Enter the elements of the matrix"<<endl;
        for(int i = 0; i<2; i++)
        {
            for(int j =0; j<2; j++)
            {
                cout<<"Enter element number "<<i<<" , "<<j<<endl;
                cin>>numbers[i][j];
            }
        }
    }

    Matrix operator -(Matrix);
};

Matrix Matrix::operator-(Matrix a)
{
    Matrix temp;
    int num = 2;
    for(int i = 0; i<num; i++)
    {
        for(int j =0; j<num; j++)
        {
            for(int k = 0; k<num; k++)
            {
                temp.numbers[i][j] = temp.numbers[i][j] + this->numbers[i][k]* a.numbers[k][j];
            }
            
        }
    }
    return temp;
    
}




int main()
{
    Matrix m1(1,2,3,4), m2, m3;
    m2.get_numbers();
    cout<<"The first matrix is:"<<endl;
    m1.show();
    cout<<"The second matrix is:"<<endl;
    m2.show();
    m3 = m1-m2;
    cout<<"The product is:"<<endl;
    m3.show();



    return 0;
}