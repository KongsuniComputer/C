#include <iostream>
#include <string>
using namespace std;

int main(){
	string text;
	cout << "아래에 한줄로 입혁하세요. (Exit를 입력하면 종료됩니다.)" << endl; 
	while(true) {
		cout << ">>";
		getline(cin, text, '\n');
		if(text == "exit")
		break;
	int size = text.length();
	int n = size/2;
	
	for(int i=0; i<n; i++)
	{
		char tmp = text[i];
		text[i] = text[size-i-1];
		text[size-i-1] = tmp;
		
	}
	
	cout << text << endl;

	

}

}
