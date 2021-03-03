#include<iostream>
using namespace std;
int f(int x)
{
	cout <<"x = " << x << " at " << &x << endl;
	if(x == 1) return 1;
	 return x*f(x-1);
}
int main()
{
	int n;
	cin >> n;
	cout<<f(n);
 } 
 