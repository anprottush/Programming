#include<iostream>
#include<iomanip>
//#include<stdlib.h>
#include<windows.h>
using namespace std;

class MathPuzzles
{
private:
    int i, j, x, key;

public:
    void puzzle();

    void puzzle_result1();
    void puzzle_result2();
    void puzzle_result3();
    void clear_screen();

    void puzzle1();
    void set_data_puzzle1();

    void puzzle2();
    void set_data_puzzle2();

    void puzzle3();
    void set_data_puzzle3();

    void puzzle4();
    void set_data_puzzle4();

    void puzzle5();
    void set_data_puzzle5();

    void puzzle6();
    void set_data_puzzle6();

    void puzzle7();
    void set_data_puzzle7();

    void puzzle8();
    void set_data_puzzle8();
};


void MathPuzzles::puzzle()
{
    int key2;
    int key3;
    cout<<"===================================================================================="<<endl;
    cout<<setw(60)<<"### WELCOME TO MATH PUZZLE GAME ###"<<endl;
    cout<<setw(59)<<"## Developed by Md.Abuhorayra ##"<<endl;
    cout<<"====================================================================================";

    cout<<endl;

    cout<<setw(58)<<"=> PRESS 1 TO PLAY AUTOMATIC <="<<endl;
    cout<<setw(58)<<"=> PRESS 2 TO PLAY MANUALLY  <="<<endl;
    cout<<endl;
    cout<<setw(49)<<"PLEASE PRESS: ";
    cin>>key2;
    cout<<endl;
    if(key2==1)
    {
        cout<<"=================================================================================";
        puzzle1();
        set_data_puzzle1();

        puzzle2();
        set_data_puzzle2();

        puzzle3();
        set_data_puzzle3();

        puzzle4();
        set_data_puzzle4();

        puzzle5();
        set_data_puzzle5();

        puzzle6();
        set_data_puzzle6();

        puzzle7();
        set_data_puzzle7();

        puzzle8();
        set_data_puzzle8();
    }
    else if(key2==2)
    {
        while(key3!=0)
        {
            cout<<endl;
            cout<<setw(52)<<"For PUZZLE-1 Press: 1"<<endl;
            cout<<setw(52)<<"For PUZZLE-2 Press: 2"<<endl;
            cout<<setw(52)<<"For PUZZLE-3 Press: 3"<<endl;
            cout<<setw(52)<<"For PUZZLE-4 Press: 4"<<endl;
            cout<<setw(52)<<"For PUZZLE-5 Press: 5"<<endl;
            cout<<setw(52)<<"For PUZZLE-6 Press: 6"<<endl;
            cout<<setw(52)<<"For PUZZLE-7 Press: 7"<<endl;
            cout<<setw(52)<<"For PUZZLE-8 Press: 8"<<endl;
            cout<<setw(48)<<"Press '0' to End"<<endl;
            cout<<endl;
            cout<<setw(49)<<"PLEASE PRESS: ";
            cin>>key3;
            cout<<endl;
            if(key3==1)
            {
                cout<<"===========================================================================";
                clear_screen();
                puzzle1();
                set_data_puzzle1();
            }
            else if(key3==2)
            {
                cout<<"============================================================================";
                clear_screen();
                puzzle2();
                set_data_puzzle2();
            }
            else if(key3==3)
            {
                cout<<"=============================================================================";
                clear_screen();
                puzzle3();
                set_data_puzzle3();
            }
            else if(key3==4)
            {
                cout<<"==============================================================================";
                clear_screen();
                puzzle4();
                set_data_puzzle4();
            }
            else if(key3==5)
            {
                cout<<"==============================================================================";
                clear_screen();
                puzzle5();
                set_data_puzzle5();
            }
            else if(key3==6)
            {
                cout<<"==============================================================================";
                clear_screen();
                puzzle6();
                set_data_puzzle6();
            }
            else if(key3==7)
            {
                cout<<"==============================================================================";
                clear_screen();
                puzzle7();
                set_data_puzzle7();
            }
            else if(key3==8)
            {
                cout<<"==============================================================================";
                clear_screen();
                puzzle8();
                set_data_puzzle8();
            }
        }
    }

}

void MathPuzzles::puzzle_result1()
{
    cout<<setw(50)<<"PRESS YOUR ANSWER: ";
    cin>>x;
}

void MathPuzzles::puzzle_result2()
{
    cout<<setw(43)<<"YES!"<<endl;
    cout<<endl;
    cout<<setw(53)<<"### PUZZLE COMPLETE ###";
    cout<<endl;
}

void MathPuzzles::puzzle_result3()
{
    cout<<setw(44)<<"WRONG!"<<endl;
}

void MathPuzzles::clear_screen()
{
        Sleep(3000);
        system("cls");
        cout<<"=======================================================================================================";
        cout<<setw(60)<<"### WELCOME TO MATH PUZZLE GAME ###"<<endl;
        cout<<setw(59)<<"## Developed by Md.Abuhorayra ##"<<endl;
        cout<<"=======================================================================================================";
}

