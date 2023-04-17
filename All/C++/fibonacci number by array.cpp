#include<iostream>
using namespace std;
int main ()
{
 int Fibonacci[100], i,s;
 cin>>s;
Fibonacci[0] = 0; // by definition
Fibonacci[1] = 1; // ditto
for ( i = 2; i < s; i++ )
	Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];
for ( i = 0; i < s; i++ )
	cout<< "Fibonacci["<<i<<"]="<<Fibonacci[i]<<endl;
return 0;
}

