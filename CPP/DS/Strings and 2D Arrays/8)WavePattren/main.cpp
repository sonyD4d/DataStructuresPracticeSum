#include <iostream>
using namespace std;

void wavePrint(int **a, int nRows, int mCols)
{
    bool flag=0;
    for(size_t i=0;i<mCols;i++){
        if(!flag){
            for(size_t j=0;j<nRows;j++){
                cout<<a[j][i]<<" ";
            }
            flag=1;
        }
        else{
            for(int j=nRows-1;j>=0;j--){
                cout<<a[j][i]<<" ";
            }
            flag=0;
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
		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}
		wavePrint(input, row, col);
		cout << endl;
	}
}