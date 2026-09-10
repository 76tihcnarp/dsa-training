//input 2d
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int m,n;
//     cin>>m>>n;
//     vector <vector<string>>v (m,vector<string>(n));
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>v[i][j];
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<v[i][j]<<" ";
//         }
//         cout<<" "<<endl;
//     }
// }

//q37
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int m,n;
//     cin>>m>>n;
//     vector <vector<string>>v (m,vector<string>(n));
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>v[i][j];
//         }
//     }
//     for(int i=0;i<m;i++){      
//     cout<<v[i][0].length()<<" "<<v[i][n-1].length();   
//         cout<<" "<<endl;
//     }
// }

//q38
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// int m,n;
// cin>>m>>n;
// string s1,s2;
// cin.ignore();
// getline(cin,s1);
// getline(cin,s2);
// for(int i=0;i<m;i++){
//     int count=0;
//     for(int j=0;j<n;j++){
//         if(s1[i]==s2[j]){
//             count++;
//         }
//     }
//     cout<<count<<" ";
// }
// }

//q39
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <string> v;
//     int n;
//     cin>>n;
//     string s;
//     for(int i=0;i<n;i++){
//         cin>>s;
//         v.push_back(s);
//     }

//     for(int i=0;i<n/2;i++){
//         string s="";  
//         string new1 = v[i].substr(0,i+1);
//         string new2 = v[n-1-i].substr((v[n-1-i].length())-i-1,i+1);
//         s = new1+new2;
//         cout<<s<<" ";
//         }
//     }

//q40
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// string s;
// cin>>s;
// for(int i=0;i<n;i++){
//     int k;
//     for(int j=i+1;j<n;j++){
//         if(s[i]==s[j]){
//             k=j-i-1;
//             break;
//         }
//         else{
//             k=-1;
//         }
//     }
//     cout<<k;
// }
// }

//optimization

#include <bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 string s;
 cin>>s;
 for(int i=0;i<n;i++){
    int pos = s.find(s[i],i+1);
    int k= pos-i-1;
    if(k<0){ k=-1;}
    cout<<k;
 }
    }