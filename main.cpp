#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int arg,char avg[]){
	vector<string> msg = {"hello","world","start"};
	for(const auto& s:msg){
		cout<<s<<endl;
	}
	return 0;
}
