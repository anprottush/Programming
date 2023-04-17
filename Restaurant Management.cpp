#include <iostream>

using namespace std;
void bfast();
void lunch();
void dinner();
void exit();

int num,again;
//float price;
float total;



void restaurent()
{
	char choice = ' ' ;

  cout<<"\n        Welcome to Restaurant Management System                "<<endl;
  cout<<"             +============================+                     "<<endl;
  cout<<"  && Please select the meal that you would like to purchase. && "<<endl;
  cout<<"\t\t      1. Breakfast "<<endl;
  cout<<"\t\t      2. Lunch     "<<endl;
  cout<<"\t\t      3. Dinner    "<<endl;
  cout<<"\t\t      4. Exit      "<<endl;
  cout<<"Enter choice :         "<<endl;
  cin>>choice;


if (choice == '1' )
		  bfast();
		else if (choice == '2')
				  lunch();
			else if (choice == '3')
					  dinner();
				else if (choice == '4')
						  exit();
					  else
						  {
							  restaurent();
						  }
	}

void bfast()
{
  int choice = 0;
  int quantity = 0;
  int again = 0;





  cout<<"                  $  Breakfast Menu  $                           "<<endl;
  cout<<"  && Please select the food that you would like to purchase. &&  "<<endl;
  cout<<"\t\t    1. Paratha+sobji      Rs.30  "<<endl;
  cout<<"\t\t    2. Ruti+Dal           Rs.20"<<endl;
  cout<<"\t\t    3. Khichuri           Rs.80"<<endl;


  cout<<"Enter choice  : "<<endl;
  cin>>choice;
  if(choice == 1)
	  {
	  cout<<"Enter quantity : "<<endl;
	  cin>>quantity;
	  total = 30 * quantity ;
      cout<<"total amount is: "<<total<<"   "<<"Please pay at the counter "<<endl;
      cout<<"Would you like to buy anything else "<<endl<< " 1. Yes , 2. No : "<<endl;
      cin>>again;


			 if (again == 1 )
				bfast();
			 else if (again == 2 )
                    cout<<"thank you for buy our food";

              else
				{
				 cout<<"\n\n\t\tSorry Invalid Decision Entered\n\n\n\n"<<endl;
				 exit();
				}
      }
	else if ( choice == 2)
		  {

		  cout<<"Enter quantity : "<<endl;
		  cin>>quantity;
		  total =20* quantity ;
		  cout<<"Total amount is: "<<total<<"   "<<"Please pay at the counter\n\n\n "<<endl;
          cout<<"Would you like to buy anything else "<<endl<< " 1. Yes , 2. No : "<<endl;
			cin>>again;


			 if (again == 1 )
				bfast();
			 else if (again == 2 )
				cout<<"Thanks for buy our food "<<endl;
			else
				{
				 cout<<"\n\n\t\tSorry Invalid Decision Entered\n\n\n\n "<<endl;
				 exit();
				}
		  }
		  else if ( choice == 3 )
			  {
			  cout<<"Enter quantity : "<<endl;
			  cin>>quantity;
			  total = 80* quantity ;
			  cout<<"Total amount is: "<<total<<"   "<<"Please pay at the counter\n\n\n "<<endl;
		        cout<<"Would you like to buy anything else "<<endl<< " 1. Yes , 2. No : "<<endl;
			   cin>>again;


			  if (again == 1 )
				{
				bfast();
				 }
			  else if (again == 2 )
				{
				cout<<"Thanks for buy our food "<<endl;
				}
				else
					{
					 cout<<"\n\n\t\tSorry Invalid Decision Entered\n\n\n\n "<<endl;
					 exit();
					}
			  }
			  else
						{

						cout<<"\n\n\t\t   Invalid Choice Entered\n\n  "<<endl;
						bfast();
						}
}


