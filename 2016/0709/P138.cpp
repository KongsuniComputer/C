#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char c[100];
	int count = 0;
	cout << "���ڵ��� �Է��ϼ���(100�� �̸�)" << endl;
	cin.getline(c, 100, '\n');
	
	int i, k=strlen(c);
	for(i=0; i<k; i++) 
	{
		if(c[i] == 'x')
		{
			count++;
		}
	}
	cout << "x�� ������ "<< count << " �Դϴ�"; 
}
