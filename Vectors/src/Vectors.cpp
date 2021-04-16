#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<string> strings;

	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");


	cout << strings[1] << endl;

	cout << strings.size()<< endl;


	//iterate through vector


	for(int i=0; i < strings.size(); i++){
		cout << strings[i] << endl;
	}

	vector<string>::iterator it = strings.begin();

	it++;

	cout << *it << endl;


	for (vector<string>::iterator it = strings.begin(); it!= strings.end(); it++) {
		cout << *it << endl;
	}

	vector<string>::iterator iit = strings.begin();

	iit +=2;

	cout<< *iit<< endl;

	return 0;
}