void MathPuzzles::puzzle1()
{
    cout<<endl;
    cout<<setw(50)<<"### PUZZLE-1 ###"<<endl;
    cout<<endl;
    cout<<setw(34)<<"IF,"<<endl;
    cout<<setw(40)<<"1 "<<","<<" 1 = 2"<<endl;
    cout<<setw(40)<<"2 "<<","<<" 2 = 4"<<endl;
    cout<<setw(40)<<"3 "<<","<<" 3 = 6"<<endl;
    cout<<setw(40)<<"4 "<<","<<" 4 = 8"<<endl;
    cout<<setw(36)<<"THEN,"<<endl;
    cout<<setw(40)<<"5 "<<","<<" 5 = ?"<<endl;
    cout<<endl;
}

void MathPuzzles::set_data_puzzle1()
{
    puzzle_result1();
    if(x==10)
    {
        puzzle_result2();
    }
    else
    {
        puzzle_result3();
        while(x!=10)
        {
            puzzle_result1();
            if(x==10)
            {
                puzzle_result2();
            }
            else
            {
                puzzle_result3();
            }
        }
    }
    cout<<endl;
    cout<<"=======================================================================================================";
    clear_screen();
}

void MathPuzzles::puzzle2()
{
    cout<<endl;
    cout<<setw(50)<<"### PUZZLE-2 ###"<<endl;
    cout<<endl;
    cout<<setw(34)<<"IF,"<<endl;
    cout<<setw(40)<<"1 "<<","<<" 1 = 1"<<endl;
    cout<<setw(40)<<"2 "<<","<<" 2 = 4"<<endl;
    cout<<setw(40)<<"3 "<<","<<" 3 = 9"<<endl;
    cout<<setw(40)<<"4 "<<","<<" 4 = 16"<<endl;
    cout<<setw(36)<<"THEN,"<<endl;
    cout<<setw(40)<<"5 "<<","<<" 5 = ?"<<endl;
    cout<<endl;
}

void MathPuzzles::set_data_puzzle2()
{
    puzzle_result1();
    if(x==25)
    {
        puzzle_result2();
    }
    else
    {
        puzzle_result3();
        while(x!=25)
        {
            puzzle_result1();
            if(x==25)
            {
                puzzle_result2();
            }
            else
            {
                puzzle_result3();
            }
        }
    }
    cout<<endl;
    cout<<"=======================================================================================================";
    clear_screen();
}

void MathPuzzles::puzzle3()
{
    cout<<endl;
    cout<<setw(50)<<"### PUZZLE-3 ###"<<endl;
    cout<<endl;
    cout<<setw(34)<<"IF,"<<endl;
    cout<<setw(45)<<"8 = 56"<<endl;
    cout<<setw(45)<<"7 = 42"<<endl;
    cout<<setw(45)<<"6 = 30"<<endl;
    cout<<setw(45)<<"5 = 20"<<endl;
    cout<<setw(36)<<"THEN,"<<endl;
    cout<<setw(44)<<"3 = ?"<<endl;
    cout<<endl;
}

void MathPuzzles::set_data_puzzle3()
{
    puzzle_result1();
    if(x==6)
    {
        puzzle_result2();
    }
    else
    {
        puzzle_result3();
        while(x!=6)
        {
            puzzle_result1();
            if(x==6)
            {
                puzzle_result2();
            }
            else
            {
                puzzle_result3();
            }
        }
    }
    cout<<endl;
    cout<<"=======================================================================================================";
    clear_screen();
}

void MathPuzzles::puzzle4()
{
    cout<<endl;
    cout<<setw(50)<<"### PUZZLE-4 ###"<<endl;
    cout<<endl;
    cout<<setw(34)<<"IF,"<<endl;
    cout<<setw(45)<<"3 = 18"<<endl;
    cout<<setw(45)<<"4 = 32"<<endl;
    cout<<setw(45)<<"5 = 50"<<endl;
    cout<<setw(45)<<"6 = 72"<<endl;
    cout<<setw(36)<<"THEN,"<<endl;
    cout<<setw(44)<<"8 = ?"<<endl;
    cout<<endl;
}

void MathPuzzles::set_data_puzzle4()
{
    puzzle_result1();
    if(x==128)
    {
        puzzle_result2();
    }
    else
    {
        puzzle_result3();
        while(x!=128)
        {
            puzzle_result1();
            if(x==128)
            {
                puzzle_result2();
            }
            else
            {
                puzzle_result3();
            }
        }
    }
    cout<<endl;
    cout<<"=======================================================================================================";
    clear_screen();
}

