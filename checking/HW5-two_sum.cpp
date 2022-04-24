
#include <iostream>
#include <ctime>
#include <cstdlib>
 
using namespace std;
 
int* array_gen(int, int, int);
int* two_sum(int*, int);
void display(int*, int);
void display(int* A, int size) {
	for (int i = 0; i < size; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
}

int* two_sum(int* A, int size) {
    int i,j;
    int* out=new int[2];
    for( i = 0; i < size; i++){
        for( j = 0; j < i; j++){
            if(A[i]+A[j] ==0) {
                out[0]=A[i];
                out[1]=A[j];
                return out;
            }
        }
    }
	// your work here
	return 0;
}

int* array_gen(int low, int high, int size) {
	int* arr = new int[size];
	int N = high - low + 1;
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % N + low;
	}
	return arr;
}

int main() {
	srand(time(0));
	int* test_array = array_gen(-10, 10, 10);
	display(test_array, 10);
	int* ans = two_sum(test_array, 10);
	if (ans == 0) {
		cout << "Cannot find any pair." << endl;
	} else {
		display(ans, 2);	
	}
	return 0;
}