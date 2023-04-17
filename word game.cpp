#include<iostream>
#include<string>
#include <cstdlib>


using namespace std;
main()
{
cout<<"*************** WORD GAME*************** \n";

char ans;
cout<<endl;
do
{
cout<< "PRESS Y to start! \n";

cout<< "\n\n Guess my SECRET word or face my wrath!!]\nINSTRUCTION: You can PRESS H for the given hints later when the game starts\n";

cout<<" THE LOOP WILL NOT STOP UNTIL YOU PRESS Y ........XD \n ";
cout<<"ENTER or DIE! :> ";
cin >> ans;

}
while((ans !='Y')&&(ans !='y')); //prompt the user to PRESS Y button to start! if the user PRESS any key except the Y button... the program will appear again and again until the Y button is PRESSED

system("cls");

{
string SECRET_WORD = "hair"; // this is the word that the user is challanged to guess...

string SECRET_GUESS;// the users guess


cout << "its in you everywhere!" << endl;
char H;
cout<<endl;
cout<<"Press H for Hint(X to cancel it)"<<endl;
cin>>H;
cout<<endl;
if (H == 'H' || H == 'h')//if the user enter H button the hint will appear!
{
cout<<"You touch it everytime you scratch your head"<<endl;
cout<<"Enter you Magic Guess ";// prompts the user to enter his/her SECRET_GUESS
cout<<endl;
cin >> SECRET_GUESS;
cout<<endl;
if(SECRET_WORD == SECRET_GUESS)// if the secret word is equal to secret guess it will print out Correct the secret word was hair
cout << "Correct the secret word was " << SECRET_WORD << endl;// right answer
else
cout << "wrong answer! please try again!" ;//wrong answer

cout<<endl;
system("pause");}
if ((H == 'x' || H == 'X'))// if the user PRESS X it will automatically cancel the hint
{
cout<<endl;
cout<<"Enter you Magic Guess ";// prompt the user to enter his/her secret guess
cin >> SECRET_GUESS;
if(SECRET_WORD == SECRET_GUESS)// likewise
cout << "Correct the secret word was " << SECRET_WORD << endl;
else// likewise
cout << "wrong answer! please try again!" << endl;
}

system("pause");
{cout<<"invalid command! please read the instruction once more!";

}
}
system("cls");
{
string SECRET_WORD = "medicine";
string SECRET_GUESS;// the users guess


cout << "You need it everytime you got sick !" << endl;
char H;
cout<<endl;
cout<<"Press H for Hint(X to cancel it)"<<endl;
cin>>H;
cout<<endl;
if (H == 'H' || H == 'h')//if the user enter H button the hint will appear!
{
cout<<" it makes you better! "<<endl;
cout<<"Enter you Magic Guess ";// prompts the user to enter his/her SECRET_GUESS
cout<<endl;
cin >> SECRET_GUESS;
cout<<endl;
if(SECRET_WORD == SECRET_GUESS)
cout << "Correct the secret word was " << SECRET_WORD << endl;// right answer
else
cout << "wrong answer! please try again!" ;//wrong answer

cout<<endl;
system("pause");}
if ((H == 'x' || H == 'X'))// if the user PRESS X it will automatically cancel the hint
{
cout<<"Enter you Magic Guess ";// prompt the user to enter his/her secret guess
cin >> SECRET_GUESS;
if(SECRET_WORD == SECRET_GUESS)// likewise
cout << "Correct the secret word was " << SECRET_WORD << endl;
else// likewise
cout << "wrong answer! please try again!" << endl;
system("pause");}
}
system("cls");
{
string SECRET_WORD = "hair"; // this is the word that the user is challanged to guess...

string SECRET_GUESS;// the users guess
cout << "its in you everywhere!" << endl;
char H;
cout<<endl;
cout<<"Press H for Hint(X to cancel it)"<<endl;
cin>>H;
cout<<endl;
if (H == 'H' || H == 'h')//if the user enter H button the hint will appear!
{
cout<<"You touch it everytime you scratch your head"<<endl;
cout<<"Enter you Magic Guess ";// prompts the user to enter his/her SECRET_GUESS
cout<<endl;
cin >> SECRET_GUESS;
cout<<endl;
if(SECRET_WORD == SECRET_GUESS)// if the secret word is equal to secret guess it will print out Correct the secret word was hair
cout << "Correct the secret word was " << SECRET_WORD << endl;// right answer
else
cout << "wrong answer! please try again!" ;//wrong answer

cout<<endl;
system("pause");}
if ((H == 'x' || H == 'X'))// if the user PRESS X it will automatically cancel the hint
{
cout<<endl;
cout<<"Enter you Magic Guess ";// prompt the user to enter his/her secret guess
cin >> SECRET_GUESS;
if(SECRET_WORD == SECRET_GUESS)// likewise
cout << "Correct the secret word was " << SECRET_WORD << endl;
else// likewise
cout << "wrong answer! please try again!" << endl;
system("pause");}

}

//system("cls")
{



string SECRET_WORD = "phone"; // this is the word that the user is challanged to guess...

string SECRET_GUESS;// the users guess


cout << "You use it everytime you want to comnunicate with me!" << endl;
char H;
cout<<endl;
cout<<"Press H for Hint(X to cancel it)"<<endl;
cin>>H;
cout<<endl;
if (H == 'H' || H == 'h')//if the user enter H button the hint will appear!
{
cout<<" text ! "<<endl;
cout<<"Enter you Magic Guess ";// prompts the user to enter his/her SECRET_GUESS
cout<<endl;
cin >> SECRET_GUESS;
cout<<endl;
if(SECRET_WORD == SECRET_GUESS)// if the secret word is equal to secret guess it will print out Correct the secret word was hair
cout << "Correct the secret word was " << SECRET_WORD << endl;// right answer
else
cout << "wrong answer! please try again!" ;//wrong answer

cout<<endl;
system("pause");}
if ((H == 'x' || H == 'X'))// if the user PRESS X it will automatically cancel the hint
{
cout<<"Enter you Magic Guess ";// prompt the user to enter his/her secret guess
cin >> SECRET_GUESS;
if(SECRET_WORD == SECRET_GUESS)// likewise
cout << "Correct the secret word was " << SECRET_WORD << endl;
else// likewise
cout << "wrong answer! please try again!" << endl;
system("pause");}
}
system("cls");
{
string SECRET_WORD = "water"; // this is the word that the user is challanged to guess...

string SECRET_GUESS;// the users guess
cout << "You can`t live without it!" << endl;
char H;
cout<<endl;
cout<<"Press H for Hint(X to cancel it)"<<endl;
cin>>H;
cout<<endl;
if (H == 'H' || H == 'h')//if the user enter H button the hint will appear!
{
cout<<" you drink it! "<<endl;
cout<<"Enter you Magic Guess ";// prompts the user to enter his/her SECRET_GUESS
cout<<endl;
cin >> SECRET_GUESS;
cout<<endl;
if(SECRET_WORD == SECRET_GUESS)// if the secret word is equal to secret guess it will print out Correct the secret word was hair
cout << "Correct the secret word was " << SECRET_WORD << endl;// right answer
else
cout << "wrong answer! please try again!" ;//wrong answer

cout<<endl;
system("pause");}
if ((H == 'x' || H == 'X'))// if the user PRESS X it will automatically cancel the hint
{
cout<<"Enter you Magic Guess ";// prompt the user to enter his/her secret guess
cin >> SECRET_GUESS;
if(SECRET_WORD == SECRET_GUESS)// likewise
cout << "Correct the secret word was " << SECRET_WORD << endl;
else// likewise
cout << "wrong answer! please try again!" << endl;
system("pause");}
}
system("cls");


cout<<"**********GAME OVER**********";
cout<<endl;
cout<<endl;

system("pause");
return EXIT_SUCCESS;
}
