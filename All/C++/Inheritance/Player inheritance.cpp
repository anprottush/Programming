#include<iostream>
using namespace std;
class Player
{
protected:
    int mAge;
    string mName;
public:
    void playerInfo()
    {

    }
    void setInfo(string str,int age)
    {
        cout<<"Name: "<<str<<"   "<<"Age: "<<age<<endl;
    }

};
class Footballer:public Player
{
protected:
    int goalScore,scoringAvg;
public:
    void setFootballerInfo(int numOfGoal,double avgGoal)
    {
        goalScore=numOfGoal;
        scoringAvg=avgGoal;
    }
    void displayFootballerInfo()
    {
        cout<<"Scored Goal: "<<goalScore<<"   "<<"Scoring Average: "<<scoringAvg<<endl;
    }

};
class Cricketer:public Player
{
protected:
    int runScored,wicketTaken;
    double battingAvg,bowlingAvg;
public:
    void setCricketerInfo(int run,double avgRun,int wicket,double avgWicket)
    {
        runScored=run;
        wicketTaken=wicket;
        battingAvg=avgRun;
        bowlingAvg=avgWicket;
    }
    void displayCricketerInfo()
    {
        cout<<"Run Scored: "<<runScored<<"   "<<"Batting Avg: "<<battingAvg<<endl<<"Wicket Taken: "<<wicketTaken<<"  "<<"Bowling Avg: "<<bowlingAvg<<endl;
    }
};
int main()
{
    Player p1;
    p1.setInfo("John Douglas", 30);
    p1.playerInfo();
    Footballer f1;
    f1.setInfo("Chistiano Ronaldo", 29);
    f1.setFootballerInfo(21, 0.75);
    f1.displayFootballerInfo();
    Cricketer c1;
    c1.setInfo("Mahmudullah Riad",31);
    c1.setCricketerInfo(15000,40.5,320,30.4);
    c1.displayCricketerInfo();
}

