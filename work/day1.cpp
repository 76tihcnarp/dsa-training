#include <iostream>
using namespace std;

// int main(){
//     int x=0,y=0;
//     int op=0;
//     cout<<"enter"<<endl;
//     cin>>x>>y;
//     while(x!=y){
//         if(y>x){
//             x+=1;
//         }
//         else{       
//             y+=2;      
//         }
//          op+=1;
//     }
//     cout<<"op:"<<op;
// }

// int main(){
//     int x,y;
//     cin>>x>>y;   if y big do y-x; steps
//     if(x==y){}   if x big add +2 in difference of x-y /2;
// }

int main(){
    int x,y,gig=1;
    cin>>x>>y;
    while(x<y){
        if(gig%2!=0){
            gig+=1;
            x++;
        }
        else{
            gig+=1;
            x+=2;
        }
        if(x==y){ cout<<"yes";
        return 0;}
    }
    cout<<"no";
}