
//------------------------------------------------------------- Array in cpp

//syantax: data type of array,name of array,[size of array]= { elements of array( can be a variable also ) };
// some points: if we dont tell the size of array while declaration but we initialize n no. of elements; then compiler will itself make the size = n;
// array elements are always stored in a continues loacation.
// lets say if we put size of an array 5 and initialize only 2 elements then compiler will itself initialize other 3 elements as 0.

// Alternate way to initialize an array:  ( Method name: Initializer list initialization) can be used for normal variable also.
// int arr[3] = {123, 1234, 12345} ---is equivalent to--- int arr[3] {123, 1234, 12345}

// Similarly, int x {10} ---is equivalent to--- int x = 10


//-------------------------------Sizeof an Array

/*
#include <iostream>
using namespace std;
int main()
{ 
 

    int n;
	
	cout<<"enter the size of the array\n";
	cin>> n;
	
	int arr[n]={2,3,4,50,0};
	cout<< sizeof(arr)<<endl;
	
	n = sizeof (arr)/sizeof(arr[0]); // no. of elements in the array = size of the array / size of an elemet( at index 0 )in the array.
	
	cout<<n;	
	return 0;	
} 

*/

// ------------------------------------------------ Array Traversal

// using Two methods ( both using for loop and Range based for loop )

/*
// METHOD 1: using normal for loop

#include <iostream>
using namespace std; 
int main()
{
	int sample_array [12] {1,2,3,4,5,6,7,8,9};
	cout<< "The size of the array is " << sizeof sample_array / sizeof sample_array [0]<< "\n";
	int x = sizeof sample_array / sizeof sample_array [0];
	
	for (int i = 0;i<x; i++)
	    {
	    	cout<< sample_array [i] << " ";
		}
	return 0;
}


// METHOD 2: using Range based for loop
// Range-based for loop in C++ is added since C++ 11.  

#include <iostream>
using namespace std;
int main()
{
	int array[5]={1,2,34,4,5};
	for (int x:array)   // every element of this array will be assigned to this variable x, one by one.
	{
		cout<< x << " "; // this statement will print every value of x, one by one.
	}
	return 0;
}
*/

// -------------------------------------------- Modification During Traversal 

// Question: Print twice the value of elements in an array.

// using 2 methods ( both using for loop and Range based for loop )
/*
// METHOD 1: using normal for loop
#include <iostream>
using namespace std; 
int main()
{
	int array[3]{1,2,3};
	for (int i; i<3;i++) // i less than 3, because I already know the array size.
	{
		cout<< array[i] << ", ";
		for (int i;i<3;i++);
		{
			cout<<"twice will be "<< array[i]*2 << " \n";
		}
	
	}
	return 0;
}

// METHOD 2: using Ranged based for loop

#include <iostream>
using namespace std;
int main()
{
	int array[3] {1,2,3};
	for (int x:array)
	{
		cout<< x*2<<"\n";
	}
	return 0;
}
*/

// ---------------------------------------- Different Types of Arrays
/*
There are Two types of arrays in c++

1:  Fixed sized arrays :-

                   --->  Allocated in Function call stack. ( memory is no more when function call is over )
                         int arr[100];
                         int arr[n];
                         int arr[] = {10,20,30};
                         
                   --->  Allocated in Heap.  ( memory is still available when function call is over )
                         int *arr = new int[n];

    
2:  Dynamic sized arrays :-

                   --->  Vector in C++ Standard template library 
                   
// In python language List is an example of dynamic sized array.
*/

// Question: find if an array is sorted or not

/*

#include <iostream>
using namespace std;

bool sorted_or_not(int n, int array[])
{
	for (int i = 1;i<n;i++)
	{
		if (array[i] < array[i-1])
	    return false;
	}
	
	return true;
	
}

int main()
{
	int n;
	cout<< "enter the no. of elements in the array\n";
	cin>> n;
	
	cout<< "enter the elements in the array\n";
	int array [n] ;
	{
		for(int i = 0; i<n;i++)
		cin>> array[i];
	}
	
	if (sorted_or_not(n,array)==true)
	cout<< "Sorted\n";
	else
	cout<<"Not Sorted\n";
	return 0;	
	
}
*/

// Question: Find the maximum elements in an array.

