
#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

string purify(string);
bool isPalindrome(string, unsigned int);

string purify(string in) {
	int i;
	string out ;
	for(i=0;i<in.length();i++) {
		if(isalpha(in[i])){
			out=out+in[i];
		}
	}
	for(i=0;i<out.length();i++) {
		out[i]=tolower(out[i]);
	}
	// your work here: remove all non-alphabet symbols, for example, "." and " ".
	//* passed
	return out;
}

bool isPalindrome(string in, unsigned int i) {

	// your work here: check if the input string is a palindrome.
	string temp;
	//cout<<"length"<<in.length()<<endl;
	if(in.length()==1) return true;
	if(in[0]==in[in.length()-1]){
		temp=in;
		temp.erase(0,1);
		temp.erase(temp.length()-1,1);
		if(temp.length()==2) return true;
		return isPalindrome(temp,0);
	} 
	return false;

}

bool isPalindrome(string in) {

	string t = purify(in);
	cout<<t<<endl;
	return isPalindrome(t, 0);

}

int main() {

	string test_case1 = "www.csie.ntu.edu.tw";
	cout << isPalindrome(test_case1) << endl; // Answer: 0

	string test_case2 = "anna";
	cout << isPalindrome(test_case2) << endl; // Answer: 1

	string test_case3 = "emma";
	cout << isPalindrome(test_case3) << endl; // Answer: 0

	string test_case4 = "Sir, I demand, I am a maid named Iris.";
	cout << isPalindrome(test_case4) << endl; // Answer: 1

	return 0;
}
