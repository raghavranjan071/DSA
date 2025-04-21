#include<bit/stdc++.h>
using namespace std;

int f(vector<int> arr)
{
    int n = arr.size();
    int maxi = INT_MIN, smaxi = INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(maxi < arr[i])
        {
            maxi = arr[i];
        }
    }

    for(int i=0;i<n;i++)
    {
        if(smaxi < arr[i] && arr[i] < maxi)
        {
            smaxi = arr[i];
        }
    }

    //In case all elements in array are same, smaxi is not updated so its value will be INT_MIN 
    if(smaxi == INT_MIN)
    {
        return -1;
    }
    return smaxi;
}
