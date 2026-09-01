//q23
#include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int arr[n*m];
//     for( int i=0;i<n*m;i++){
//         cin>>arr[i];
//     }

//     for(int j=0;j<n;j++){
//         int s=0,mi=arr[j*m],ma=arr[j*m];
//     for(int i=j*m;i<j*m+m;i++){
//         s=s+arr[i];
//         mi= min( mi,arr[i]);
//         ma= max(ma,arr[i]);
//     }
//     cout<<s<<" "<<ma<<" "<<mi<<" "<<endl;
// }
// }


//q24    : the matrix is stored in 1d array as you studied in 3rd sem ds index= row * no of elements + current
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int m,n;
//     cin>>m>>n;
//     int mat[m*n];
//     for(int i=0;i<m*n;i++){
//         cin>>mat[i];
//     }
//     for(int i=1;i<m-2;i++){
//         for(int j=1;j<n-2;j++){
//             cout<<mat[i*n+j]<<" ";
//         }
//         cout<<endl;
//     }
// }


//q25                                    
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,m,k;
//     cin>>n>>m>>k;
//     vector <vector<int>> v (n, vector<int>(m));

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>v[i][j];
//         }
//     }
//     for(int i=0;i<n/2;i++){
//         for(int j=0;j<k;j++){
//             swap(v[i][m-1-j],v[n-1-i][j]);
//         }
//     }
//      for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

//q26
#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>n>>m;
    vector <vector<int>> v (n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
   for (int i=0; i<n-1;i++) {
        for (int j=0; j<m-1; j++) {
            swap(v[i][j], v[i+1][j+1]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}