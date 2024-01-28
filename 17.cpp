#include<bits/stdc++.h>
using namespace std;

void swap(int a, int b ){
    int temp=a;
    a=b;
    b=temp;
}

int partition(int a[], int left, int right){
    int pivot = a[left];
    int i=left +1;
    for(int j= i;j<=right;j++){
        if(a[j]<pivot){
            swap(a[i],a[j]);
            i++;
        }
    swap(pivot,a[i-1]);
    }
    return i-1;
}
    