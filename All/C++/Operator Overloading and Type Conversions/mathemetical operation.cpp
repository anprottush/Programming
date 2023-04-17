#include<iostream>
#include<string.h>
using namespace std;
class shape
{
    char *p;
    int len;
public:
    shape()
    {
        len=0;p=0;
    }
    shape(const char *s);
    shape(const string &s);
    ~shape()
    {
        delete p;
    }
    friend shape operator+(const string &s,const string &t);
    friend int operator<=(const string &s,const string &t);
    friend void show(const string s);
};
shape::shape(const char *s)
{
    len=strlen(s);
    p=new char[len+1];
    strcpy(p,s);
}
shape::shape(const string &s)
{
    len=s.len;
    p=new char[len+1];
    strcpy(p,s.p);
}
str operator+(const stringg &s,const stringg &t)
{
    str s1;
    s1.len=s.len+t.len;
    s1.p=new char[s1.len+1];
    strcpy(s1.p,s.p);
    strcat(s1.p,t.p);
    return s1;
}
//int operator<=(const string &s,const string &t)

