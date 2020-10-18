#include <iostream>
using namespace std;

void findLargest(int **input, int nRows, int mCols)
{
    int maxSum=INT32_MIN,auxSum=0,maxIndex=0,rowOrCol=-1;
    size_t i,j;
    for(i=0;i<nRows;i++){
        for(j=0;j<mCols;j++){
            auxSum+=input[i][j];
        }
        if(auxSum>maxSum){
            maxSum=auxSum;
            maxIndex=i;
            rowOrCol=0;
        }
        auxSum=0;
    }
    for(i=0;i<mCols;i++){
        for(j=0;j<nRows;j++){
            auxSum+=input[j][i];
        }
        if(auxSum>maxSum){
            maxSum=auxSum;
            maxIndex=i;
            rowOrCol=1;
        }
        auxSum=0;
    }
    if(rowOrCol==1){
        cout<<"column ";
    }
    else{
        cout<<"row ";
    }
    cout<<maxIndex<<" "<<maxSum;
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

		findLargest(input, row, col);
		cout << endl;
	}
}