// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target , return true if target is in matrix or false otherwise.
// You must write a solution in O(log(m * n)) time complexity.
// Example 1:
// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: true
// Example 2:
// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
// Output: false
#include<iostream>
using namespace std;
bool searchMatrix(int arr[][4], int row, int col,int target)
{
     int i=0;
    int j=col-1;
    while(i<=row-1&&j>=0)
    {
        if(arr[i][j]==target)
        {
            return true;
        }
        else if(arr[i][j]>target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return false;
}
int main()
{
    int arr[3][4]={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int row = sizeof(arr)/sizeof(arr[0]);
    int col = sizeof(arr[0])/sizeof(arr[0][0]);
    int target =15;
    bool ans =searchMatrix(arr,row,col,target);
    if(ans==true)
    {
        cout<<"NUMBER EXIST"<<" ";
    }
    else
    {
        cout<<" NOT EXIST"<<" ";
    }

}