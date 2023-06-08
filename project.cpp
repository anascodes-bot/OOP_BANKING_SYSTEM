#include<iostream>
#include<stdio.h>
#include <fstream>
#include <windows.h>
using namespace std;

static double money=100000;

void updates();

void update2(string a)
{
   cout<<"Updates are:"<<endl;
	updates();
	cout<<a;
}
void update()
{
	string a;
	cout<<endl;
	cout<<"Enter any update you want to add:";
	cin>>a;
	update2(a);
}
void updates()
{
	cout << endl;
	cout << "Latest updates provided by managers are:" << endl;
	cout << "1.The bank timmings have been reduced by 2 hours during Ramadan"<<endl;
	cout << "2.Bank will be closed on saturdays from now onwards"<<endl;
	cout << "3.Bank will be closed on friday between 12 to 2 (pm) for friday prayer"<<endl;
	cout << "4.Avoid creating groups, wear mask and stand at a distance of six feet"<<endl;
}

void currencyRates()
{
	cout<<"Select 1 to convert from pkr to pounds"<<endl;
	cout<<"Select 2 to convert from pkr to Riyals"<<endl;
	cout<<"Select 3 to convert from pkr to dirhams"<<endl;
	cout<<"Select 4 to convert from pkr to dollars"<<endl;
	int x;
	cin>>x;
	double amount;
	double result;
	if(x==1)
	{
		cout<<"Enter amount in pkr to be converted"<<endl;
		cin>>amount;
		result=amount*0.0047;
		cout<<"Amount in pounds is "<<result<<endl;
	}
	else if(x==2)
	{
		cout<<"Enter amount in pkr to be converted"<<endl;
		cin>>amount;
		result=amount*0.025;
		cout<<"Amount in riyals is "<<result<<endl;
	}
	else if(x==3)
	{
		cout<<"Enter amount in pkr to be converted"<<endl;
		cin>>amount;
		result=amount*0.024;
		cout<<"Amount in dirhams is "<<result<<endl;
	}
	else
	{
		cout<<"Enter amount in pkr to be converted"<<endl;
		cin>>amount;
		result=amount*0.0066;
		cout<<"Amount in dollars is "<<result<<endl;
	}
}

void taxation()
{
	cout << "Tax on properties larger than 5 acres is 3.5%"<<endl;
	cout<<"Tax on electricity bills if 2.3%"<<endl;
	cout <<"Tax on properties owned by Government agents is 1.3%"<<endl;
	cout<<"Tax on properties owned by Army workers is 1.1%"<<endl;
	cout<<"Tax on gas bills is 3.4%"<<endl;
	cout<<"Tax on monetary transactions across the globe is 5%"<<endl;
}

void service()
{
	cout << "If my ATM card does not work, what should I do?"<<endl;
	string Text;
			ifstream MyReadFile("1.txt");

			while (getline(MyReadFile, Text))
			{
				
				cout << Text<<endl;
			}
			cout<<endl;
			
			MyReadFile.close(); 
			
	cout<<"How will I get my Social Security check?"<<endl;
	
	ifstream MyFile("2.txt");

			while (getline(MyFile, Text))
			{
				
				cout << Text<<endl;
			}
			cout<<endl;
			
			MyFile.close(); 
			
	cout<<" I can't reach my bank by phone or internet. What should I do? "<<endl;
	
	ifstream File("2.txt");

			while (getline(File, Text))
			{
				
				cout << Text<<endl;
			}
			cout<<endl;
			
			File.close(); 
			
	cout<<"How can I protect against fraud or scams?"<<endl;
	ifstream F("2.txt");

			while (getline(F, Text))
			{
				
				cout << Text<<endl;
			}
			cout<<endl;
			
			F.close(); 
     
			
}


class Manager
{
	string a;

public:
	
	
	Manager(int x)
	{
		if (x == 1)
		{
			string myText;
			ifstream MyReadFile("filename.txt");

			while (getline(MyReadFile, myText))
			{
				
				cout << myText<<endl;
			}
			cout<<endl;
			
			MyReadFile.close(); 
			
			
		    cout<<endl;
			update();
			
			
		}
		if (x == 2)
		{
			updates();
		}

	}

};


class staffmember
{
public:
	staffmember()
	{
		updates();
	}
	staffmember(int x)
	{
		if (x == 1)
		{
			cout << "Updated policy:" << endl;
			updates();
		}
		if (x == 2)
		{
			cout << "Taxation criteria:" << endl;
			taxation();
		}
		if(x==3)
		{
			cout<<"Customer Service:"<<endl;
			service();
		}
	}

};


