// Author:seansie
// Time :2022 02 07
// DISCRIPTION
// �����m�߱Nstruct�H�ѼƧΦ��ǻ����Ƥ�����k
// �ϥ�point��ƫ��A�����Ш��}
// �m��->�Ÿ�
// �Ÿ��N�q  (���V���c����})->(�ӵ��c������)
//////////////////////////////////////////////////
#include<iostream>
using namespace std;
struct point{
        int x,y;
    };
void getPoint(point*); //��point���c�i����} 
int main(){
    point get;
    getPoint(&get);
    cout<<"x="<<get.x<<endl<<"y="<<get.y<<endl;
    cout<<endl;
}
////////////////////////////////////////////////////////////////////////////////
//->�Ÿ�����
void getPoint(point *Point){
    cout<<"�п�Jx�y��";
    cin>>Point->x;
    cout<<"�п�Jy�y��";
    cin>>Point->y;
}