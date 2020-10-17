#include <iostream>
using namespace std;

void pushZeroesEnd(int *input, int size)
{
    int i=0,j=1;
    while(i<size&&j<size){
        if(!input[i]){
            while(!input[j]&&j<size){
                j++;
            }
            if(j==size-1 && input[j]==0){
                return;
            }
            else{
                input[i]=input[j];
                input[j]=0;             
            }
        }
        i++;
        j++;
    }
}

int main()
{

	int t;
	cin >> t;
	
	while (t--)
	{

		int size;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		pushZeroesEnd(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}