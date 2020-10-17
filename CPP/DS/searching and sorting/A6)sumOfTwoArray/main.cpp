#include <iostream>
using namespace std;

void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    int max = (size1>size2?size1:size2);
    int sum=0,carry=0;
    int i1=size1-1,i2=size2-1;
    while (i1>=0&&i2>=0)
    {
        sum=input1[i1]+input2[i2]+carry;
        if(sum>=10){
            carry=sum/10;
        }
		else{
			carry=0;
		}   
		output[max--]=sum%10;
		i1--;
		i2--;
    }  
    while(i1>=0){
		output[max--]=input1[i1--]+carry;
		carry=0;
	}
	while(i2>=0){
		output[max--]=input2[i2--]+carry;
		carry=0;
	}
	output[0]=carry;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size1;
		cin >> size1;

		int *input1 = new int[size1];

		for (int i = 0; i < size1; ++i)
		{
			cin >> input1[i];
		}

		int size2;
		cin >> size2;

		int *input2 = new int[size2];

		for (int i = 0; i < size2; ++i)
		{
			cin >> input2[i];
		}

		int outsize = 1 + max(size1, size2);

		int *output = new int[outsize];

		sumOfTwoArrays(input1, size1, input2, size2, output);

		for (int i = 0; i < outsize; ++i)
		{
			cout << output[i] << " ";
		}

		delete[] input1;
		delete[] input2;
		delete[] output;
		cout << endl;
	}

	return 0;
}