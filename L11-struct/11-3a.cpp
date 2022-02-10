// Author:seansie
// Time :2022 02 07
// DISCRIPTION
// 本次練習將struct以參數形式傳遞到函數中的方法
// 使用point資料型態的指標取址
// 練習->符號
// 符號意義  (指向結構的位址)->(該結構的成員)
//////////////////////////////////////////////////
#include<iostream>
using namespace std;
struct point{
        int x,y;
    };
void getPoint(point*); //對point結構進行取址 
int main(){
    point get;
    getPoint(&get);
    cout<<"x="<<get.x<<endl<<"y="<<get.y<<endl;
    cout<<endl;
}
////////////////////////////////////////////////////////////////////////////////
//->符號介紹
void getPoint(point *Point){
    cout<<"請輸入x座標";
    cin>>Point->x;
    cout<<"請輸入y座標";
    cin>>Point->y;
}