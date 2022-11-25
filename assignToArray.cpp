#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Object{
	public:
		int a = 9;
		std::string st = "HelloWorld";
		// Default constructor is given by the compiler
};
string* stringTokenizer(string st, char delimeter = ' '){ // Returning an address of array
	st.push_back(delimeter);
	static string a[100]{};

	string getToken = "";
	int found = -1;
	for(int i = 0; i<(int)st.length();i++){
		if(st[i] == delimeter){
			if(getToken != ""){ // flush getToken to array
				found++;
				a[found] = getToken;
				getToken = "";
			}
			continue;
		}
		getToken.push_back(st[i]);
	}
	return a;
}


int main () {
	Object O[7]{};
	string overall; // Will be passed to tokenizer

	int getI;
	string getS;
	// Read from file and assign value to each objects

	fstream myfile("example.txt");
	if(myfile.is_open()){
		while( getline (myfile,overall)){

		}
		myfile.close();
	} else {
		return -1; //Fail
	}
	string* ptr; //pointer to hold address
	string i;
	ptr = stringTokenizer("  Hello World 123   huhu  "); //address of a
	cout<<ptr[3];


}
