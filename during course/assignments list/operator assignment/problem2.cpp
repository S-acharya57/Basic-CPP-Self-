//Problem2: Modify above program for friend function.

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

    friend Matrix operator -(Matrix, Matrix);
};

Matrix operator -(Matrix a, Matrix b)
{
    Matrix temp;
    int num = 2;
    for(int i = 0; i<num; i++)
    {
        for(int j =0; j<num; j++)
        {
            for(int k = 0; k<num; k++)
            {
                temp.numbers[i][j] = temp.numbers[i][j] + a.numbers[i][k]* b.numbers[k][j];
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