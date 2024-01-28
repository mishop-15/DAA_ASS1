#include<bits/stdc++.h>
using namespace std;

int maxStraight(int n,int a[]){
    int maxS = 0;
    int current = 1;
    sort(a,a+n);
    for(int i=1;i<n;i++){
        if (a[i] == a[i - 1] + 1) {
            current++;
        } else if (a[i] != a[i - 1]) {
            current = 1;
        }
        maxS=max(maxS,current);
    }
    return maxS;

}
int main (){
    int n;
    cout<<"Enter the number of integers: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxS=maxStraight(n,a);
    cout << "The maximum value of K for the given array is: " << maxS;

    return 0;
}