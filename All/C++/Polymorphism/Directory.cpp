#include<iostream>
using namespace std;
class Directory
{
protected:
    string personName, dateOfBirth;
public:
    void setPersonInfo(string pn, string db)
    {
        personName=pn;
        dateOfBirth=db;
    }
    virtual void displayInfo()
    {
        cout<<"Name = "<<personName<<endl;
        cout<<"DoB = "<<dateOfBirth<<endl;
    }
};
class NationalDirectory:public Directory
{
protected:
    int personAge;
    string personCity;
public:
    void setPersonAge(int age)
    {
        personAge=age;
    }
    void setPersonCity(string city)
    {
        personCity=city;
    }
    void displayInfo()
    {
        cout<<"Age = "<<personAge<<endl;
        cout<<"City = "<<personCity<<endl;

    }
};
class LocalDirectory:public Directory
{
protected:
    string personAddress;
    string personTelNo;
    string personLocalArea;
    double zipCode;
public:
    void setPersonAddress(string address)
    {
        personAddress=address;
    }
    void setPersonTelNo(string telNo)
    {
        personTelNo=telNo;
    }
    void setPersonLocalArea(string Larea)
    {
        personLocalArea=Larea;
    }
    void setPersonZipcode(double zc)
    {
        zipCode=zc;
    }
    void displayInfo()
    {
        cout<<"Address = "<<personAddress<<endl;
        cout<<"Tel = "<<personTelNo<<endl;
        cout<<"Local Area = "<<personLocalArea<<endl;
        cout<<"Zip Code = "<<zipCode<<endl;
    }
};
class Profession:public Directory
{
protected:
    string personProfession;
    string personInstitution;
    string personGrade;
    double personSalary;
public:
    void setPersonProfession(string prof)
    {
        personProfession=prof;
    }
    void setPersonInstitution(string inst)
    {
        personInstitution=inst;
    }
    void setPersonGrade(string Pgrade)
    {
        personGrade=Pgrade;
    }
    void setPersonSalary(double s)
    {
        personSalary=s;
    }
    void DisplayInfo()
    {
        cout<<"Profession = "<<personProfession<<endl;
        cout<<"Institution = "<<personInstitution<<endl;
        cout<<"Grade = "<<personGrade<<endl;
        cout<<"Salary = "<<personSalary<<endl;
    }


};
int main()
{
    Directory *person;
    Directory p;
    person=&p;
    p.setPersonInfo("S Ahmed","24/7/1968");
    person->displayInfo();

    NationalDirectory N;

    N.setPersonAge(45);
    N.setPersonCity("Dhaka");
    N.displayInfo();

    LocalDirectory L;

    L.setPersonAddress("House -3,Road 18");
    L.setPersonTelNo("017542140");
    L.setPersonLocalArea("Gulshan 2");
    L.setPersonZipcode(1211);
    L.displayInfo();

    Profession P;

    P.setPersonProfession("Lecturer");
    P.setPersonInstitution("AIUB");
    P.setPersonGrade("Band-6");
    P.setPersonSalary(50000.01);
    P.DisplayInfo();



}
