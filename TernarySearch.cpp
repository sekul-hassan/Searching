#include<bits/stdc++.h>
using namespace std;
#define N '\n'
using namespace std;

int TernarySearch(int arr[],int low,int high,int item)
{
    if(low<=high){
        int mid1 = low+(high-low)/3;
        int mid2 = high-(high-low)/3;
        if(arr[mid1]==item)
            return mid1+1;
        else if(arr[mid2]==item)
            return mid2+1;
        if(arr[mid1]>item)
            TernarySearch(arr,low,mid1-1,item);
        else if(arr[mid2]<item)
            TernarySearch(arr,mid2+1,high,item);
        else
            TernarySearch(arr,mid1+1,mid2-1,item);
    }
    return -1;
}

int main()
{
    int arr[] = {1,3,4,5,6,7,9,11,44,56,87};
    int n = sizeof(arr)/sizeof(arr[0]);
    int item = 53;
    int index = TernarySearch(arr,0,n,item);
    if(index!=-1){
        cout<<"Item found at : "<<index<<N;
    }
    else{
        cout<<"Item Not found "<<N;
    }
    return 0;
}
