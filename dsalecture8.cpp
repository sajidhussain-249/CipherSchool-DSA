#include <iostream>
using namespace std;
int main(){
    int a[4];//array
    cout<<"Give 5 integers as input ";
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"The 5 given inputs are: "<<endl;
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}