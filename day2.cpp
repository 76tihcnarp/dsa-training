#include <bits/stdc++.h>
using namespace std;

// int main(){

//     int n;
//     cout<<"enter n"<<endl;
//     cin>>n;

//     vector<int> v1;
//     vector<int> v2;
//     vector<int> v3;
//     int pop;

//     cout<<"enter for array1:"<<endl;

//     for(int i=0;i<n;i++){
//         cin>>pop;
//         v1.push_back(pop);
//     }

//     cout<<"enter for array2:"<<endl;

//     for(int i=0;i<n;i++){
//         cin>>pop;
//         v2.push_back(pop);
//     }

//     v3.insert(v3.end(), v1.begin(), v1.end());

//     v3.insert(v3.end(), v2.begin(), v2.end());

//     sort(v3.begin(), v3.end());

//    for(int i=0;i<2*n;i++){
//        cout<<v3[i]<<" "<<endl;
//     }

//     cout<<v3[n]+v3[n-1];

//     }

// int main(){
//     int n=4;
//     vector<int> v1;
//     vector <int> v2 = {23,45,6,7};
//     int pop;

//     cout<<"enter for array1:"<<endl;

//     for(int i=0;i<n;i++){
//         cin>>pop;
//         v1.push_back(pop);
//     }
//     int sum = accumulate(v1.begin(), v1.end(), 0);

//     cout << sum << endl; 
//     return 0;
// }

int main(){
    int n;
    cout<<"enter n"<<endl;
    vector <int> v1 (n);
    int g,pop;
    cout<<"enter g:"<<endl;
    cin>>g;
    
    for(int i=0;i<n;i++){
        cin>>pop;
        v1.push_back(pop);
     }
    
    for(int i=0; i<n;i=i+2*g){
        for(int j=i;j<i+g;j++){
            swap(v1[i],v1[i+g]);
        }
    }
   }