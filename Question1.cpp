// Write a program to apply binary search in array sorted in decreasing order.
#include<iostream>
using namespace std;
bool BinarySearch(int arr[],int n,int tar)
{
    int lo = 0;
    int hi = n-1;
    while(lo<=hi)
    {
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==tar) return true;
        else if(arr[mid]>tar) lo = mid+1;
        else
        {
            hi = mid-1;
        }
        
    }
    return false;
}
int main()
{
    int n=10;
    int arr[10]={39,33,31,29,24,22,18,14,12,4};
    int tar =9;
    bool ans = BinarySearch(arr,n,tar);
    if(ans==true)
    {
        cout<<"Number got"<<endl;
    }
    else
    {
        cout<<" NOt found"<<endl;
    }

}