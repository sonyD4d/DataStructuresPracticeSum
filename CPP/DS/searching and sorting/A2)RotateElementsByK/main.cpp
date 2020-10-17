#include <iostream>
using namespace std;

void rotate(int *input, int d, int n)
{
    size_t j;
    int aux[d];
    for (size_t i = 0; i <d; i++)
        aux[i]=input[i];

    for (j = 0; j <n-d; j++)
        input[j]=input[j+d];

    for(size_t i=0;j<n;j++,i++)
        input[j]=aux[i];       
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

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}