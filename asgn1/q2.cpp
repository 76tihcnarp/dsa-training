//q16
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n,g;
// vector <int> v1;
// cin>>n;
// for(int i=0;i<n;i++){
//     cin>>g;
//     v1.push_back(g);
// }
// int c= count(v1.begin(),v1.end(),1);
// v1.erase( v1.begin() + c);

// for(int i=0;i<v1.size();i++){
//    cout<<v1[i]<<" ";
// }
// }


//q17
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,g;
//     cin>>n;
//     vector <int> v;
//     for(int i=0;i<n;i++){
//         cin>>g;
//         v.push_back(g);
//     }

//     int ma= *max_element(v.begin(),v.end());
//     int mi= *min_element(v.begin(),v.end());

//    auto min_idx= find( v.begin(),v.end(),mi) -v.begin();
//    auto max_idx = find(v.begin(),v.end(),ma) -v.begin();

//    for(int i=min_idx;i<max_idx;i++){
//     cout<<v[i]<<" ";
//    }
//    for(int i=0;i<min_idx;i++){
//     cout<<v[i]<<" ";
//    }
//    for(int i=max_idx;i<n;i++){
//     cout<<v[i]<<" ";
//    }
// }

//q18
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int m,n;
//     cin>>m>>n;
//     int arr[m],vec[n];
//     for(int i=0;i<m;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cin>>vec[i];
//     }

//     for(int i=0;i<n;i++){
//         int yay=0;
//         for(int j=0;j<m;j++){
//             if(vec[i]<arr[j]){
//                 yay++;
//             }
//         }
//         cout<<yay<<" ";
//     }
// }

//q19
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,k;
//     cin>>n>>k;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==k){
//                 cout<<arr[i]<<" "<<arr[j]<<endl;
//             }
//         }
//     }
// }

//q20   ---------------- dont use functions name as variable names
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<n;i++){
//         int m=0;
//         for(int j=i+1;j<n;j++){
//             if(arr[i]<arr[j]){
//                 m= max(arr[j],m);
//             }
            
//         }
//         cout<<m<<" ";
//     }
// }

//q21  sliding window approach {max profit}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,prof=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            prof = max(prof,arr[i]-arr[j]);
        }
    }
    cout<<prof;
}
