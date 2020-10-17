#include <iostream>
#include <algorithm>
using namespace std;

void sort012(int *a, int n){
    int zeroPrt=0,twoPtr=n-1;
    int i=0;
    while (i<=twoPtr)
    {
        if(a[i]==1){
            i++;
        }
        else if(a[i]==0){
            a[i]=a[zeroPrt];
            a[zeroPrt++]=0;
            i++;
        }
        else if(a[i]==2){
            a[i]=a[twoPtr];
            a[twoPtr--]=2;
        }
    }
}

/*{
    TRY1:
    int zeroPtr=1;
    for (size_t i = 0; i < n; i++)
    {
        int onePtr=i+1;
        if(input[i]==2){
            while(!input[zeroPtr]==0 && zeroPtr<n) zeroPtr++;
            if(zeroPtr == n){
                while(input[onePtr]!=1 && onePtr<n){onePtr++;}
                if(onePtr==n) continue;
                input[onePtr] = 2; input[i]=1;                
            }
            else{
                input[zeroPtr] = 2; input[i]=0;   
            }
        }
        else if(input[i]==1){
            while(!input[zeroPtr]==0 && zeroPtr<n) zeroPtr++;
            if(zeroPtr == n){
                continue;
            }
            input[zeroPtr] = 1; input[i]=0;
        }
    }
}
*/
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

		sort012(arr, size);

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}

		delete[] arr;
		cout << endl;
	}

	return 0;
}