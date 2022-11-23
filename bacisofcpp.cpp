// Starting C++ Programming Language
/*

What happens if you dont return 0 in C++?
Short Answer:  Nothing. 
Better Answer: Return 0 it's used in main like a signal for know the exit of program was a success when return 0 executes. 
Best Answer:   Still nothing because compilers already "put" return 0 in the the end of your code if you not explicit.

But Also: We use return 0 intentionally in between a program if we want to skip the next statements and end a program successfully.

*/




/*
#include <iostream>

int main() // void main() is not allowed in cpp 
// here use   using namespace std;  alternate of   std::
{
	std:: cout<<"Hii hp";
	// std::   is better than  using namespace std;
	
	return 0; // because we specified what kind of value this fun will return   ie  int main()
} 
*/

/*
#include <iostream>
int main()
{
	int x = 5;
	std:: cout << x << " ";
	
	int y = 6;
	std:: cout << y ;
	
	return 0;
}
*/

/*
#include <iostream>
int main()
{
	int x=5; 
	float y=5.5;
	bool b = true;
	char gender = 'm';
	std::cout<< x <<"\n" << y << "\n" << b << "\n"<< gender << "\n";
	return 0;
		 
}
*/

/*
#include <iostream>
int main()

{   
    double d;
    int x;
	std:: cout<< sizeof(x)<<"\n"
	<< sizeof(float)<<"\n"
	<< sizeof(bool)<< "\n"
	<< sizeof(long long)<<"\n"
	<< sizeof(10ll)<<"\n"
	<< sizeof(char)<<"\n"
	<< sizeof(10.5)<<"\n";
	return 0;
}

*/


/*
#include <iostream>
using namespace std;
const double Pi =3.14; // const variable can not be modified
int main()
{
	int r;
	cout<< "Enter the radiusd \n";
	cin>> r;
	cout<< "Area is" << (Pi * r*r);
	return 0;
}
*/



// -----------------------------------------------auto keyword is used for variable declaration
/*
#include <iostream>
#include <typeinfo>
using namespace std;

int main()

{
	auto a = 10; // constants ie 10, 32.0 is called as literals.
	auto b = 32.0; // decimals literals are assigned as doubles and not float.
	cout<< a "\n" << b;
	cout << typeid(a).name()<<"\n"
	     <<typeid(b).name();
	     
	return 0;   
	
	/*
	Advantages of auto
	
	1. No conversion happens when auto is used.
	   float x = 2.3; // Double literal converted to float
	   auto y = 2.3; // Type of y is double.
	
	2. If a fun. returns auto, its return type can be changed without 
	   worrying about prototype change.
	   
	3. Can be very helpful for lengthy types, especially STL iterators.
	   vector <int>::iterator i; can be replaced with auto i;
	   
	4. Lambda expressions
		
}
*/

/* 
//Input and output in cpp

#include <iostream>
using namespace std;

int main()
{
	string name;
	int x, y;
	
	cout<< "enter your name\n";
	getline(cin, name); // with getline, we can read the whole input
	
	cout<< "enter the value of x and y\n";
	cin>> x >> y;// with cin, input is separated if we put space in input.
	cout<< "hi "<<name<<" the sum of x and y is "<<(x+y);
	return 0;	
}
*/


// ---------------------------------------------------type conversion of data types in cpp
/*

#include <iostream>
using namespace std;
// -----------If we  have an expression of multiple types, below rules are followed.

// While converting the data types we might lose some data. ex: float to int ( loss of decimal data ).

// Main Rules: conversion 
// Bool -> char -> short int -> int -> unsingned int -> long -> long long -> float -> double -> long double.

int main()
{
	/* 
	//notmal example
	
	int x = 12;
	char y = 'A';
	cout<< (x+y)<<"\n";// output will be 77 because the ASKII value of A is 65	
	float z = 5.5;
	cout<< (x+z);
	return 0;
	*/
	
	// Without explecit conversion
	/*
	int x = 15, y = 2;
	double z = x/y; //the output should be 7, but we may think we could get 7.5 because we are assigning to "double". 
	                //But the operands were integers so output will be an int.
	cout<< z;
	return 0;
	*/
	
	/*
	// With explecit conversion | C style conversion
	// Main rules are applied here.
	
	int x = 15, y =2;
	double z = double(x)/y; // here integer is converted into double and the value assigned into z is double.
	cout<< z; // the output should be 7.5
	return 0; 
	*/
	
	/*
	// With c++ style explecit conversion
	int x =15, y=2;
	double z = static_cast<double>(x)/y; // it checks the validity of conversion,( means conversion is possible or not) if not it won't allow and will throw a compilation error.
	                                     // dynamic_cast is also a method to convert but it is used in special cases. 
	cout<< z;
	return 0;
	
}
*/

