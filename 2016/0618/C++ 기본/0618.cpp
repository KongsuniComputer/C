#include <iostream>
#include <cstring>

 
/**

//77�� (��) 
int main()
{
	std::cout << "hello\n";
	std::cout << "ù��° �������Դϴ�.";
	return 0; 
}

// 79�� (��) 
int main()
{
	int n=3;
	char c='#';
	std::cout << c << 5.5 << '-' << n << "hello" << true;
}


//79�� (Ǯ�ڵ�) 
double area(int r);

double area(int r)
{
	return 3.14*r*r;
}

int main()
{
	int n=3;
	char c='#';
	std::cout << c << 5.5 << '-' << n << "hello" << true << std::endl;
	std::cout << "n + 5 = " << n + 5 << '\n';
	std::cout << "������ " << area(n);
}

//81�� (3,Ű�Է¹ޱ�)
using namespace std;
 
int main() 
{
	cout << "�ʺ� �Է��ϼ��� >> ";
	
	int width;
    cin >> width;
	
	cout << "���̸� �Է��ϼ��� >> ";
	
    int height;
	cin >> height;
	
	int area = width*height;
	cout << "������ " << area << "\n"	; 
}

**/

//82�� (4.���������� ���Ӹ����) 
using namespace std;

int main() 
{
	cout << "���� ���� �� ������ �մϴ�. ����, ����, �� �߿��� �Է��ϼ���. " << "\n";

	char s[10];
	cout << "��� >> " ;
	cin >> s;
	
	char t[10];
	cout << "�ƶ� >> " ;
	cin >> t;
	
	if(strcmp(s,"����") != 0 && strcmp(s, "����") != 0 && strcmp(s, "��") != 0)
		cout << "�߸� �Է��ϼ̽��ϴ�. " << "\n";
	if(strcmp(t,"����") != 0 && strcmp(t, "����") != 0 && strcmp(t, "��") != 0)
		{
		 cout << "�߸� �Է��ϼ̽��ϴ�. " << "\n";
	
	return 0;	 
	}
		

	
	if(strcmp(s,"����") != 0 && strcmp(t, "����") != 0)
		cout << "�ƶ��̰� �̰���ϴ�. " << "\n";
	else if (strcmp(s,"����") != 0 && strcmp(t, "��") != 0)
		cout << "��ǰ� �̰���ϴ�. " << "\n";
	else if (strcmp(s,"����") != 0 && strcmp(t, "����") != 0)
		cout << "��ǰ� �̰���ϴ�. " << "\n";
	else if (strcmp(s,"����") != 0 && strcmp(t, "��") != 0)
		cout << "�ƶ��̰� �̰���ϴ�. " << "\n";
	else if (strcmp(s,"��") != 0 && strcmp(t, "����") != 0)
		cout << "�ƶ��̰� �̰���ϴ�. " << "\n";
	else if (strcmp(s,"��") != 0 && strcmp(t, "����") != 0)
		cout << "��ǰ� �̰���ϴ�. " << "\n";
		
	else if (strcmp(s,"��") != 0 && strcmp(t, "��") != 0) 
		cout << "�����ϴ�. " << "\n";
	else if (strcmp(s,"����") != 0 && strcmp(t, "����") != 0) 
		cout << "�����ϴ�. " << "\n";
	else if (strcmp(s,"����") != 0 && strcmp(t, "����") != 0) 
		cout << "�����ϴ�. " << "\n";
	
}
