#include <iostream>
#include <math.h>
using namespace std;

void arrange(int *arr, int n)
{
    size_t i;
    for (i = 0; i<=(n-1)/2; i++)
    {
        arr[i]=2*i+1;
    }
    int temp=(n%2==0)?n:n-1;
    for (; i<n; i++)
    {
        arr[i]=temp;
        temp-=2;
    }
    
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}

	
}