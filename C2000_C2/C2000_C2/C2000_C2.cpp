//Chpt 2
#include <iostream>
#include <string>
using namespace std;

int main()
{	
//program 2-1
	cout << "\n  programming is great fun!" << endl;
	cout << endl;
//chkpt2.1
	cout << "  In 1492 Columbus sailed the ocean blue.";
	cout << endl;
//chkpt2.2
	cout << "\n  Kim Lien Chu";
	cout << endl;
//program 2-2
	cout << "\n  programming is "<< "great fun!" ;
	cout << endl;
//program 2-3
	cout << "\n  programming is ";
	cout <<"great fun!";
	cout << endl;
//program 2-4
	cout << "\n  The folowing items were top sellers";
	cout << " during the month of June:";
	cout << " computer games";
	cout << " coffee";
	cout << " Aspirin";
	cout << endl;
//program 2-5
	cout << " The folowing items were top sellers"<<endl;
	cout << " during the month of June:"<< endl;
	cout << " computer games" <<endl;
	cout << " coffee" <<endl;
	cout << " Aspirin" << endl;
	cout << endl;
//program 2-6
	cout << "The folowing items were top sellers\n" ;
	cout << "during the month of June:\n" ;
	cout << "computer games\ncoffee" ;
	cout << "\nAspirin\n" ;
	cout << endl;
//chkpt 2.3
	//cout << "red /n" << "blue \ n" << "yellow \n" << "green";
	cout << endl;
		//corrected
	cout << "red \n" << "blue \n" << "yellow \n" << "green";
	cout << endl;

//chkpt 2.4
	cout << "The works of Wolfgang\ninclude the following:";
	cout << "\nThe Turkish March" << endl;
	cout << "and Symphony No. 40 ";
	cout << "in G minor." << endl;
	cout << endl;

//chkpt 2.5
	cout << "Kim Lien Chu\n";
	cout << "6715 NW 52nd Terrace\n";
	cout << "Gainesville, FL\n";
	cout << "352-281-4199\n";
	cout << endl;
//program 2-7
	int number;
	number = 5;
	cout << "The value of number is " << "number" << endl;
	cout << "The value of number is " << number << endl;
	number = 7;
	cout<< "Now the value of number is " << number << endl;
	cout << endl;
//program 2-8
	int apples;
	apples = 20;
	cout << "On Sunday we sold " << apples << " bushels of apples.\n";
	
	apples = 15;
	cout << "On Monday we sold " << apples << " bushels of apples.\n";
	cout << endl;
// chkpt 2.8
	int little;
	int big;
	little = 2;
	big = 2000;
	cout << "The little number is  " << little << endl;
	cout << "The big number is  " << big << endl;
	cout << endl;

// chkpt 2.9
	int number1;
	number1 = 712;
	cout << "The value is " << "number" << endl;
	cout << endl;

// program 2-9
	int checking;
	unsigned int miles;
	long days;
	checking = -20;
	miles = 4276;
	days = 190000;

	cout << "We have made a long journey of " << miles << " miles.";
	cout << "\n Our checking account balance is "<< checking;
	cout << "\n About "<<days<< " days ago Columbus ";
	cout << "stood on this spot.\n";
	cout << endl;

// program 2-10
	int floors = 15,
		rooms = 300,
		suites = 30;

	cout << "The Grande Hotel has "<< floors<< " floors\n";
	cout << "with " << rooms << " rooms and " <<suites ;
	cout << " suites.\n";
	cout << endl;

// program 2-11
	float distance = 1.496E8;
	double mass = 1.989E30;

	cout << "The sun is " << distance << " kilometers away.\n";
	cout << "The sun\'s mass is " << mass << " kilograms.\n";
	cout << endl;
	// chkpt 2.17
	int number3;
	number3 = 3.625;
	cout << number3;

	//chkpt 2.18
	int age;
	double weight;
	age = 49;
	weight = 129.3;

	cout << "My age is  " << age << " and my weight is " << weight;
	cout << " pounds.\n";
	cout << endl;

	// program 2-12
	char letter;
	letter = 'A';
	cout << letter << endl;

	letter = 'B';
	cout << letter << endl;
	cout << endl;
	
	//program 2-13
	char letter1;
	letter1 = 65;
	cout << letter1 << endl;
	letter1 = 66;
	cout << letter1 << endl;
	cout << endl;
	// program 2-14
	char letter2;
	letter2 = 'A';
	cout << letter2 << '\n';

	letter2 = 'B';
	cout << letter2 << '\n';
	cout << endl;
	
	//program 2-15
	string movieTitle;
	movieTitle = "Wheels of Fury";
	cout << "My favorite movie is "<< movieTitle << endl;
	cout << endl;
	// chkpt 2.24
	string name, address, phone;
	name = "Kim Lien Chu";
	address = "6715 NW 52nd Terrace";
	phone = "352-281-4199";

	cout << name << endl;
	cout << address << endl;
	cout << phone << endl;
	cout << endl;

	// program 2-16
	bool boolValue;
	boolValue = true;
	cout << boolValue << endl;
	boolValue = false;
	cout << boolValue << endl;
	cout << endl;

	//program 2-17
	long double apple1;
	cout << "The size of an integer is " << sizeof(int);
	cout << " bytes.\n";
	cout << "The size of a long integer is " << sizeof(long);
	cout << " bytes.\n";
	cout << "An apple can be eaten in " << sizeof(apple1);
	cout << " bytes.\n";
	cout << endl;
	
	//program 2-18
	string month = "February";
	int year,
		days1 = 28;

	year = 2007;
	cout << "In " << year << " " << month
		<< " had " << days1 << " days.\n";
	cout << endl;
	// program 2-19
	// cout<<value:
	// int value = 100;

	// program 2-20
	double basePayRate = 18.25,
		overtimePayRate = 27.38,
		regularHours = 40.0,
		overtimeHours = 10,
		regularWages,
		overtimeWages,
		totalWages;

	regularWages = basePayRate * regularHours;
	overtimeWages = overtimePayRate * overtimeHours;
	totalWages = regularWages + overtimeWages;
	cout << "Wages for this week are $" << totalWages << endl;
	cout << endl;

	//  program 2-21
	int totalSeconds = 125,
		minutes,
		seconds;
	minutes = totalSeconds / 60;
	seconds = totalSeconds % 60;

	cout << totalSeconds << " second is equivalent to ";
	cout << minutes << " minutes and " << seconds << " seconds. \n";
	cout << endl;

	//chkpt 2.26
	double critter;
	critter = 62.7;
	cout << critter << endl;

	//chkpt 2.27
	int x;
	x = 8 + 3;
	cout << "x = 8 + 3 is  " << x << endl;
	x = 8 - 3;
	cout << "x = 8 - 3 is " << x << endl;
	x = 8 * 3; 
	cout << "x = 8 * 3 is " << x << endl;
	x = 8 % 2;
	cout << "x = 8 % 2 is " << x << endl;

	cout << endl;

	//chkpt 2.28
	cout <<" 16 / 3   is  " << 16/3;
	cout << endl;
	// program 2-22
	/*  comments here 
	*/
	
	// program 2-23
	double shares = 220.0; double avgPrice = 14.67; cout
		<< "There were " << shares << " shares sold at $" << avgPrice <<
		" per share.\n";
	cout << endl;
	//program 2-24
	double shares1 = 220.0;
	double avgPrice1 = 14.67;

	cout << "There were " << shares1 << " shares sold at $";
	cout << avgPrice1 <<	" per share.\n";
	cout << endl;

	// program 2-25
	cout << "\n\n";
	cout << "           ^     ^        \n";
	cout << "              *           \n";
	cout << "           \\_____/       \n";
	cout << endl;
	
	cout << "\n\n";
	cout << "           o     o        \n";
	cout << "              *           \n";
	cout << "           \(_____)       \n";

	cout << "\n\n";
	cout << "           ^     ^        \n";
	cout << "           v     v        \n";
	cout << "              :           \n";
	cout << "            \\UUU/        \n";
	cout << endl;

	cout << endl;
	//RQ 11
	cout << "Hello" << endl;
	//cout << "Hello" << \n;
	//cout << Hello;

	//RQ13
	int result,
		x1 = 4,
		y = 7,
		z = 2;
	
	result = x1 + y;
	cout << "\n  x1 + y  is " << result;
	result = y * 2;
	cout << "\n  y * 2  is " << result;
	result = y / z;
	cout << "\n  y / z  is " << result;
	cout << endl;
	cout << endl;
	// RQ15
/*	double temp, 
		weight1, 
		height;

*/
	//RQ 17
	int i;
	double d1, d2;
	char c1;
	d1 = 3;
	cout << "   given:              " << endl;
	cout << "		int i;          " << endl;
	cout << "		double d1, d2;  " << endl;
	cout << "		char c1;        " << endl;
	
	cout << "\n        d1           is " << d1 << endl;

	d2 = d1 + 2;
	d1 = d2 * 4;
	c1 = 'K';
	i = 'K';
	//i = i - 1;
	cout << "\n	d2 = d1 + 2  is " << d2 << endl;
	cout << "	d1 = d2 * 4  is " << d1 << endl; 
	cout << "	c1 = K       is " << c1 << endl; 
	cout << "	i = K        is " << i << endl;
	i = i - 1;
	cout << "	i = i - 1    is " << i << endl;
	cout << endl;
	// RQ 19
	cout << "Two mandoline like creatures in the\n\n\n";
	cout << "dark\n\n\n";
	cout << "Creating the agony of ecstasy.\n\n\n ";
	cout << "                    - George Barker\n\n\n";
	cout << endl;

	//RQ 25 A
	int freeze = 32, boil = 212;
	freeze = 0;
	boil = 100;
	cout << freeze << endl << boil << endl;
	cout << endl;
	
	//RQ 25 B
	int x2 = 0, y2 = 2;
	x2 = y2 * 4;
	cout << x2 << endl << y2 << endl;
	cout << endl;
	//RQ 25 C
	cout << "I am the incredible";
	cout << "computing\nmachine";
	cout << "\nand I will\namaze\n";
	cout << "you.\n";
	cout << endl;
	//RQ 27
	int a, b, c;
	a = 3;
	b = 4;
	c = a + b;
	cout << "The value of c is %d " << c;

	cout << endl;
	return 0;

}