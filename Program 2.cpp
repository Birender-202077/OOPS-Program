//Write a program to make the use of inline function.
#include <iostream>
using namespace std;
class operation
{
private:
	int a,b,add,sub,mul;
	float div; 

public:
	void get();
	void sum();
	void difference();
	void product();
	void division();
	
};

inline void operation :: get()
{
	cout<<"Enter first value:";
	cin>>a;
	cout<<"Enter second value:";
	cin>>b;
}

inline void operation :: sum()
{
	add=a+b;
	cout<<"Addition of two numbers is "<<add<<"\n\n";
}
inline void operation ::difference()
{
	sub=a-b;
	cout<<"Difference of twoo numbers is " <<sub<<"\n\n";
}
inline void operation :: product()
{
	mul=a*b;
	cout<<"Product of two numbers is "<<mul<<"\n\n";
}
inline void operation :: division()
{
	div=a/b;
	cout<<"Division of two numbers is " <<div<<"\n\n";
}
int main(){
	operation s;
	s.get();
	s.sum();
	s.difference();
	s.product();
	s.division();
	return 0;
}
