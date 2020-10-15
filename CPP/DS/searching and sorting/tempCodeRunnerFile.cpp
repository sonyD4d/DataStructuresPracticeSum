#include <iostream>
using namespace std;

void bubbleSort(int *a, int size)
{
    int temp;
    bool flag=true;
    for (size_t i = 0; i < size-1; i++)
    {
        cout<<"in loop";
        for (size_t j = 0; j < size-i-1; j++)
        {
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag = false;
            }
        }
        if(flag) return;
    }
    return;
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

		bubbleSort(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}
}