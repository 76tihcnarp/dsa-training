#include <bits/stdc++.h>
using namespace std;

//counting 1 and removing that index

//     int main(){
//     int n,z;
//     cout<<"enter n";
//     cin>>n;
//     vector <int> v;
//     cout<<"enter elements:";
//     for(int i=0;i<n;i++){
//         cin>>z;
//         v.push_back(z);
//     }
//     int freq = count(v.begin(),v.end(),1);
    
//     v.erase(v.begin()+ freq);
//     cout<<"vector after removal:";
//     for(int i=0;i<n-1;i++){
//         cout<<v[i]<<" ";
//     }
// }

//inserting element at specific index
//v.insert(v.begin()+ index , val);

// insert 1 vector into another:
//v1.insert(v1.end(),v2.begin(),v2end());

//location of element:
// int idx= find( v.begin(),v.end(),element); -v.begin();

int main(){
int n,z;
cout<<"enter n:";
cin>>n;
vector <int> v;
cout<<"insert elements:";
for(int i=0;i<n;i++){
cin>>z;
v.push_back(z);
}

int max= *max_element(v.begin(), v.end());
int min= *min_element(v.begin(), v.end());

int minidx= find( v.begin(),v.end(),min)-v.begin() ;
int maxidx= find( v.begin(),v.end(),max) -v.begin();

//cout<<min<<max<<minidx<<maxidx<<endl;

 for(int j=minidx;j<maxidx;j++){
cout<<v[j]<<" ";}
for(int i=0;i<minidx;i++){
 cout<<v[i]<<" ";  }
for(int i=maxidx;i<v.size();i++){
 cout<<v[i]<<" ";  }

}