class customer
{
public:
	customer()
	{
		cout<<"Please enter 4-digit valid ID of customer: "<<endl;
		int y;
		cin>>y;
		if(y==1234)
		{
			cout<<"Remember! Your transaction code is 2345."<<endl;
		}
		else
		{
			cout<<"Invalid login."<<endl;
		}
	}
};

class saving :public customer 
{
public:
	saving(int b)
	{
		int q;
		cout<<"Enter 1 to check your account details"<<endl;
		cout<<"Enter 2 to view transactions made"<<endl;
		cout<<"Enter 3 to see the saving guidelines"<<endl;
		cin>>q;
		if(q==1)
		{
		 string Text;
			ifstream MyReadFile("6.txt");

			while (getline(MyReadFile, Text))
			{
				
				cout << Text<<endl;
			}
			cout<<endl;
			
			MyReadFile.close();
		}
		if(q==2)
		{
				string Text;
			ifstream MyReadFile("5.txt");

			while (getline(MyReadFile, Text))
			{
				
				cout << Text<<endl;
			}
			cout<<endl;
			
			MyReadFile.close(); 
		}
		if(q==3)
		{
			
				string Text;
			ifstream MyReadFile("7.txt");

			while (getline(MyReadFile, Text))
			{
				
				cout << Text<<endl;
			}
			cout<<endl;
			
			MyReadFile.close();
		}
		
	}
};

