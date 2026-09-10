//q27 ---------------------------------------incomplete
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     string s1,s2;
//     cin>>s1>>s2;
//     cin>>n;

//     // for(int i=s1[0];i<s1.length();i=i+n){
//     //     for(int j=s2[0];i<s2.length();j++){
//     //         s1.insert (i , s2[j]);
//     //     }
//     // }
// } 

//q28---------------------------------------skimmed ree's
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int k,n,m;
//     cin>>k>>n>>m;
//     string s;
//     cin>>s;
//     int ct=0;
//     for( auto i:s){
//         if((int)i>=n && (int)i<=m){
//             ct++;
//         }
//     }
//     cout<<ct;
// }

//q29
//#include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,k;
//     cin>>n>>k;
//     string s;
//     cin>>s;
//     string newstr = s.substr( k, s.length()-2*k);
//     cout<<newstr;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int k;
//     cin>>k;
//     int n = k%(s.length());
//     string newstr1 = s.substr( n,s.length());
//     string newstr2 = s.substr( 0,n);
//     string news = newstr1+newstr2;
//     cout<<news;
// }

 //q31-----------------------------------------------------------incomplete
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int k;
//     cin>>k;
//     int n = k%(s.length());
//     string newstr1 = s.substr(,);
//     string newstr2 = s.substr(0,n);
//     string news= newstr1 + newstr2;
//     cout<<news;

// }

//q32
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     string s1 =s;

//     reverse ( s.begin(), s.end());
//     if(s1==s){
//         cout<<"yes";
//     }
//     else{
//         cout<<"no";
//     }
// }

//q33
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,k,stat=1;
//     cin>>n>>k;
//     string s;
//     cin>>s;
//     string res="";
//     for(int i=0;i<n;i=i+k){
//     string news; 
//         if(stat %2!=0){
//        news= s.substr(i,k);
//         }
//         else{
//        news=s.substr(i,k);
//             reverse(news.begin(),news.end());     
//         }
//         res+=news;
//         stat++;
//     }
//     cout<<res;
// }

//q34
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int m,n,k;
//     cin>>m>>n>>k;
//     string s1,s2;
//     cin>>s1>>s2;

//     string s1r =s1.substr(m-k,k)+s1.substr(0,m-k);
//     string s2l = s2.substr(k,n-k)+s2.substr(0,k);
//     string s3 = s1r + s2l;

//     string rev= s3;
//     reverse(rev.begin(),rev.end());
//     if(rev==s3){
//         cout<<"true"<<s3;
//     }
//     else{
//         cout<<"false"<<" "<<s3;
//     }
// }

//q35
//#include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     string s1="",s2="";
//     for(int i=0;i<n;i++){
//        if(isupper(s[i])){
//         char res= tolower(s[i]);
//         s1+=res;
//        }
//        else if(isalnum(s[i])==0){
//         s2+=s[i];
//        }
//        else{
//         s1+=s[i];
//        }
//     }
// s1=s1+s2;
// }

//q32
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int res,sum=0;
    for(int i=0;i<n;i++){
        if(isdigit(s[i])){
            res= s[i];
            sum+=res*res;
        }
    }

     int z = n%(s.length());
    if(sum%2==0){
    string news=s.substr(n-z,z)+s.substr(0,n-z);
    cout<<news;
    }
    else{
   string news=s.substr(z,n-z)+s.substr(0,z);
    cout<<news;
    }

}