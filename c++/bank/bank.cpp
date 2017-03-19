#include <iostream>
#include<fstream>
#include<iomanip>

using namespace std;
	
class account {
	int acno;
	char name[50];
	int deposit;
	char type;
	
public:
/* 		## Class Functions  Definitions		*/	
	void create_account();
	int retacno() const;
	void show_account() const;
	void dep(int);
	void draw(int);
	int retdeposit() const;	
	char rettype() const;
	void report() const;
			
};
/* 		## Class Functions 		*/

void account::create_account(){
	cout<<"\nEnter the account number : ";
	cin>>acno;
	cout<<"Enter The Name of The account Holder : ";
	cin.ignore(); 
	cin.getline(name,50);
	cout<<"Enter Type of The account (C/S) : ";
	cin>>type;
	type=toupper(type);
	cout<<"Enter The Initial amount(>=500 for Saving and >=1000 for current ) : ";
	cin>>deposit;
	cout<<"Account Created.."<<endl;
}

int account::retacno() const{
	return acno;
}

void account::show_account() const{
	cout<<"\nAccount No. : "<<acno;
	cout<<"\nAccount Holder Name : " <<name;
	cout<<"\nType of Account : "<<type;
	cout<<"\nBalance amount : "<<deposit;	
}

void account::dep(int x){
	deposit += x;
}

void account::draw(int x){
	deposit -= x;
}

int account::retdeposit() const{
	return deposit;
}

char account::rettype() const{
	return type;
}

void account::report() const{
	cout<<acno<<setw(10)<<" "<<name<<setw(10)<<" "<<type<<setw(6)<<deposit<<endl;	
}

//##############################################
//		## Function Prototypes	
//##############################################

void write_account();
void deposit_withdraw(int, int); 
void display_sp(int);
void display_all();
void delete_account(int);

int main(){
	int ch,num;

do{	
		cout<<"\n\n\tMAIN MENU";
		cout<<"\n\t01. NEW ACCOUNT";
		cout<<"\n\t02. DEPOSIT AMOUNT";
		cout<<"\n\t03. WITHDRAW AMOUNT";
		cout<<"\n\t04. BALANCE ENQUIRY";
		cout<<"\n\t05. ALL ACCOUNT HOLDER LIST";
		cout<<"\n\t06. CLOSE AN ACCOUNT";
		cout<<"\n\t07. MODIFY AN ACCOUNT";
		cout<<"\n\t08. EXIT";
		cout<<"\n\tSelect Your Option (1-8) \n";
		cin>>ch;
		
		
		
switch(ch){
	case 1:
		write_account();		
	break;	
	case 2:
		cout<<"\nEnter the account no : " ;
		cin>>num;
		deposit_withdraw(num, 1);		
	break;
	case 3:
			cout<<"\n\n\tEnter The account No. : "; 
			cin>>num;
			deposit_withdraw(num, 2);		
	break;	
	case 4: 
		cout<<"\n\n\tEnter The account No. : "; 
		cin>>num;
		display_sp(num);
	break;	
	case 5:
		display_all();
	break;	
	case 6:
			cout<<"\n\n\tEnter The account No. : "; 
			cin>>num;
			delete_account(num);	
	break;
}

}while(ch!=8);

return 0;
}

//##############################################
//		## Function which Create Account	
//##############################################

void write_account(){
	account ac;
	ofstream outFile;
	outFile.open("account.dat",ios::binary | ios::app);
	ac.create_account();
	outFile.write(reinterpret_cast<char *> (&ac), sizeof(account));
	outFile.close();
}

//##############################################
//		## function to desposit/withdraw amount for given account	
//##############################################

void deposit_withdraw(int n , int option){
	int amt;
	bool found = false;
	account ac;
	
	fstream File;
	File.open("account.dat",ios::binary | ios::in | ios::out );
	if(!File)
	{
		cout<<"There is a problem in system !! Press any Key...";
		return;
	}
		
	while(!File.eof() && found==false)
	{
		File.read(reinterpret_cast <char *> (&ac) ,sizeof(account));
		if(ac.retacno()== n )
		{
			ac.show_account();
			
			if(option == 1)
			{
				cout<<"\n\tTO DEPOSITE AMOUNT ";
				cout<<"\nEnter The amount to be deposited";
				cin>>amt;
				ac.dep(amt);				
			}
			if (option == 2)
			{
				cout<<"\n\n\tTO WITHDRAW AMOUNT ";
				cout<<"\n\nEnter The amount to be withdraw";
				cin>>amt;
				int bal = ac.retdeposit() - amt;
				
				if( (bal<500 && ac.rettype()=='S') || (bal<1000 && ac.rettype() =='C') )
					cout<<"Insufficience balance";					
				else
					ac.draw(amt);				
			}
			int pos=(-1)*static_cast<int>(sizeof(ac));
			File.seekp(pos,ios::cur);
			File.write(reinterpret_cast<char *> (&ac), sizeof(account));
			cout<<"\n\t Record Updated";
			found=true;					
		}	
	}	
}

//##############################################
//		## function to read specific record from file	
//##############################################

void display_sp(int n){

	account ac;
	bool flag = false;
	ifstream inFile("account.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	cout<<"\nBALANCE DETAILS\n";
    	while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(account)))
	{
		if(ac.retacno()==n)
		{
			ac.show_account();
			flag=true;
		}		
	}
    inFile.close();
	if(flag==false)
		cout<<"\n\nAccount number does not exist";			
}

//##############################################
//		## function to display all accounts deposit list	
//##############################################

void display_all(){
	account ac;
	ifstream inFile("account.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	cout<<"\n\n\t\tACCOUNT HOLDER LIST\n\n";
	cout<<"====================================================\n";
	cout<<"A/c no.      NAME           Type  Balance\n";
	cout<<"====================================================\n";

	while(inFile.read(reinterpret_cast<char *> (&ac),sizeof(account)))
	{
		ac.report();
	}		
	inFile.close();	
}

//##############################################
//		## function to delete	
//##############################################

void delete_account(int n){

	account ac;
	ifstream inFile;
	ofstream outFile;
	inFile.open("account.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	outFile.open("temp.dat",ios::binary);
	inFile.seekg(0,ios::beg);
	while(inFile.read(reinterpret_cast<char *> (&ac),sizeof(account)))
	{
		if(ac.retacno()!=n)
		{
			outFile.write(reinterpret_cast<char *> (&ac), sizeof(account));
		}		
	}
    inFile.close();
	outFile.close();
	remove("account.dat");
	rename("temp.dat","account.dat");
	cout<<"\n\n\tRecord Deleted ..";		
}


