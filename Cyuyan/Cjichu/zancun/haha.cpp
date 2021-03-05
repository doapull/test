#include<iostream>
#include<string>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

class A
{
	public:
		A(int a):b(a){};
		int b;
/*
		A& operator=(A &c)
		{
			b = c.b;
			return *this;
		}

*/
		bool operator==(const A &p2)const
		{
			if (this->b == p2.b)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

			
			bool operator<( const A &f)const
			{
				if(b < f.b)
					return true;
				if(b > f.b)
					return false;

				return false;

			}
			
			/*
			   A &operator =(A &c)
			   {
			   b = c.b;
			   return *this;	
			   }
			   */
		
			
			
			void app(int o)
			{
				this->b = o * b;
				cout << o << endl;
			}
		};

		int add(A);
	
		int main()
		{
			A a(5);
			A c(6);

			a.app(2);

			cout << a.b  <<"     "<<endl;;

			return 0;
		}



		void add(A *b)
		{

			*B = 7;

		}


int a,b;

int *p = &a;

p = &b;




int add(int *p);

p = a;

int p ;
p = a;

p - >  &a;


int a = 8;

add(&a);








