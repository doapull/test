//#include<iostream>
//#include<string>
#include<stdlib.h>
#include<stdio.h>
//using namespace std;

struct A
{
//public:
	A(int a):a(a){};

	virtual void add()
	{
		printf("aaaaaaaaaaaaaa\n");
		//cout << "AAAAAAAAAAAAA" << endl;
	}
	int a;
};


struct B:public A
{
//public:
	B(int b):A(b){};
	void add()
	{
		printf("BBBBBBBBBBBBBBBBBBBBBB\n");
		//cout << "BBBBBBBBBBBBBBBBBBBB"<< endl;
	}
};

int main()
{
	B b(5);
	A *aa = &b;

	aa->add();

	
	return 0;

}