/*
#include <iostream>
using namespace std;
// Escape sequence in C++

int main()
{
	cout<< "\"geekforgeek\"\n"; // here we printed geekforgeeks enclosed with double quotes
	cout<< "hello \\ himanshu \\ pundir\n"; // double backslash to get a single backslash is a valid excape sequence.
	
	string s = "C\\hp\\any_path.txt";// real world application of escape sequences, to show a directory or a path on screen.
	cout<< s;
	return 0;
}
*/



// -------------------IO manipulation ( changing the default method to print things )
/*
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	bool a = true;
	cout<< a<<" \n"; // the default result is 1 for true  and  0 for false
	
	cout << boolalpha ; // boolalpha is flag.
	cout << a<< "\n";  // the output should be true and not 1.
	
	cout << noboolalpha; // for all the coming values, we will get 1 for true and 0 for false.
	cout <<  a << "\n";
	
	/*
	examples of flag:
	                 1: hex( for hexagonal ) 
	                ,2: oct( for octal )
					,3: dec (for decimal)
					
	                ,4: showbase ( it will prefix octal and hexadecimal numbers with their respective numbers ie, for octal "0" for hexadecimal "0x".
	                ,5: noshowbase ( couterpart of showbase)
	                  
	                ,6: showpos ( it will  add a "+" infront of positive numnbers.)
	                ,7: noshowpos ( counterpart of noshowpos)
	                  
	                ,8: uppercase (the character will turn into uppercase)/
	                ,9: nouppercase ( counterpart of uppercase)
	*/
	
// formating manipulation of output

/*
	1: setw(n)    // w (width) 
	2: setfill(c) // c (a character to pass in setfill)
	3: std::left  // left allign ( of data, not * )
	4: std::right // right allign
//_________________________________________________	

	int b = 1212;
	int c= 0;
	
	cout<< "enter the value of c \n";
	cin>> c;
	
	cout<<std::setw(5); // we need to specify setw for evey operand.
	cout<<std::setfill('*');
	cout<< left; // we need to specify the allignment for every operand but the default allignment is right.
	
	cout<< b<<"\n";
	
	cout<< setw(5);
	cout<< left;
	cout<< c<<"\n";
	
	return 0;
}
*/



	//------------------------------------- Introduction to if and else statement
/*
#include <iostream>
using namespace std;
int main()

{

	
	// Example: if a number is odd or even?
	int x;
	cout<< " enter a number \n";
	cin>> x;
	cout<< " the value of x is "<< x << "\n";
	if ( x%2==0)
	cout<<x <<" is the even number\n";
	else 
	cout << x <<" is the odd number\n";


	return 0;

}
*/



// -----------------------------------------------Example: if, else if and else 
/*
#include <iostream>
using namespace std;



int main ()
{
	int n;
	cout<< "Enter a positive number\n";
	cin>> n;
	if (n>0)
	cout<< n <<" is a positive number";
	else if ( n<0)
	cout<< n << " is negative numnber";
	else
	cout<< n <<" is not positive nor negative";
	return 0;
	
}

*/



//----------------------------------- Example: Nested if, else if and else
/*
#include <iostream>
using namespace std;



int main()

{
	int x;
	cout << "Enter a number\n";
	cin>> x;
	if (x > 0)
	{
		cout<< "number is positive\n";
		if(x%2==0)
		cout<< x << " is an even number\n";
		else
		cout << x << " is an odd number\n";
	}
	else if (x<0)
	{
	    cout<< "number is negative\n";
		if(x%2==0)
		cout<< x << " is an even number\n";
		else
		cout << x << " is an odd number\n";
	}
	else 
	cout<< x << " is not positive nor negative\n";
	
	return 0;
	
	
}

*/



//-------------------------------------- Example: of Switch statements and Cases
/*
#include <iostream>
using namespace std;



int main()
{
	int x = 0, y= 0;
	cout<< " Enter a choice\n R for right, L for left, U for up, D for down\n";
	char move;
	cin>> move;
	switch (move)
	
	{
		case 'R': x++;
		break;
		case 'L': x--;
		break;
		case 'U': y++;
		break;
		case 'D': y--;
		break;
		default: cout<< " Enter a valid choice\n";
	}
	
	cout<< x << " "<< y;
	return 0;
		
}
*/



