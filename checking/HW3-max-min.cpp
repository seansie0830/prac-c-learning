
#include <iostream>
#include <ctime>
#include <cstdlib>
#include<algorithm>
using namespace std;

int find_range(int[], int);
int main() {

	srand(time(0));

	int A[10];
	for (int i = 0; i < 10; i++) {
		A[i] = rand() % 100;
		cout << A[i] << " ";
	}
	cout << endl;

	cout << find_range(A, 10) << endl;

	return 0;
}

int find_range(int A[], int size) {
    int i ,max_num=INT_MIN ,min_num=INT_MAX;
    for(i=0;i<size;i++){
        max_num=max(max_num,A[i]);
        min_num=min(min_num,A[i]);
    }
	// your work here: calculate max - min.
	return max_num-min_num; // remember to return the correct number

}
