//private : Ŭ���� �ܺο��� ���ٺҰ�.
//protected : Ŭ���� �ܺο��� ���ٺҰ�. ��, ��ӵ� Ŭ���������� ���ٰ���.

//��ӵ� public, private, protected�� �� ������ �ִ�.

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

class Derived:protected Base{}; //protected �̻��� ����� protected ����� �Ѵ�. ���� Ŭ���� �ܺο����� ������ �Ұ���������.

int main()
{
	Derived drv;
	//cout<<drv.num3<<endl;	//drv�� num3�� protected ����� �Ǿ��� ������ main���� ������ �Ұ����ϴ�.
	return 0;
}