#include <iostream>
#include <cstring>

 
/**

//77쪽 (가) 
int main()
{
	std::cout << "hello\n";
	std::cout << "첫번째 맛보기입니다.";
	return 0; 
}

// 79쪽 (라) 
int main()
{
	int n=3;
	char c='#';
	std::cout << c << 5.5 << '-' << n << "hello" << true;
}


//79쪽 (풀코드) 
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
	std::cout << "면적은 " << area(n);
}

//81쪽 (3,키입력받기)
using namespace std;
 
int main() 
{
	cout << "너비를 입력하세요 >> ";
	
	int width;
    cin >> width;
	
	cout << "높이를 입력하세요 >> ";
	
    int height;
	cin >> height;
	
	int area = width*height;
	cout << "면적은 " << area << "\n"	; 
}

**/

//82쪽 (4.가위바위보 게임만들기) 
using namespace std;

int main() 
{
	cout << "가위 바위 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요. " << "\n";

	char s[10];
	cout << "사또 >> " ;
	cin >> s;
	
	char t[10];
	cout << "아랑 >> " ;
	cin >> t;
	
	if(strcmp(s,"가위") != 0 && strcmp(s, "바위") != 0 && strcmp(s, "보") != 0)
		cout << "잘못 입력하셨습니다. " << "\n";
	if(strcmp(t,"가위") != 0 && strcmp(t, "바위") != 0 && strcmp(t, "보") != 0)
		{
		 cout << "잘못 입력하셨습니다. " << "\n";
	
	return 0;	 
	}
		

	
	if(strcmp(s,"가위") != 0 && strcmp(t, "바위") != 0)
		cout << "아랑이가 이겼습니다. " << "\n";
	else if (strcmp(s,"가위") != 0 && strcmp(t, "보") != 0)
		cout << "사또가 이겼습니다. " << "\n";
	else if (strcmp(s,"바위") != 0 && strcmp(t, "가위") != 0)
		cout << "사또가 이겼습니다. " << "\n";
	else if (strcmp(s,"바위") != 0 && strcmp(t, "보") != 0)
		cout << "아랑이가 이겼습니다. " << "\n";
	else if (strcmp(s,"보") != 0 && strcmp(t, "가위") != 0)
		cout << "아랑이가 이겼습니다. " << "\n";
	else if (strcmp(s,"보") != 0 && strcmp(t, "바위") != 0)
		cout << "사또가 이겼습니다. " << "\n";
		
	else if (strcmp(s,"보") != 0 && strcmp(t, "보") != 0) 
		cout << "비겼습니다. " << "\n";
	else if (strcmp(s,"바위") != 0 && strcmp(t, "바위") != 0) 
		cout << "비겼습니다. " << "\n";
	else if (strcmp(s,"가위") != 0 && strcmp(t, "가위") != 0) 
		cout << "비겼습니다. " << "\n";
	
}
