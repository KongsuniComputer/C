#include <iostream>
using namespace std;

class Circle
{
	public:
		int radius;
		Circle();
		Circle(int r);
		Circle(int s1, int s2);
		double getArea();
	
};

Circle::Circle(){
	radius = 1;
	cout << "������ " << radius << " �� ����" << endl;
}

Circle::Circle(int r){
	radius = r;
	cout << "������ " << radius << " �� ����" << endl;
} 

Circle::Circle(int s1, int s2){
	radius = s1, s2;
	cout << "������ " << radius << " �� ����" << endl;
}

double Circle::getArea(){
	return 3.14*radius*radius;
}

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;
	
	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl; 
	
	Circle plate(5,5);
	area = plate.getArea();
	cout << "plate ������ " << area << endl; 
}
