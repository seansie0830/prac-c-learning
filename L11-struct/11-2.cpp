// Author:seansie
// Time :2022 02 07
// description :
// 關於結構(struct)的巢狀操作
// 宣告 name address client結構，
// 裡面有不同資料型態 ex(bool,char,int,float,string.....)
// ! 而且clinet結構裡面有其他struct(特別用紅色強調)
///////////////////////////////////////////////////////////
#include <iostream>
#include <string>
using namespace std;
int main(){
    struct name{
        string first;
        string last;
    };
    struct address{
        string city;
        string state;
        string country;
        string road;
    };
    // 巢狀結構用法
    struct client{
        name Name;
        address Address;
        int age;
        int height;
        char sex;
    };
    client cl1={{"first name", "last name"},{"Kh","N/a","TW","xinkang"},12,150,'m'};
    cout<<endl;
    cout<<endl;//for gdb edit variables 
    cout<<"cl1.sex="<<cl1.sex<<endl;
    cout<<"cl1.height="<<cl1.height<<endl;
    cout<<"cl1.age="<<cl1.age<<endl;
    cout<<"cl1.Name.first="<<cl1.Name.first<<endl;
    cout<<"cl1.Name.last="<<cl1.Name.last<<endl;
    cout<<"cl1.Address.city="<<cl1.Address.city<<endl;
    cout<<"cl1.Address.state="<<cl1.Address.state<<endl;
    cout<<"cl1.Address.country="<<cl1.Address.country<<endl;
    cout<<"cl1.Address.road="<<cl1.Address.road<<endl;
    cout<<endl;
    cout<<endl;
    return 0;
}