//------------------------------------- Example: Question: which no. is the greatest?
/*
#include <iostream>
using namespace std;



int main()
{
	cout<< "Enter three numbers\n";
	int a,b,c;
	cin >> a>>b>>c;
	
	if ( a>=b and a>=c)
	cout<< a << " is the greatest number\n";
	else if ( b>=c and b>=a)
	cout<< b << " is the greatest number\n";
	else 
	cout << c << " is the greatest number\n";
	
	return 0;
}
*/



//---------------------------------- Example: Question: if a year is a leap year or not?
/*
#include <iostream>
using namespace std;



int main()
{
	int x;
	cout<< " Enter a Year to see if it is a leap year or not\n";
	cin>>x;
	if (x%4==0 and x%100 !=0 )
	cout<< x << " is a leap year\n";
	else if (x%400 == 0) 
	cout<<x << " is a leap year\n";
	else 
	cout<< x<<" is not a leap year\n";
	return 0;
	
	
}
*/



//---------------------------------------- Introduction to Functions
/*
#include <iostream>
using namespace std;



//------------------------Function declaration and defination

/* 
   There are two ways to use a function:
   
   1: Define first, then use
   2: Declare first, then use, then define   


   
                    // Example: of Method 1
                    
int getmax(int a, int b)  // <---- This is called [  Declaration ], the goal is tell the compiler, No. of parameters, Type of parameters and, The Retrun_Type.

{ 
    // This whole thing inside paranthesis is called [  Definition ]
     
	if (a>b)
	return a ;
	else 
	return b  ;
}

int main()
{
	int x,y;
	cout<<"enter the value of x and y\n";
	cin >> x >> y;
	cout << getmax(x,y)<< " is greater";
	return 0;
}
*/



//------------------------------------------Using Library function
/*

#include <iostream>
#include <cmath>
using namespace std;



int main()
{
	int a=2,b=4;
	//  a: the number, b: the power  
	cout<< pow (a,b)<<endl; // pow refers to power
	int x = 100;
	cout << log10(x);
	return 0;	

*/



// ------------------------------------------Default Arguments
/*
#include <iostream>
#include <cmath>
using namespace std;



void details(int id, string name= "na", string address = "na") // All normall arguments must be before default arguments else compiler will throw an error 
{
	cout<<"id is " << id << " \n";
	cout<<"name is " << name<< "\n";
	cout<<"address is "<< address<<"\n";
}

// default argument values can be provided  either in declaration or in definition
int sum( int a, int b=1, int c=10, int d=100); // [  Declaratino  ]


int main()
{
	details(31);
	cout<<"\n";
	details(02);
	cout<<"\n";
	details(03,"Himanshu","roorkee");
	cout<<"\n";
	
	
	    // default argument values can be provided  either in declaration or in definition
	
	cout<< sum (10)<< "\n";
	cout<< sum (1,2,2)<< "\n";
	return 0;
	
}
	int sum (int a, int b,int c,int d)
	{
		return (a+b+c+d);   // [ Definition ]
	}

*/



// ----------------------------------Inline Function

/*
 use for small function
 better than macros
 Useful for only optimization <-- Inline is more like a suggestion to the compiler ( choice of compiler to take this suggestion or not )
*/



//----------------------------------- Function overloading 
/*
#include <iostream>
#include <cmath>
using namespace std;


// functions name can be same
// function overloading means we create different functions for different kind of inputs but a ( same ) meaningful name can be given to those functions 
// we can not overload a function based only on the retrun type ( their parameters should be different or the no. of the parameters should be different ).



int getmax( int x, int y) // for two numbers
{
	return (x>y)? x:y ; // <--- this is the formula
}

int getmax ( int x, int y, int z) // for three numbers
{
	return getmax(getmax(x,y),z);
}

int getmax ( int x, int y, int z, int h, int i) // for five numbers ( not four )
{
	return (getmax(getmax(getmax(getmax(x,y),z),h),i));
}



void print (int i)
{
	cout<< i << "\n"; 
}

void print (double d)
{
	cout << d << "\n";

}

void print( string s)
{
	cout<< s << "\n";
}


void print ( char c)
{
	cout << c << "\n";
}



 
int main()
{
	int a =10, b=12, c=13, d =14, e= 15;
	cout<< getmax ( a,b,d)<< "\n";
	cout << getmax(a,b,c,d,e)<<"\n";
	
	print('a'); // this will call the approprite function accoring to the data type of the passed parameter.  
	return 0 ;
}

*/


