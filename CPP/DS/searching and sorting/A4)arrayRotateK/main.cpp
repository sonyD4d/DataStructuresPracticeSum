#include <iostream>
using namespace std;

int arrayRotateCheck(int *input, int size)
{
    size_t i;
    for (i =0; i < size; i++)
    {
        if(input[i]<input[i+1])
            continue;
        else {
            i++;
            break;
        }
    }
    if(i==size)
        return 0;
    return i;
    
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

		cout << arrayRotateCheck(input, size) << endl;
		delete[] input;
	}
	
	return 0;
}