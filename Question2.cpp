// You have a sorted array of infinite numbers, how would you search an element in the array?
#include<iostream>
using namespace std;
int main()
{
    int a[] = {1,2,4,7,10,12,15,18};
    int lo = 0 , hi = 1;
    int tgt = 10;
    while(a[hi]<tgt)
    {
        lo =hi;
        hi*=2;
    }
    cout<<lo<<" "<<hi<<endl;
    bool ans =false;
    while(lo<=hi)
    {
        int mid = lo+(hi-lo)/2;
        if(a[mid]==tgt)
        { 
            ans = true;
            break;
        }
        else if(a[mid]>tgt)hi= mid-1;
        else
        {
            lo= mid+1;;
        }
    }
    if(ans ==true)cout<<"exist ";
    else
    {
        cout<<" NOT exist ";
    }
}