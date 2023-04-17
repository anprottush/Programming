#include<iostream>
#include<cstring>

using namespace std;
class books
{
    char *str,*str1,*pub;
    int price,stock_p,ab,cd,me;
public:
    books(char *s,char *t,int p,char *q,int sto)
    {
        int length=strlen(s);
        str=new char[length+1];
        strcpy(str,s);
        length=strlen(t);
        str1=new char[length+1];
        strcpy(str1,t);
        length=strlen(q);
        pub=new char[length+1];
        strcpy(pub,q);
        price=p;
        stock_p=sto;
    }
    ~books()
    {
        delete[]str;
        delete[]str1;
        delete[]pub;
    }
    int search_books(char *g,char *p)
    {
        int length=strlen(g);
        int c=0;
        for(int i=0; g[i]!='\0'; i++)
        {
            if(str[i]==g[i]||str[i]==g[i]+32||str[i]==g[i]-32)
            {
                c++;

               }
        }
        int length1=strlen(p);
        int c1=0,i;
      for(i=0; p[i]!='\0'; i++)
        {

            if(str1[i]==p[i]||str1[i]==p[i]+32||str1[i]==p[i]-32)
            {
                c1++;
            }

            }

        if(length==c&&length1==c1)
        {
            cout<< "The requested book is available"<<endl;
            display();
            return 1;
        }
        else
        {
            cout<<  "The requested book is not available"<<endl;
        }
    }
    void display()
    {
        cout<< "Name is:"<<str<<endl;
        cout<< "Author name is:"<<str1<<endl;
        cout<< "Price of the book is: $"<<price<<endl;
        cout<< "The name of the publisher:"<<pub<<endl;
        cout<< "The stock position of the book is currently at no. "<<stock_p<<endl;
        setvalue();
    }
    void setvalue()
    {
        ab=20;
    }
    friend void requested_c(books b);
};
void requested_c(books b)
{
    int me;
    cout<< "The number of copies required:";
    cin>>me;
    if(me<=b.ab)
    {
        cout<< "Requested copies are available"<<endl;
        cout<< "Total cost is:"<<me*b.price<<endl;
    }
    else
    {
        cout<< "Requested copies are not in stock"<<endl;
    }
}
int main()
{
    books ob1("Aynabaji","Noor",450,"Annaprokash",5);
    char *e,*f;
    e=new char [100];
    f=new char[100];
    cout<< "Input the name of the title customer wants:";
    cin.get(e,100);
    cin.ignore();
    cout<< "Input the name of the author:";
    cin.get(f,100);
    int ans=ob1.search_books(e,f);
    if(ans==1)
    {
        ob1.setvalue();
        requested_c(ob1);
    }
    delete[]e;
    delete[]f;
    return 0;
}