void lunch()
{
  int choice=0;
  int quantity=0;
  int again=0;




  cout<<"                   $  Lunch Menu  $ \n\n "<<endl;
  cout<<"  && Please select the food that you would like to purchase. && \n\n" <<endl;
  cout<<"\t\t     1. Rice+Curry+Dal     Rs.200   "<<endl;
  cout<<"\t\t     2. Burger             Rs.350"<<endl;
  cout<<"\t\t     3. Pizza              Rs.550"<<endl;
  cout<<"\t\t     4. Pasta              Rs.330"<<endl;

  cout<<"Enter choice : "<<endl;
  cin>>choice;
  if (choice == 1)
	  {
	  cout<<"Enter quantity : "<<endl;
	  cin>>quantity;
	  total = 200* quantity ;
	  cout<<"Total amount is: "<<total<<"   "<<"Please pay at the counter\n\n\n "<<endl;
		cout<<"Would you like to buy anything else "<<endl<< " 1. Yes , 2. No : "<<endl;
		cin>>again;

		if (again == 1 )
			lunch();
		else if (again == 2 )
				cout<<"Thanks for buy our food "<<endl;
		else
			{
			 cout<<"\n\n\t\tSorry Invalid Decision Entered\n\n\n\n "<<endl;
			 exit();
			}
		}

	else if ( choice == 2)
		  {
		  cout<<"Enter quantity : "<<endl;
		  cin>>quantity;
		  total = 350 * quantity ;
		  cout<<"Total amount is: "<<total<<"   "<<"Please pay at the counter\n\n\n "<<endl;

		cout<<"Would you like to buy anything else "<<endl<< " 1. Yes , 2. No : "<<endl;
		cin>>again;

		if (again == 1 )
			lunch();
		else if (again == 2 )
				cout<<"Thanks for buy our food "<<endl;
		else
			{
			 cout<<"\n\n\t\tSorry Invalid Decision Entered\n\n\n\n "<<endl;
			 exit();
			}

		  }
    else if ( choice == 3 )
			  {
			  cout<<"Enter quantity : "<<endl;
			  cin>>quantity;
			  total = 550 * quantity ;
			  cout<<"Total amount is: "<<total<<"   "<<"Please pay at the counter\n\n\n "<<endl;

				cout<<"Would you like to buy anything else "<<endl<< " 1. Yes , 2. No : "<<endl;
				cin>>again;

				if (again == 1 )
					lunch();
				else if (again == 2 )
						cout<<"Thanks for buy our food "<<endl;
				else
					{
					 cout<<"\n\n\t\tSorry Invalid Decision Entered\n\n\n\n "<<endl;
					 exit();
					}
	           }

    else if ( choice == 4 )
			  {
			  cout<<"Enter quantity : "<<endl;
			  cin>>quantity;
			  total = 330 * quantity ;
			  cout<<"Total amount is: "<<total<<"   "<<"Please pay at the counter\n\n\n "<<endl;

				cout<<"Would you like to buy anything else "<<endl<< " 1. Yes , 2. No : "<<endl;
				cin>>again;

				if (again == 1 )
					lunch();
				else if (again == 2 )
						cout<<"Thanks for buy our food "<<endl;
				else
					{
					 cout<<"\n\n\t\tSorry Invalid Decision Entered\n\n\n\n "<<endl;
					 exit();
					}
}

        else
            {

                cout<<"\n\n\t\t   Invalid Choice Entered\n\n "<<endl;
                lunch();
            }
}

void dinner()
{
  int choice=0;
  int quantity=0;
  int again=0;




  cout<<"                    $  Dinner Menu  $ \n\n "<<endl;
  cout<<"  && Please select the food that you would like to purchase. && \n\n "<<endl;
  cout<<"\t\t     1. Kachchi Biryani+Borhani    Rs.360   "<<endl;
  cout<<"\t\t     2. Polao + Chicken Roast      Rs.340"  <<endl;
  cout<<"\t\t     3. Nun + Grill                Rs.170"  <<endl;

  cout<<"Enter choice : "<<endl;
  cin>>choice;
  if (choice == 1)
	  {
	  cout<<"Enter quantity : "<<endl;
	  cin>>quantity;
	  total = 360 * quantity ;
	  cout<<"Total amount is: "<<total<<"   "<<"Please pay at the counter\n\n\n "<<endl;

		cout<<"Would you like to buy anything else "<<endl<< " 1. Yes , 2. No : "<<endl;
		cin>>again;

		if (again == 1 )
			dinner();
		else if (again == 2 )
				cout<<"Thanks for buy our food "<<endl;
		else
			{
			 cout<<"\n\n\t\tSorry Invalid Decision Entered\n\n\n\n "<<endl;
			 exit();
			}
}
	else if ( choice == 2)
		  {
	  cout<<"Enter quantity : "<<endl;
	  cin>>quantity;
	  total = 340 * quantity ;
		   cout<<"Total amount is: "<<total<<"   "<<"Please pay at the counter\n\n\n "<<endl;

		cout<<"Would you like to buy anything else "<<endl<< " 1. Yes , 2. No : "<<endl;
		cin>>again;

			if (again == 1 )
				dinner();
			else if (again == 2 )
					cout<<"Thanks for buy our food "<<endl;
			else
				{
				 cout<<"\n\n\t\tSorry Invalid Decision Entered\n\n\n\n "<<endl;
				 exit();
				}
	        }

		  else if ( choice == 3 )
			  {
	  cout<<"Enter quantity : "<<endl;
	  cin>>quantity;
	  total = 170 * quantity ;
		   cout<<"Total amount is: "<<total<<"   "<<"Please pay at the counter\n\n\n "<<endl;

		cout<<"Would you like to buy anything else "<<endl<< " 1. Yes , 2. No : "<<endl;
		cin>>again;

				if (again == 1 )
					dinner();

				else if (again == 2 )
						cout<<"Thanks for buy our food "<<endl;

				else
					{
					 cout<<"\n\n\t\tSorry Invalid Decision Entered\n\n\n\n "<<endl;
					 exit();
					}

				 }
        else
        {

            cout<<"\n\n\t\t   Invalid Choice Entered\n\n "<<endl;
            dinner();
        }
}

void exit()
{

  cout<<"                  Thank You Very Much            "<<endl;
  cout<<"             +============================+      "<<endl;
  cout<<"               && Please come again. &&          "<<endl;
}

int main()
{
	restaurent();
	return 0;
}

