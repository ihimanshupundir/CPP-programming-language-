
//------------------------------------------------------------- Array in cpp

//syantax: data type of array,name of array,[size of array]= { elements of array( can be a variable also ) };
// some points: if we dont tell the size of array while declaration but we initialize n no. of elements; then compiler will itself make the size = n;
// array elements are always stored in a continues loacation.
// lets say if we put size of an array 5 and initialize only 2 elements then compiler will itself initialize other 3 elements as 0.

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
// using 2 methods ( both using for loop )

// method 1: using normal for loop
/*
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter the value of n\n";
	cin>>n;
	int array[n] = {1,2,3,4,5,6,7,8,9};
	
	int m = sizeof (array)/ sizeof (array [0]);
	
	for (int i = 0; i<m;i++)
	{
		cout<< array[i]<<" ";
		
	}
	return 0;
}
*/

// method 2: using range based for loop
// idky range based loop is not working 

#include <iostream>
using namespace std;
int main()
{
	int array[5]={1,2,34,4,5};
	for (int x:array)
	{
		cout<< x << " ";
	}
	return 0;
}












