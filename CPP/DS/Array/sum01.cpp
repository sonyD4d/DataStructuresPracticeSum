#include <iostream>
#include <algorithm>
using namespace std;

void sortZeroesAndOne(int *input, int size)
{
    for (size_t i = 0,j=size-1; i < size; i++)
    {
        if(input[i]==0||i>j){
            continue;
        }
        else{
            while(input[j]==1 && j>i){
                j--;
            }
            input[i]=0;input[j]=1;
        }
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

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		sortZeroesAndOne(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}