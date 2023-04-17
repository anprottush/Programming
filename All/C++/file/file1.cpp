#include<iostream>
#include<fstream>
using namespace std;
int main()
{

    ofstream out("shakib.txt");
    string text;
    cout<<"Enter some text: ";
    cin>>text;

    //out.open("abc.txt",ios::app);
    out<<text<<endl;
    out.close();
    ifstream in("shakib.txt");
    string str;
    cout<<"Data read from file: \n";
    while(getline(in,str))
    {
        cout<<str;
    }
    in.close();
    return 0;


}
