/*
Deterministic Finite Automaton (DFA) for machine M is a 5-tuple
M =(Q, A, D, s, F), where
Q = is a finite set called the states,
// here we will use 1, 2, 3, ... numerical values for each state,
// which will show as q1, q2, q3, ...
A = is a finite set called the alphabet,
// here we will use single character as an input alphabet
D:Q x A --> Q is the transition function,
// here we will use a two-dimensional table to represent function D[][]
// 0th row and column of D are not used here
// each row will represent a state from Q [integers 1, 2, 3, ...]
// each column will represent an alphabet from A [A[0], A[1], A[3], ...]
// each entry in the table will represent a state from Q [1, 2, 3, ...]
s = member of Q is the start state,
F = subset of Q is the set of accept (final) states, F[].
// here F[0] will contain the total number of states in the set
// the final states will start from array index 1
*/
/*
Public Methods to use from the class DFA
    DEFINED CONSTANT ST=100 [MAXIMUM NUMBER OF STATES AND/OR INPUT ALPHABETS]
    [YOU MAY INCREASE THE LIMIT IN DFA.h FILE]
    CONSTRUCTORS
    // WILL CREATE AN OBJECT BY TAKING 5 TUPLE AS INPUT AND PRINT
    DFA( void );
    // CREATE OBJECT BY INSERTING 5 TUPLE THROUGH THE INPUT PARAMETER
    DFA(int Q, string Alpha, int Delta[ST][ST], int Start, int Final[ST]);
    //SETTING THE 5 TUPLE INDIVIDUALLY
    void setQ(int Q);
    void setA(string Alpha);
    void setD(int Delta[ST][ST]); // MUST SET Q AND A FIRST
    void setS(int Start); // MUST SET Q FIRST
    void setF(int Final[ST]); // MUST SET Q FIRST
    //GET THE VALUES OF THE 5 TUPLE
    // RETURNS TOTAL NUMBER OF STATES
    int getQ(void);
    // RETURNS THE ARRAY INDEX OF THE SYMBOL ch IN ALPHABET SET
    int getAlphabetIndex(char ch);
    // RETURNS
    int getDeltaFunction(int q, int a){ return DeltaTable[q][a]; }
    // RETURNS THE START STATE AS INTEGER
    int getS(void);
    // RETURNS THE ARRAY INDEX OF THE State IF PRESENT IN FINAL STATE SET
    // OTHERWISE RETURNS -1
    int isFinalState(int State);
    // INPUT THE 5 TUPLE IN ORDER
    void Input5Tuple( void );
    // PRINTS THE 5 TUPLE INDIVIDUALLY
    void PrintQ( void );
    void PrintA( void );
    void PrintD( void );
    void PrintS( void );
    void PrintF( void );
    // PRINTS ALL THE 5 TUPLES AT ONCE
    void Print5Tuple(void);
    // PROCESS A GIVEN INPUT STRING Str AND OUTPUT "ACCEPT" OR "REJECT"
    void Process(string Str);
*/

#include <iostream>
#include <string>
// include DFA.h header file
// The DFA.h header file must be in the same directory as the source file
// otherwise a full path needs to be provided [e.g. "E:\\toc\\DFA.h"]
#include "DFA.h"
using namespace std;

int main( void )
{
/*  You can also set your input here. In that case open the next 3 lines and block the 4th line //DFA M;
    the following is the example-1 from Lecture-3, Slide-5. */

/*    int Q=3, s = 1, F[ST]={1, 1}, D[ST][ST]={{0, 0, 0, 0}, {0, 1, 2, 3},{0, 2, 3, 1},{0, 3, 1, 2}};
    string A = "012";

    DFA M(Q, A, D, s, F);
*/
    DFA M;
    M.Print5Tuple();
    string InputString, next;
    do{
        cout << "\nInput String to process: ";
        cin >> InputString;
        M.Process( InputString );
        cout << "\nInput another string [y/n]:";
        cin >> next;
    }while(next == "y");

}
