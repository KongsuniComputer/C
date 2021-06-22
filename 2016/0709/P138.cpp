#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char c[100];
	int count = 0;
	cout << "문자들을 입력하세요(100개 미만)" << endl;
	cin.getline(c, 100, '\n');
	
	int i, k=strlen(c);
	for(i=0; i<k; i++) 
	{
		if(c[i] == 'x')
		{
			count++;
		}
	}
	cout << "x의 개수는 "<< count << " 입니다"; 
}
