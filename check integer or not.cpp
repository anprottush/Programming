#include <bits/stdc++.h>
#include <string.h>
using namespace std;
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
int val(char c)
{
    if (c >= '0' && c <= '9')
        return (int)c - '0';
    else
        return (int)c - 'A' + 10;
}
int toDeci(char *str, int base)
{
    int len = strlen(str);
    int power = 1; // Initialize power of base
    int num = 0;  // Initialize result
    int i;

    // Decimal equivalent is str[len-1]*1 +
    // str[len-1]*base + str[len-1]*(base^2) + ...
    for (i = len - 1; i >= 0; i--)
    {
        // A digit in input number must be
        // less than number's base
        if (val(str[i]) >= base)
        {
           printf("Invalid Number");
           return 1;
        }

        num += val(str[i]) * power;
        power = power * base;
    }

    return num;
}
int main()
{
      int number,base;
      char str[100];
      cout<<"Type number and base"<<endl;
      cin>>number;
      cin>>base;
      gets(str);
      cout<<"decimal form of"<<number<<" is "<<anybasetodecimal(number,base);
      printf("Decimal equivalent of %s in base %d is  %d", str, base, toDeci(str, base));
}
