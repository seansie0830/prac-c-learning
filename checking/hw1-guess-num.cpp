
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    srand(time(NULL));
    int ans=rand()%100+1;
    int guess,l=0,r=99;
    while(l!=r){
        cout<<"("<<l<<","<<r<<")"<<endl;
        cin >>guess;
        if(guess>r||guess<l){
            cout<<"out of the range"<<endl;
            continue;
        }
        if(guess>ans){
            r=guess-1;
        }
        else if(guess<ans){
            l=guess+1;
        }
        else{
            cout<<"Bingo!"<<endl;
            return 0;
        }
    }
    cout<<"("<<l<<","<<r<<")"<<endl;
    cout<<"GG"<<endl;
    return 0;
}