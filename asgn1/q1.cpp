//q10
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<arr[0]+arr[1]<<endl;
//     cout<<arr[n-2]+arr[n-1]<<endl;
// }

//q11
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,o=0,e=0;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]%2==0){
//             e++;
//         }else{o++;}
//     }
//     if(o>e){cout<<"odd";}
//     else if(e>o){cout<<"even";}
//     else{cout<<"tie";}

// }

//q12
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,g,s;
//     vector <int> v;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>g;
//         arr[i]=g;
//         for(int j=0;j<g;j++){
//             cin>>s;
//             v.push_back(s);
//         }
//     }
//     int sum=0;
//     int count=0;
//     for(int i=0;i<n;i++){
//         for(int j=count;j<count+arr[i];j++){   //error: was updating count in loop DON'T !!!
//             sum+=v[j];
           
//         }
//         count+=arr[i];
//         cout<<sum<<endl;
//         sum=0;
//     }

// }

//q13
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,g,s;
//     cin>>n;
//     int arr[n];
//     vector <int> v;
//     for(int i=0;i<n;i++){
//         cin>>g;
//         arr[i]=g;
//         for(int j=0;j<g;j++){
//             cin>>s;
//             v.push_back(s);
//         } 
//     }
//     int count=0;
//     for(int i=0;i<n;i++){
//         int s=0,ma=v[0],mi=v[0];
//         for(int j=count;j<count+arr[i];j++){
//             ma=max(ma,v[j]);
//             mi=min(mi,v[j]);
//             s=s+v[j];
//         }
//         count+=arr[i];
//         cout<<ma<<" "<<mi<<" "<<s<<" "<<fixed << setprecision(1)<<(double)s/arr[i]<<endl;  
//     }
// }

//q14
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//    sort(arr,arr + 8 , greater<int>());
//   int sum=accumulate(arr,arr + 5,0);
//   cout<<"sum : "<<sum<<endl;
//   for(int i=n-5;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
// }

//q15
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i=i+2*k){
        for(int j=0;j<k;j++){
            swap(arr[i+j],arr[i+j+k]);
        }
    }
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}