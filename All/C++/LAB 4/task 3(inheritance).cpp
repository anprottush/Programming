#include<iostream>
using namespace std;
class staff
{
protected:
    string name;
    int code;
public:
    void set_info_staff(string na,int co)
    {
        name=na;
        code=co;
    }
    void show_info_staff()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Code: "<<code<<endl;
    }
};
class teacher:public staff
{
protected:
    string subject,publication;
public:
    void set_info_teacher(string su,string pu)
    {
        subject=su;
        publication=pu;
    }
    void show_info_teacher()
    {
    show_info_staff();
        cout<<"Subject: "<<subject<<endl;
        cout<<"Publication: "<<publication<<endl;
        cout<<""<<endl;
    }
};

class officer:public staff
{
protected:
    string grade;
public:
    void set_info_officer(string gr)
    {
        grade=gr;
    }
    void show_info_officer()
    {
        show_info_staff();
        cout<<"Grade: "<<grade<<endl;
        cout<<""<<endl;
    }
};
class typist:public staff
{
protected:
    int speed;
public:
    void set_info_typist(int sp)
    {
        speed=sp;
    }
    void show_info_typist()
    {
        cout<<"Speed: "<<speed<<endl;
    }

};
class regular:public typist
{
protected:
    int wage;
public:
    void set_info_regular(int wa)
    {
        wage=wa;
    }
    void show_info_regular()
    {
        show_info_staff();
        show_info_typist();
        cout<<"Wage: $"<<wage<<endl;
        cout<<""<<endl;
    }

};

class casual:public typist
{
protected:
    int wage;
public:
    void set_info_casual(int wa)
    {
        wage=wa;
    }
    void show_info_casual()
    {
        show_info_staff();
        show_info_typist();
        cout<<"Wage: $"<<wage<<endl;
        cout<<""<<endl;
    }
};


int main()
{

    teacher t;
    cout<<"Teacher's Information: "<<endl;
    t.set_info_staff("Bale",100);
    t.set_info_teacher("Programming with C++","Tata McGraw Hill");
    t.show_info_teacher();

    officer o;
    cout<<"Officer's Information: "<<endl;
    o.set_info_staff("Cristiano Ronaldo",200);
    o.set_info_officer("Professional");
    o.show_info_officer();

    regular  r;
    cout<<"Regular typist's Information: "<<endl;
    r.set_info_staff("Benzema",300);
    r.set_info_typist(50);
    r.set_info_regular(15000);
    r.show_info_regular();

    casual c;
    cout<<"Casual typist's Information: "<<endl;
    c.set_info_staff("Kroos",400);
    c.set_info_typist(55);
    c.set_info_casual(20000);
    c.show_info_casual();

    return 0;
}
