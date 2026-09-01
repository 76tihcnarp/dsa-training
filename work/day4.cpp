
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    int arr[n];
    cout<<"enter elements in array:";
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }

sort(arr,arr + 8 , greater<int>());

cout<<"top 5 sum:";

int sum=accumulate(arr,arr+5,0);
cout<<sum<<endl;

cout<<"last 5:";
for (int i = n-5; i<n; i++) {
        cout <<arr[i]<< " ";
    }

}