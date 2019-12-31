#include<iostream>
using namespace std;
double a;
class Circle
{
	private: double r;
	public:	
			Circle();
			Circle(double a);
			void show();
};
int main()
{
 	Circle c1,c2(2.0);
	c1.show();
	c2.show();
	return 0;	
}
Circle::Circle(double a)
{
	r=a;	
}
Circle::Circle()
{
	r=1;
}

void Circle::show()
{
	cout<<r*r*3.14<<endl;
} 

/////
//Ô²Ö±¾¶ 