// ----------------------------- Practice questions ( first digit of a number) 

/*
#include <iostream>
using namespace std;

int fun (int x,int y,int z)
{
	cout<< x<<"\n"<< y<<"\n"<<z<<"\n";
}

void fun2 ( )
{
	static int x = 1; 
	int y = 1; // The local variable which are not static, they are made every time when we make a function call.
	x++;
	y++;
	cout<< x<< " " << y << endl;
}


int main()
{
	int i =2;
	fun ( ++i, ++i,++i); 
	// the output is compiler dependent ( we should never write such code #badprogramming)

	
	fun2();
	fun2();
	fun2();
	// the output should be 2,2  3,2  4,2
	
	return 0;
}	   
*/



// ---------------------------------------------[ Inroduction to loops ]


//  ---------------------------------------While loop 

// ------ Practice questions ( finding the first digit of a number) 

// concept: divide multiple digit no. by 10 until we get a number smaller than 10.
/*

#include <iostream>
#include <cmath>
using namespace std;

int firstDigit (int  x)
{
	while (x>10)
	{
		x = x/10;
	}
	return x;
}

int main()
{
	int x;
	cout<< "enter a no. to find its first digit \n";
	cin>> x;
	cout<< firstDigit(x)<<"\n";
	return 0;
}

*/


/*   ---------------------------------------For loop 

// For loop  ::  Fixed syntex ( initialization; condition; change loop variable) { .... }

// we can use for loop everywhere we use while loop 
// For loop is made better, it is known as " Each for loop ".


#include <iostream>
#include <cmath>
using namespace std;



int main()
{
	for ( int i =0; i<3; i++)
	cout<< "Himanshu pundir" << i << endl; // This will give a valid output
/*	
	for ( int i =0; i<3; i++)
	cout<< "Himanshu pundir" << i << endl;
	cout << i;                 // This will give an ERROR, becuse the " i " variable is not accessible outside the loop scope.
*/

/*  
    int i;                     // This will make the previous error gone. because now we declared the " i " variable outside the loop. 
    
    for ( int i =0; i<3; i++)
    cout << "Himanshu pundir" << i << endl;
    cout<< i;	
	return 0;
	
}	
	
*/

//---------- Question: Write a program to give table of a number entered by the user upto 100. 

/* 
#include <iostream>
#include <cmath>
using namespace std;


int table()
{
	int i=1, n;
	cout << "Enter a number to get its table upto 100\n";
	cin>> n;
    
	cout << "Table of " << n <<" is\n"; 
	for (int i=1;i<=100;i++)
	{		
		cout << n << "*" << i <<"=" << n*i << "\n";
	}
	return 0;

}

int main()
{
	table();
	return 0;
}

*/


//   ----------------------------------------- Do while loop 

/* syntax: 

            do {

                // statement to be executed inside the loop
                
                // statements in do, will execute atleast 1 time even if the while condition is false.
                
               }
               
            while ( condition);
            
*/
// example:
/*
#include <iostream>
using namespace std ; 
int main()
{
	int i = 4; // here condition is False.. but we will get Himanshu as an output.
	do
	{
		cout<< "Himanshu" << "\n";
		i++;
		
	}
	
	while ( i<3);
	return 0;
	
}
*/


// --------------------------------------- Practice questions
/*
#include <iostream>
using namespace std;

int main ( )

{
	
	int n;
	cout<< "Enter a number\n";
	cin>> n;
	cout<< " you entered " << n << "\n";
	int x=0;
	while ( x<=n)
	{
		cout<<  x <<  " Himanshu Pundir is the best"<<"\n" ;
		x=x+1;
	}
	cout<< " The program is over\n";
	return 0;
}
*/


// ------------------------------------------------------Nested loops 
// nested loops means loops within loop

// Question: Write a program to get table of the no. user gives upto 10 also to get table of the numbers of (no.).
/*  

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cout<<"enter a number\n";
	cin>> n;
	for (int i=1;i<=n;i++)
	{
		for (int x=1;x<=10;x++) // this inner loop will work n*10 times  
		{                       // Inner loop will complete itself until the condition of inner loop will not get false.
			cout<<i*x << " ";
		}
		cout<< "\n";
		
	}
	
	return 0;
}
*/

