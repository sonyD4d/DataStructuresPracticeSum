#include<algorithm>
#include<iostream>
#include<map>
using namespace std;
int tripletSum(int *arr, int n, int num)
{
    int count;
	sort(arr,arr+n);
    map<int,int> m;
    for (size_t i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    
	for(int i=0;i<n-2;i++){
        count=0;
        int l=i+1;
        int r=n-1;
        while(l<r){
            if(arr[i]+arr[l]+arr[r]==num){
                count++;
                l++; 
                r--; 
            }
            else if(arr[i]+arr[l]+arr[r]<num){
                r--;
            }
            else{
                l++;
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