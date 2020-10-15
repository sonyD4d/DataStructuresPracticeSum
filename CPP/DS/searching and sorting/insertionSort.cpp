#include <iostream>
using namespace std;

void insertionSort(int *a, int n)
{
    int i=1,j,k;
    while(i<n){
        k=a[i];
        j=i-1;
        while(j>=0 && a[j]>k){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=k;
        i++;
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

		insertionSort(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}

	return 0;
}