// ---------------- Question: Guess the output
/*
#include <iostream>
using namespace std;

int main()
{
	for(int i=1; i<3; i++)
	{
		int j =1;
		
		while (j<3)                      // This loop will work n times for every value of i.
		{
			cout<< i <<" " <<j <<"\n";   // Once the control comes inside this inner loop: it can't go outside till all incremention are done and conditions proves false.
			j++;
			
		}
		cout<< "Himanshu pundir\n";
	}
	return 0;
}
*/

//----------------------------------------------------- Break 
/*
#include <iostream>
using namespace std;

// find out smallst divisor of a number other than 1

int main()
{
	long int x;
	cout<< "enter a number to findout its smallest divisor other than 1\n";
	cin>> x;
	
	for (int i = 2;i<=x;i++)
	{
		if (x%i == 0)
		{
			cout<<" the smallest divisor is "<< i;
			break;
		}
	}

	return 0;
	
}
*/

//----------- question: guess the output of this program

/*
#include <iostream>
using namespace std;

int main()
{
	int i =1;
	while (i<=5)
	{
		if (i ==3)
		break;
		cout<<i<<" ";
		i++;
		
	}
	cout<< i << " ";
	return 0;
}
*/

//----------------------------------------------------- Continue

// Print all numbers smaller than or equal to n that are not multiple of x
/*
#include <iostream>
using namespace std; 
int main()
{
	int n,x;
	cout<< " enter a number \n";
	cin>> n; 
	cout<< " enter the value of x\n";
	cin>> x;
	
	for (int i = 1;i<n;i++)
	{
		if (i%x == 0)
		continue;   // continue will skip to the next statement when condition in If becomes true. as a result .. multiple of x will not get printed.
		cout<< i << " ";
		
	}
	return 0;
}
*/



// --------------------------------------------------- Patterns

/*
#include <iostream>
using namespace std;
int main ()
{
	for (int i=1;i<=5;i++)
	{
		for ( int i=1;i<=5;i++)
		{
			cout<<'*';
		}
		cout<< '*'<< endl;
	}
	return 0;
}
*/

// -------------- Inverted triangle
/*
#include <iostream>
using namespace std ;
 
int main()
{
	int i = 1;
	int n; 
	cin>>n;
	while(i<=n)
	{
		int j=1;
		while (j<=n-i)
		{
			cout<< " ";
			j++;
		}
		while(j<=n)
		{
			cout<< "*";
			j++;
		}
		cout<<"\n";
		i++;
	}
	return 0;
}
 */

// Question: count no. of digit in a given number 
/*
#include <iostream>
using namespace std;

int main()
{
	int i;
	cout<< " enter a number\n";
	cin>> i;
	int count=0;
	
	if (i==0)
	{
		cout<< 1;
	}
	else
	{
		while(i>0) // for number "0" the output will be 0 because ... 0/any number is not defined. This is an anomly.
		           // we can avoid this condition by adding a if statement specifically for 0.
	{
		i=i/10;
		count++;
	}  
	cout<< count;
	}	
}
*/

// Question: find out all divisor of a given number
/*
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<< "enter the value of n to find out its divisors\n";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		if (n%i==0)
		{
			cout<< i << "\n";
		}
		
	}	
}
*/

// Question: write a program to find factorial of a number
/*
#include <iostream>
using namespace std;

int main()
{
	int n=5,m=6, ans,result;
	while(n>0)
	{
		ans = ans * n;
		n--;
	}
	cout << ans <<"\n";
	
}
*/

// Question: Write a program to find the greatest common divisor of two number.
/*
#include <iostream>
using namespace std;

int main()
{
	int a,b,gcd;
	cout<<"enter the value of a and b\n";
	cin>> a>>b;
	
	int x;
	if (a>b)
	x = a;
	else 
	x= b;
	
	for (int i=1;i<=x;i++)
	{
		if (a%i ==0 and b%i==0 )
		{
			gcd = i;
		}
	
		 
	}
		cout<< "the gcd is " << gcd << endl;
}
*/

