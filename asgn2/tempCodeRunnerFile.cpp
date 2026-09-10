#include <bits/stdc++.h>
using namespace std;
int main(){
int m,n;
cin>>m>>n;
string s1,s2;
cin.ignore();
getline(cin,s1);
getline(cin,s2);


for(int i=0;i<m;i++){
    int count=0;
    for(int j=0;j<n;j++){
        if(s1[i]==s2[j]){
            count++;
        }
    }
    cout<<count<<" ";
}

}