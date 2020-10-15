#include <iostream>
using namespace std;

int tripletSum(int *input, int size, int x)
{
	int count=0,curReq,curInReq;
	for (size_t i = 0; i < size; i++)
	{
		curReq=x-input[i];
		for(size_t j=i+1;j<size;j++){
            curInReq=curReq-input[j];
            for (size_t k = j+1; k < size; k++)
            {
                if(input[k]==curInReq){
				    count++;
			    }
            }
		}
	}
	return count;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		cin >> x;

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}