// Question: Find the least common multiple of two numbers 
/*
#include <iostream>
using namespace std;
int main()
{
	int a,b,i,start, end;
	
	cout<<"Enter the value of a and b\n";
	cin>> a >> b;
	end = a*b;
	cout<< "the end is "<< end << "\n";
	
	start = max(a,b);
	
	
	cout<<"max number is "<<start<<"\n";
	
	int ans= start;
	
	for (i=start;i<=end;i++)
	{
		if ( i%a ==0 and i%b==0)
		{
		    ans = i;
		    break;
		}
		
	}
	cout<<"LCM is " << ans <<"\n";
	
	return 0;
}
*/

// Question: Write a program for --------[ febonacci series ] ----------for the input provided by a user.

// This program is also valid for 

// -------------------------  Find the number of ways to rech the top of n number of stairs( you can skip max 1 step).

/*
#include <iostream>
using namespace std;
int main()
{
	int i = 0, j=1,n,x;
	cout<< " enter a number to find its fibonacci series\n";
	cin>> x;
	cout<< " 1 "; // This will show complete fibonacci series for finding the concept of the series
	
	// --------- The below program will give correct sequence of fibonacci series.
	
	]
	for (int f = i; f<x; f++)
	{
		if( x==0)
		{
			cout<< 0 ;
		}
		
		
		else if (x==1)
		{
			cout<< 1 ;
		}
		
		else
		{
			n= i+j;
		    cout<< n <<" ";
		    i=j;
		    j=n;
		}
	}
	
	return 0;
}
*/

// Question: Write a program to find if the given number is a prime number or not; using both FOR and WHILE loop.

//----- Using WHILE loop

/*
#include <iostream>
using namespace std;
int main()
{
	// A return 0 means that the program will execute successfully and did what it was intended to do.
	
	
	int n;
	cout<< "enter a number\n";
	cin>> n;
	if (n== 0 or n== 1)
	{
		cout<< "Neither a Prime number nor a Composite number\n";
		return 0; // This return 0 statement will end the program successfully.
	}
	int i =2;
	while (i<n)
	{
		if (n%i==0)
		{
			cout<< n<< " is not a Prime number\n";
			return 0;   // This return 0 statement will end the loop successfully and return to if statement. worked like a break statement.
		}
		i++;
	}
	cout<< n<<" is a Prime number\n";
	return 0;
}
*/

// ------ using FOR loop

/*
#include <iostream>
using namespace std;

int main()
{
	int n, flag =0; 
	cin >> n;
	
	if (n==0 or n==1)
	
	{
		cout<<"Neither a Prime number nor a composite number\n";
		return 0;
	}
	
	for (int i=2;i<n;i++)
	{
		if (n%i==0)
		{   
		    
			cout<< "Not a Prime number\n";
			flag = 1;     // This statement is the key point
			break;
			
		}
	
	}
	if (flag ==0)
	cout<<"Prime number\n";	
	return 0; 
	
}
*/

// Question: Write a program to write the table of a given number upto given number.

/*
#include <iostream>
using namespace std;
int main()
{
	int a,b,result;
	cout<<"enter the value of a and b\n";
	cin>>a>>b;
	
	for (int i=1;i<=b;i++)
	{
		result = a*i;
		cout<<a << '*'<<i <<"="<< result <<"\n";
	
	}
	return 0;
}
*/

// ------Question: Write a program to convert binary number into decimal numbers

/* concept: Binary no. = 101

         Conversion   = (once digit * 2^0) + (tenth digit * 2^1) + ( hundredth digit * 2^2)
			          = ( 1 * 1) + ( 0*2 ) + ( 1*4)
			          =1+0+4
			          =5

*/

// Program 

/*
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	 int binary_no, decimal_no=0, power=1, last_digit; // power =1 because, 2^0 = 1
	 cout<< "enter a binary number\n";
	 cin>>binary_no;
	 
	 while (binary_no > 0)
	 {
	 	last_digit = binary_no % 10;
	 	decimal_no = decimal_no + (last_digit * power);
	 	
	 	binary_no = binary_no/10;
	 	power = power * 2; 	
	 }
	 cout<< decimal_no <<endl;

}
*/

// Question: Write a program to find a prime number next to number n given by a user.

/*

int nextprime(int n)
{
	n++;
	while(true)
	{
		int i;
		for (i=2;i<n;i++) // to check if the number is a prime number
		{
			if(n%i==0)
			break;
		}
		if (i==n)return n; 
		n++;
		
	}

}


int main()
{
	int n;
	cin>>n;
	cout<<nextprime(n);
	return 0;
	
	
}

*/

// ---------------------------------------------------------- Next file " intermediate conepts of cpp "
























 
