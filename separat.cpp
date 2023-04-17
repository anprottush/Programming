#include <iostream>
using namespace std;

int anybasetodecimal (int number,int base);
int main()
{

      int number,base;

      cout<<"Type number and base"<<endl;
      cin>>number;
      cin>>base;
  cout<<"decimal form of"<<number<<" is "<<anybasetodecimal(number,base);
  return 0;
}
    int anybasetodecimal(int number,int base)
    {
    int multiplier=1, result=0;
    	while(number>0)
	{
		result=result+number%10*multiplier;
		multiplier=multiplier*base;
		number=number/10;
	}
return result ;
}



