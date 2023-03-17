//private : 클래스 외부에서 접근불가.
//protected : 클래스 외부에서 접근불가. 단, 상속된 클래스에서는 접근가능.

//상속도 public, private, protected의 세 종류가 있다.

#include<iostream>
using namespace std;

class Base
{
	int num1;
protected:
	int num2;
public:
	int num3;

	Base():num1(1),num2(2),num3(3){}
};

class Derived:protected Base{}; //protected 이상의 멤버를 protected 멤버로 한다. 따라서 클래스 외부에서의 접근이 불가능해진다.

int main()
{
	Derived drv;
	//cout<<drv.num3<<endl;	//drv의 num3가 protected 멤버로 되었기 때문에 main에서 접근이 불가능하다.
	return 0;
}