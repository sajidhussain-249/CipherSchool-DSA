#include <iostream>
using namespace std;
int main(){
    //while loop
    int i;
    i=1;
    while(i<101){
        cout<<i<<" ";
        i++;
    }


    //guessing the correct number
    //the user has 100 chances


    int j;
    int input;
    for(j=1;j<=101;j++){
        cout<<"------------------------------------------"<<endl;;
        cout<<"guess the number :";
        cin>>input;
        if(input==65){
            cout<<"Congrats you havae guessed the correct number ";
            break;
        }
    }
}