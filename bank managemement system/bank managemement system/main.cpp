#include<iostream>
#include <fstream>
#include <vector>
#include<string>
#include <sys/stat.h> 
#include <sys/types.h> 
#include<windows.h>
#include <stdlib.h>

using namespace std;
int choice;

string name, pass;
void menu() {
	cout << "Welcome to our bank" << endl;
	cout << "Press 1 to log in" << endl;
	cout << "Press 2 to Sign in" << endl;
	cout << "Press 0 to exit" << endl;
	cin >> choice;
}
double balance=500;

void bankfunction() {
	int ch;
	cout << "You are now loged in choose what you want to do" << endl;
	cout << "Your balance is:" << balance<<"$" <<endl;
	cout << "1. Invest them" << endl;
	cout << "2 Draw them" << endl;
	cout << "Convert them" << endl;
	cin >> ch;

}
ifstream file;
string Name, Pass;
void Login() {
	
	string name, pass;
	
	cout << "Please enter your name";
	cin >> name;
	file.open(name + ".txt");
	file >> Name >> Pass;
	if (Name != name) {
		cout << "Name is incorrect";
	}
	else {
		cout << endl;
		cout << "Please enter your password";
		cin >> pass;
		if (Pass != pass) {
			cout << "Password is incorrect" << endl;
		}
		else {
			system("CLS");
			bankfunction();
		}
	}
	file.close();
	

}


int exit() {
	return 0;
}
ofstream myf;
void  Signin() {
	string Name;
	
	cout << "Please enter your name";
	cin >> name;
    
	cout << "Please enter your password";
	cin >> pass;
	myf.open(name + ".txt");
	myf << name<<" " << pass;
	myf.close();
	
	cout << "You are now registered press enter to continue" << endl;
	menu();
	if (choice == 1) { Login(); }
	
	if (choice == 0) { exit(); }
	
}


int main() {
	
	system("CLS");
	menu();
	if (choice == 1) { Login(); }
	if (choice == 2) { Signin(); }
	if (choice == 0) { return 0; }
	
	system("PAUSE");
	return 0;
}