void MathPuzzles::puzzle5()
{
    cout<<endl;
    cout<<setw(50)<<"### PUZZLE-5 ###"<<endl;
    cout<<endl;
    cout<<setw(34)<<"IF,"<<endl;
    cout<<setw(45)<<"8     13"<<endl;
    cout<<setw(45)<<"16     6"<<endl;
    cout<<setw(45)<<"4     19"<<endl;
    cout<<setw(45)<<"22     2"<<endl;
    cout<<setw(36)<<"THEN,"<<endl;
    cout<<setw(45)<<"?     32"<<endl;
    cout<<endl;
}

void MathPuzzles::set_data_puzzle5()
{
    puzzle_result1();
    if(x==7)
    {
        puzzle_result2();
    }
    else
    {
        puzzle_result3();
        while(x!=7)
        {
            puzzle_result1();
            if(x==7)
            {
                puzzle_result2();
            }
            else
            {
                puzzle_result3();
            }
        }
    }
    cout<<endl;
    cout<<"=======================================================================================================";
    clear_screen();
}

void MathPuzzles::puzzle6()
{
    cout<<endl;
    cout<<setw(50)<<"### PUZZLE-6 ###"<<endl;
    cout<<endl;
    cout<<setw(34)<<"IF,"<<endl;
    cout<<setw(40)<<"1 "<<","<<" 1 = 21"<<endl;
    cout<<setw(40)<<"2 "<<","<<" 2 = 44"<<endl;
    cout<<setw(40)<<"3 "<<","<<" 3 = 69"<<endl;
    cout<<setw(40)<<"4 "<<","<<" 4 = 816"<<endl;
    cout<<setw(36)<<"THEN,"<<endl;
    cout<<setw(40)<<"5 "<<","<<" 5 = ?"<<endl;
    cout<<endl;
}

void MathPuzzles::set_data_puzzle6()
{
    puzzle_result1();
    if(x==1025)
    {
        puzzle_result2();
    }
    else
    {
        puzzle_result3();
        while(x!=1025)
        {
            puzzle_result1();
            if(x==1025)
            {
                puzzle_result2();
            }
            else
            {
                puzzle_result3();
            }
        }
    }
    cout<<endl;
    cout<<"=======================================================================================================";
    clear_screen();
}

void MathPuzzles::puzzle7()
{
    cout<<endl;
    cout<<setw(50)<<"### PUZZLE-7 ###"<<endl;
    cout<<endl;
    cout<<setw(34)<<"IF,"<<endl;
    cout<<setw(40)<<"11 "<<","<<" 11 = 4"<<endl;
    cout<<setw(40)<<"22 "<<","<<" 22 = 16"<<endl;
    cout<<setw(40)<<"33 "<<","<<" 33 = 36"<<endl;
    cout<<setw(40)<<"44 "<<","<<" 44 = 64"<<endl;
    cout<<setw(36)<<"THEN,"<<endl;
    cout<<setw(40)<<"55 "<<","<<" 55 = ?"<<endl;
    cout<<endl;
}

void MathPuzzles::set_data_puzzle7()
{
    puzzle_result1();
    if(x==100)
    {
        puzzle_result2();
    }
    else
    {
        puzzle_result3();
        while(x!=100)
        {
            puzzle_result1();
            if(x==100)
            {
                puzzle_result2();
            }
            else
            {
                puzzle_result3();
            }
        }
    }
    cout<<endl;
    cout<<"=======================================================================================================";
    clear_screen();
}

void MathPuzzles::puzzle8()
{
    cout<<endl;
    cout<<setw(50)<<"### PUZZLE-8 ###"<<endl;
    cout<<endl;
    cout<<setw(34)<<"IF,"<<endl;
    cout<<setw(40)<<"1 "<<","<<" 2 = 23"<<endl;
    cout<<setw(40)<<"2 "<<","<<" 3 = 65"<<endl;
    cout<<setw(40)<<"3 "<<","<<" 4 = 127"<<endl;
    cout<<setw(40)<<"4 "<<","<<" 5 = 209"<<endl;
    cout<<setw(36)<<"THEN,"<<endl;
    cout<<setw(40)<<"5 "<<","<<" 6 = ?"<<endl;
    cout<<endl;
}

void MathPuzzles::set_data_puzzle8()
{
    puzzle_result1();
    if(x==3011)
    {
        puzzle_result2();
    }
    else
    {
        puzzle_result3();
        while(x!=3011)
        {
            puzzle_result1();
            if(x==3011)
            {
                puzzle_result2();
            }
            else
            {
                puzzle_result3();
            }
        }
    }
    cout<<endl;
    cout<<"=======================================================================================================";
    clear_screen();
}



int main()
{
    MathPuzzles obj1;
    obj1.puzzle();

    cout<<endl;
    cout<<setw(51)<<"### GAME END ###"<<endl;
    cout<<setw(52)<<"## BEST OF LUCK ##"<<endl;
    cout<<"=======================================================================================================";

    return 0;
}
