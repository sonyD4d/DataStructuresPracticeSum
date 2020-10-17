#include <iostream>
using namespace std;

int findSecondLargest(int *input, int n)
{
    int firstMax=INT32_MIN,secMax=firstMax;
    for(int i=0;i<n;i++){
        if(input[i]>firstMax){
            secMax = firstMax;
            firstMax = input[i];
        }
        if(input[i]>secMax && input[i]!=firstMax)
            secMax=input[i];
    }
    return secMax;
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

		cout << findSecondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}