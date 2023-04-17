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
using namespace std;
// ST is the maximum number of States
#define ST 100

class DFA{
    int Q, StartState, FinalStates[ST], DeltaTable[ST][ST], nA;
    string Alphabet;
    void InputQ( void ){
        cout << "\nInput Total Number of states: ";
        cin >> Q;
        PrintQ();
    }
    void InputA( void ){
        cout << "\nInput Alphabet [type without space]: ";
        cin >> Alphabet;
        nA = Alphabet.length();
    }
    void InputD( void ){
        if(Q == 0){
            cout << "\nERROR: Set of States are not defined.\n\n";
            InputQ();
        }
        if(nA == 0){
            cout << "\nERROR: Input Alphabet are not defined.\n\n";
            InputA();
        }
        cout << "\nFor Delta Transition Table, Input the value of the following function values : \n\n";
        for(int i=1; i<=Q; i++){
            for(int j=1; j<=nA; j++){
                cout << "D(q" << i << ", " << Alphabet[j-1] << ") = ";
                cin >> DeltaTable[i][j];
            }
            cout << endl;
        }
    }
    void InputS( void ){
        cout << "\nInput Start State: ";
        cin >> StartState;
    }
    void InputF( void ){
        cout << "\nInput Total Number of Final States: ";
        cin >> FinalStates[0];
        cout << "\nInput the Final States [separated by space or enter]: ";
        for(int i=1; i<=FinalStates[0]; i++)
            cin >> FinalStates[i];
    }

public:
    DFA( void ){
        Input5Tuple();
    }
    DFA(int Q, string Alpha, int Delta[ST][ST], int Start, int Final[ST]){
        this->Q = nA = 0;
        setQ( Q );
        setA( Alpha );
        setD( Delta );
        setS( Start );
        setF( Final );
    }
    void setQ(int Q){ this->Q = Q; }
    void setA(string Alpha){ Alphabet = Alpha; nA = Alphabet.length(); }
    void setD(int Delta[ST][ST]){
        if( Q == 0 || nA == 0 ){
            cout << "\nERROR: Set of States and Input Alphabet are not set.\n\n";
            return;
        }
        for(int i=1; i<=Q; i++)
            for(int j=1; j<=nA; j++)
                DeltaTable[i][j] = Delta[i][j];
    }
    void setS(int Start){ StartState = Start;}
    void setF(int Final[ST]){
        for(int i=0; i<=Final[0]; i++)
            FinalStates[i] = Final[i];
    }
    int getQ(void){return Q;}
    int getAlphabetIndex(char ch){
        for(int i=0; i < nA; i++)
            if( Alphabet[i] == ch )
                return i;
        return -1;
    }
    int getDeltaFunction(int q, int a){ return DeltaTable[q][a]; }
    int getS(void){ return StartState;}
    int isFinalState(int State){
        int nF = FinalStates[0];
        for(int i=1; i <= nF; i++)
            if(FinalStates[i] == State)
                return i;
        return -1;
    }
    void Input5Tuple( void ){
        InputQ();
        InputA();
        InputD();
        InputS();
        InputF();
    }
    void PrintQ( void ){
        cout << "\nQ [Set of States] = {q1";
        for(int i=2; i<=Q; i++)
            cout << ", q" <<i;
        cout << "}\n\n";
    }
    void PrintA( void ){
        cout << "\nA [Set of Input Alphabets] = {";
        for(int i=0; i<nA-1; i++)
            cout << Alphabet[i] << ", ";
        cout << Alphabet[nA-1] <<"}\n\n";
    }
    void PrintD( void ){
        cout << "\nD [Transition Table]\n";
        for(int i=0; i<nA; i++){
            cout << "\t" << Alphabet[i];
        }
        cout << endl;
        for(int i=0; i<nA; i++){
            cout << "---------";
        }
        cout << endl;
        for(int i=1; i<=Q; i++){
            cout << i << "|";
            for(int j=1; j<=nA; j++){
                cout << "\t" << DeltaTable[i][j];
            }
            cout << endl;
        }
    }
    void PrintS( void ){ cout << "\ns [Start State] = q1\n\n"; }
    void PrintF( void ){
        cout << "\nF [Set of Final States] = {";
        int nF = FinalStates[0];
        for(int i=1; i<nF; i++){
            cout << "q" << FinalStates[i] << ", ";
        }
        cout << "q" << FinalStates[nF] << "}\n";
    }
    void Print5Tuple(void){
        cout << "\n\nDFA = (Q, A, D, s, F) is defined as follows - \n\n";
        PrintQ();
        PrintA();
        PrintD();
        PrintS();
        PrintF();
    }
    void Process(string Str){
        int l = Str.length(), r = StartState, i=0;
        while( i < l ){
            int c = getAlphabetIndex(Str[i])+1;
            if(c == -1){
                cout << "\nERROR: Invalid Alphabet: " << Str[i] << endl;
                return;
            }
            cout << "D(q"<<r<<","<<Str[i]<<")="<<DeltaTable[r][c]<<endl;
            r = DeltaTable[r][c];
            i++;
        }
        if( isFinalState( r ) > 0 )
            cout << "\n......ACCEPTED......\n";
        else
            cout << "\n......REJECTED......\n";
    }
};


