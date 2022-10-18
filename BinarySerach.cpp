#include<bits/stdc++.h>
using namespace std;
#define N '\n'

int BinarySearch(int arr[],int low,int high,int item)
{
    if(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==item){
            return mid+1;
        }
        else if(arr[mid]>item){
            BinarySearch(arr,low,mid-1,item);
        }
        else{
            BinarySearch(arr,mid+1,high,item);
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,3,4,5,6,7,9,11,44,56,87};
    int n = sizeof(arr)/sizeof(arr[0]);
    int item = 5;
    int index = BinarySearch(arr,0,n,item);
    if(index!=-1){
        cout<<"Item found at : "<<index<<N;
    }
    else{
        cout<<"Item Not found "<<N;
    }
    return 0;
}
