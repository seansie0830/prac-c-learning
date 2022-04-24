
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    srand(time(NULL));
    int matrix[3][3],new_matrix[3][3],i,j;
    // generate random matrix
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matrix[i][j] =rand()%100+1;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout << matrix[i][j] <<" ";
        }
        cout << endl;
    }
    cout <<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            new_matrix[j][2-i]=matrix[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<new_matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}