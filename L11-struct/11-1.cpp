#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int main(){
    struct member{
        bool married;
        string name;
        int age;
        float height;
        char id[10];
    };
    int amount,i;
    char temp;
    cout<<"How many member do you want to input?";
    cin>>amount;
    member list[amount];
    cout<<"making struct successfully"<<endl;
    for(i=0;i<amount;i++){
        cout<<"#"<<i<<endl;
        cout<<" What does #"<<i<<" member's name"<<endl;
        cin>>list[i].name;
        cout<<" What does #"<<i<<" member's age"<<endl;
        cin>>list[i].age;
        cout<<" What does #"<<i<<" member's height"<<endl;
        cin>>list[i].height;
        cout<<" What does #"<<i<<" member's id(10char)"<<endl;
        cin>>list[i].id;
        cout<<" if #"<<i<<" member is married (y/n)"<<endl;
        cin>>temp;
        if(temp=='y') list[i].married=true;
        else list[i].married=false;
    }
    system("cls");
    cout<<"Input successfully"<<endl;
    cout<<"starting loading data"<<endl;
    for(i=0;i<amount;i++){
        cout<<"#"<<i<<endl;
        cout<<" name: "<<list[i].name<<endl;
        cout<<" age: "<<list[i].age<<endl;
        cout<<" height: "<<list[i].height<<endl;
        cout<<" id: "<<list[i].id<<endl;
        cout<<" married: "<<list[i].married<<endl;
    }
    cout<<endl;
    return 0;
}