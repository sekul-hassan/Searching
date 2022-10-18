#include<bits/stdc++.h>
using namespace std;
#define N '\n'

int LinerSearch(int arr[],int n,int item)
{
    for(int i=0;i<n;i++){
        if(arr[i]==item)
            return i+1;
    }
    return -1;
}


int main()
{
    int arr[] = {2,4,2,5,3,6,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int item = 4;
    int index = LinerSearch(arr,n,item);
    if(index!=-1){
        cout<<"Item found at : "<<index<<N;
    }
    else{
        cout<<"Item Not found "<<N;
    }
    return 0;
}