/*
#include <iostream>
using namespace std;

int find_max(int array[],int n) // Function to find the max element 
{
	
	int max = array[0];
	for (int i=0; i<n; i++)
	{
		if (max < array[i])
		max = array[i];
	}
	
	return max;
}

int main()
{
	int n;
	cout<<"Enter the total elements of the array\n";
	cin>>n;
	
	int array[n];
	cout<<"Enter the elemets of the array\n";
	for (int i = 0; i<n; i++)
	cin>>array[i];
	
	int max = find_max(array, n); // Calling the function in variable max;
	cout<<"The max elemet of the array is " << max << "\n";
	
	return 0;
	
}
*/

//------------------------------------------------ References in Cpp

/*

//------------------------- Introduction
#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	int &y = x; // Here by adding ampersend(&) with y means we are referecing y. 
	            //assigning x to &y means, we are referencing y to x;
	            
	cout<< x << "\n";
	cout<<y << "\n";
	x = x + 5;
	cout<< x << "\n";
	y += 5;             // if we change y, x will change;
	cout<< y<<"\n";
	
	x = x + 5;
	cout<< y << "\n";  // if we change x, y will change;
	
}
*/
// ----------------------- Applications

/*
// --------> Application 1: To modify a passed parameter

#include<iostream>
using namespace std;

int swap(int &x, int &y)   ( if we remove " & " : the x and y will not swap because this x and y refer to a diff. location ) 
{
   int temp = x;             (NOTE: by default: Parameters are passed by value in cpp )
   x = y;
   y = temp;	           ( here x and y are same variables, as in the main funcion as explained in the above eg.)
}

int main()
{
   int x = 10, y = 15;
   swap(x,y); 
   cout<< x <<" " << y;
   return 0;
}
*/


/*
// --------> Application 2: Avoiding copy of large objects during funcion calls.

#include<iostream>
#include <vector>

using namespace std;

void print(vector<int> &v) // if we remove "&" then a new copy of 1000 elements will be created in a new vector v.
                           // but if use reference then it will save memory and cpu time.

// ---> void print(  const  vector<int> &v) <--- if our purpose is just to access the elements and not to modify, then we add " const ".
	for(auto x:v)           
	cout<<x<<" ";
	
}

int main()
{
    vector<int> v;
    for(int i= 0; i<1000; i++)
    v.push_back(i);
    print(v);
    return 0;	
}
*/

// --------> Application 3: Modification in for each loop.

/*
#include <iostream>
#include <vector>
using namespace std;

int main()
{

//---------> Our goal is to modify the vector <---------

	vector<int> vect{10,20,30,40}; 
	
    for (auto &x : vect) // -------- without "&" with x the vector will not change. 
                         // -------- because then x is just a copy of the elements of the vector.
                         
    x = x+5;  // here by changing x we can change the vector because x is referencing to the element of the vector ( because it is just an alias; sharing same memory location ).
    
    for (auto x : vect) 
    cout<< x <<" ";
    
    return 0;
}
*/

/*
// --------> Application: applying the learning of application 1 and 2.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <string> vect{"apple","orange","banana"};
	for(const auto &x : vect)
	cout<< x << " ";
	return 0;
}
*/

// -----------------------Practice Questions

// Question 1: Guess the output

/*
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int x = 20, z = 30;
	int &y = x; 
	
	y = z;                // reference can only be assigned once. But their values are mutable and can be reassigned.
	y = y + 5;
	cout<< x << " "<< y << " "<<z <<"\n";
	return 0;
}
*/

// Question 2: Guess the output

/*
#include <iostream>
#include <vector>
using namespace std;

int &fun()  // this function return the reference to a local static variable.  [ NOTE: Static variable exist when function call is over ]
{
	static int x = 10; // NOTE: We should never return reference to a non-static local variable. because non-static local variable does not exist when function call is over.
	return x;
}

int main();
{
	int &z = fun();
	cout<< fun() << " ";
	z = 30;
	cout<< fun();
	return 0;
}
*/

// ------------> SUMMARY: here are some important points about references.


// 1: Create an alias : references share same memory loacation, so it act as a second name for a variable with benefits.

// 2: Must be assigned when declared: references are internally implemented as constant pointer.

        /* this means:
        
            ----> Correct reference
            
            	int x = 10; // First we need a variable to reference to. 
	            int &y = x; 
        */
        
        /* this means:
        
            ----> Incorrect reference
            
            	int &y;     // We can't leave it unassigned. Also we need to create x before y.
	            int x = 10;  
	            y = x;
        */

// 3: Cannot refer to another location: it is not like pointer, Pointer can be changed to other memory locaion.

// 4: Cannot be NULL: ----> int &y = null <---- this is incorrect.

// 5: Safer and Easy to use: -------> if compared to pointer.












