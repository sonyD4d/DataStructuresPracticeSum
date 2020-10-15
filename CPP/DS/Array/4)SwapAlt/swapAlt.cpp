#include <iostream>
using namespace std;
void swapAlternate(int *a, int size)
{
    int temp,odd;
    if(size%2==1){
        odd=a[size-1];
    }
    for (size_t i = 0; i < size-1; i+=2)
    {
        temp=a[i+1];
        a[i+1]=a[i];
        a[i]=temp;
    }
    //a[size-1]=odd; 
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;
		cin >> size;
		int *arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
		swapAlternate(arr, size);
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}
}