#include <iostream>
using namespace std;

class Rectangle {
	public:
		int width;
		int height;
		int s();
};

int Rectangle::s() {
	return width*height;
}

int main(){
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "�簢���� ������ " << rect.s() << " �Դϴ�";
}
