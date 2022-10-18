#include<bits/stdc++.h>
using namespace std;
#define N '\n'
using namespace std;

int JumpSearch(int arr[],int n,int value)
{
    int jmp = sqrt(n);
    int pre = 0;
    while(arr[jmp-1]<value){
        pre = jmp;
        jmp+=jmp;
        if(pre>=n){
            return -11;
        }
    }
    while(pre<n and pre<=jmp){
        if(arr[pre]==value)
            return pre+1;
        pre++;
    }
    return -1;
}

int main()
{
    int arr[] = {1,3,4,5,6,7,9,11,44,56,87};
    int n = sizeof(arr)/sizeof(arr[0]);
    int item = 5;
    int index = JumpSearch(arr,n,item);
    if(index!=-1){
        cout<<"Item found at : "<<index<<N;
    }
    else{
        cout<<"Item Not found "<<index<<N;
    }
    return 0;
}

