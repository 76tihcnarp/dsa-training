#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v1;
    int n,k,v;
    cout<<"enter n & k:";
    cin>>n>>k;

    for(int i=0;i<n;i++){
       cin>>v;
        v1.push_back(v);
    }

    cout<<"swapping:"<<endl;
    for(int i=0;i<n;i=i+2*k){
        for(int j=0;j<k;j++){
            swap(v1[i+j],v1[i+j+k]);
        }
    }

    cout<<"printing vector:"<<endl;
    for(int i=0;i<n;i++){
       cout<<v1[i]<<" ";
    }
}

// counting in vector;
// int freq = count( vec1.begin(),vec1.end(),element);

//removing element
// v.erase( v.begin() + index) ;