class current :public customer 
{
public:
	current()
	{
	}
	current(int a)
	{
	{
		cout<<"Enter 1 to check current currency rates "<<endl;
		cout<<"Enter 2 to make transactions."<<endl;
		cout<<"Enter 3 to get help."<<endl;
		cout<<"Enter 4 to check the latest updates"<<endl;
		int x;
		cin>>x;
		if(x==1)
		{
		   currencyRates();
		   cout<<"Do u wish to continue?"<<endl;
		   string yn;
		   cin>>yn;
		   if(yn=="yes" || yn=="YES")
		   {
		   	cout<<"Enter 1 to make transactions."<<endl;
		   	cout<<"Enter 2 to get help"<<endl;
		   	cout<<"Enter 3 to check latest updates"<<endl;
		   	int z;
		   	cin>>z;
		if(z==1)
		{
		   cout<<"Enter name of bank to make transaction to (without spaces):"<<endl;
		   string bank;
		   cin>>bank;
		   cout<<"Enter name of customer to make transaction to (without spaces):"<<endl;
		   string name;
		   cin>>name;
		   cout<<"Enter IBAN number of customer to make transaction to (without spaces):"<<endl;
		   string iban;
		   cin>>iban;
		   cout<<"Enter your transaction code:"<<endl;
		   int code;
		   cin>>code;
		   if(code==2345)
		   {
		   	cout<<"Enter amount of transaction:"<<endl;
		   	double amount;
		   	cin>>amount;
		   	cout<<"Select a reason for transaction:"<<endl;
		   	cout<<"1.Education"<<endl;
		   	cout<<"2.Property"<<endl;
		   	cout<<"3.Other"<<endl;
		   	int reason;
		   	cin>>reason;
		   	cout<<"Your transaction is complete! :)"<<endl;
		   	money=money-amount;
		   	cout<<"Your remaining balance is "<<money<<endl;
		   }
		}
		 

		   else if(z==2)
		{
			cout<<"Select 1 for: If my ATM card does not work, what should I do? "<<endl;
			cout<<"Select 2 for: How will I get my Social Security check?"<<endl;
			cout<<"Select 3 for: I can't reach my bank by phone or internet. What should I do? "<<endl;
			cout<<"Select 4 for: How can I protect against fraud or scams? "<<endl;
			
			int y;
			cin>>y;
			if(y==1)
			{
				string Text;
			ifstream MyReadFile("1.txt");

			while (getline(MyReadFile, Text))
			{
				
				cout << Text<<endl;
			}
			cout<<endl;
			
			MyReadFile.close(); 
			
			}
			if(y==2)
			{
				string Text;
			ifstream MyReadFile("2.txt");

			while (getline(MyReadFile, Text))
			{
				
				cout << Text<<endl;
			}
			cout<<endl;
			
			MyReadFile.close(); 
			
			}
			if(y==3)
			{
				string Text;
			ifstream MyReadFile("3.txt");

			while (getline(MyReadFile, Text))
			{
				
				cout << Text<<endl;
			}
			cout<<endl;
			
			MyReadFile.close(); 
			
			}
			if(y==4)
			{
				string Text;
			ifstream MyReadFile("4.txt");

			while (getline(MyReadFile, Text))
			{
				
				cout << Text<<endl;
			}
			cout<<endl;
			
			MyReadFile.close(); 
			
			}
		}
		   else 
		{
			updates();
		}
	}
	else
	{
		cout<<"FINISH"<<endl;
	}
}
		else if(x==2)
		{
		   cout<<"Enter name of bank to make transaction to (without spaces):"<<endl;
		   string bank;
		   cin>>bank;
		   cout<<"Enter name of customer to make transaction to (without spaces):"<<endl;
		   string name;
		   cin>>name;
		   cout<<"Enter IBAN number of customer to make transaction to (without spaces):"<<endl;
		   string iban;
		   cin>>iban;
		   cout<<"Enter your transaction code:"<<endl;
		   int code;
		   cin>>code;
		   if(code==2345)
		   {
		   	cout<<"Enter amount of transaction:"<<endl;
		   	double amount;
		   	cin>>amount;
		   	cout<<"Select a reason for transaction:"<<endl;
		   	cout<<"1.Education"<<endl;
		   	cout<<"2.Property"<<endl;
		   	cout<<"3.Other"<<endl;
		   	int reason;
		   	cin>>reason;
		   	cout<<"Your transaction is complete! :)"<<endl;
		   	money=money-amount;
		   	cout<<"Your remaining balance is "<<money<<endl;
		   }
		   else
		   {
		   	cout<<"This is invalid transaction code"<<endl;		  
		   }
		   
    	}
		else if(x==3)
		{
			cout<<"Select 1 for: If my ATM card does not work, what should I do? "<<endl;
			cout<<"Select 2 for: How will I get my Social Security check?"<<endl;
			cout<<"Select 3 for: I can't reach my bank by phone or internet. What should I do? "<<endl;
			cout<<"Select 4 for: How can I protect against fraud or scams? "<<endl;
			
			int y;
			cin>>y;
			if(y==1)
			{
				string Text;
			ifstream MyReadFile("1.txt");

			while (getline(MyReadFile, Text))
			{
				
				cout << Text<<endl;
			}
			cout<<endl;
			
			MyReadFile.close(); 
			
			}
			if(y==2)
			{
				string Text;
			ifstream MyReadFile("2.txt");

			while (getline(MyReadFile, Text))
			{
				
				cout << Text<<endl;
			}
			cout<<endl;
			
			MyReadFile.close(); 
			
			}
			if(y==3)
			{
				string Text;
			ifstream MyReadFile("3.txt");

			while (getline(MyReadFile, Text))
			{
				
				cout << Text<<endl;
			}
			cout<<endl;
			
			MyReadFile.close(); 
			
			}
			if(y==4)
			{
				string Text;
			ifstream MyReadFile("4.txt");

			while (getline(MyReadFile, Text))
			{
				
				cout << Text<<endl;
			}
			cout<<endl;
			
			MyReadFile.close(); 
			
			}
		}
		else if(x==4)
		{
			updates();
		}
	    else
	    {
		   cout<<"Not valid"<<endl;
    	}
}
}
};

void pushX(int num)
{
    for(int i=0;i<num;i++)
        cout<<" ";
}

int main()
{
	 for(int j=0;j<50;j++)
	{
        system("CLS");
        pushX(j);
        cout<<"HBL Banking system";
        Sleep(100);
    }

	
    int type;
	int y;
	char c;
	int p;
	cout<<endl;
	cout << "Enter who are you:" << endl << "1.Manager" << endl << "2.Staff Member" << endl << "3.Customer" << endl;
	cin >> type;

	if (type == 1)
	{

		cout << "press 1. To update details" << endl << "press 2. To view the latest updates"<<endl;
		cin >> p;
		Manager m(p);


	}
	if (type == 2)
	{
		cout << "press 1.To view the updated policy" << endl << "press 2. To view the Taxation criteria" << endl << "Press 3. To view the customer service help" << endl;
		cin >> y;
		staffmember s(y);
	}
	if (type == 3)
	{
		cout << "Enter what type of arrount you have wether it is current or saving account:" << endl << "C for current account" << endl << "S for saving" << endl;
		cin >> c;

		customer cus();

		if (c == 'C' || c == 'c')
		{
			current c1(1);
		}
		else if (c == 'S' || c == 's')
		{
			saving s1(2);
		}
		else
		{
			cout << "Please choose valid type of account";
		}
	}
	
	getchar();
}


