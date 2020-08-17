#include<iostream>
using namespace std;
class Complex
{
	private:
		int a,b;
	public:
	void setData(int x,int y)
	{
		a=x;
		b=y;
	}

	void showData()
	{
		cout<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
	}

	Complex add(Complex c)
	{
		Complex temp;
		temp.a=a+c.a; //"c.a" is value of "a" of object "c2-->object passed" & "a" is value of "a" in object "c1-->calling object"
		temp.b=b+c.b;
		return temp;
	}
};

int main()
{
	system("clear");
	Complex c1,c2,c3;
	c1.setData(3,4);
	c2.setData(5,6);
	c3=c1.add(c2); // c1 calls "add" function and c2 was passed as argument and data returned by add function is assigned to c3
	c3.showData();
	getchar();
}
