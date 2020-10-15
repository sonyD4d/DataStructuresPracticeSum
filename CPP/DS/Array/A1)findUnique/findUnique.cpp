#include <iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    for(size_t i=0;i<size;i++){
        size_t j=0;
        for(;j<size;j++){
            if(arr[i]==arr[j] && i!=j){
                break;
            }
        }
        if(j == size){
            return arr[i];
        }
    }
    return -1;
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

		cout << findUnique(input, size) << endl;
	}

	return 0;
}