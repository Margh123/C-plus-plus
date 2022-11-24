#include <iostream>
using namespace std;

// Empty rectangle
int main(int argc, char* argv[])
{
	//Rectangle's sizes
	int length = 15;
	int height = 9;

	for(int h = 1; h<=height; h++){ // Each rows
		for(int l = 1; l<=length; l++){
				if (h==1 || h==height){
				cout<<'*';}
				else{
					if(l==1||l==length){
						cout<<'*';
					}
					else{
						cout<<' ';
					}
				}
				if(l==length){
					if(h==height){
						break;
						}
						cout<<'\n';
				}
		}
	}

}

