#include <cstring>
#include <iostream>

using namespace std;
	
int main()
{
	char c[100];
	int count = 0;
	cin.getline(c, 100, '\n');
	
	for(int i=0; i<strlen(c); i++)
		if(c[i] == 'x') count++;
		cout << count;
	
}
