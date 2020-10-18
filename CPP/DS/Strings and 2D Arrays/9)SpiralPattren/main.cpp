#include <iostream>
using namespace std;
/*
for(innerI=nRows-i;innerI>i;innerI--){
                cout<<input[innerI][j-1];
            }
            j--;
*/
void spiralPrint(int **input, int nRows, int nCols)
{
    bool dir=true;
    int i=nRows,j=nCols,innerI,innerJ;
    while (i>0&&j>0)
    {
        if(dir){
            //print i -->
            for(innerJ=nCols-j;innerJ<j;innerJ++){
                cout<<input[nRows-i][innerJ]<<" ";
            }
            i--;
            //print j VV
            for(innerI=nRows-i;innerI<=i;innerI++){
                //cout<<innerI;
                cout<<input[innerI][j-1]<<" ";
            }
            j--;
            dir=false;
        }
        else{
            //print i <--
            for(innerJ=j-1;innerJ>nCols-j-2;innerJ--){
                cout<<input[i][innerJ]<<" ";
            }
            //print j ^^
            for(innerI=i-1;innerI>nRows-i-1;innerI--){
                //cout<<innerI;
                cout<<input[innerI][nCols-j-1]<<" ";
            }
            dir=true;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}