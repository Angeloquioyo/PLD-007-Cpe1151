#include <iostream>
using namespace std;

int main()
{
	//Produce accept Five numbers and determine the sum of first and last number
	int num, sum = 0, Firstnum, Lastnum;
	int count = 0;
	
	//Do While loop
	
	do {
		
	cout << " Enter a number " << endl;
	cin>>num;
		
	if ( count == 0 ) {
		Firstnum = num;
	}
		sum += num;
		count++;
		
    if ( count == 5 ){
    	Lastnum = num;
	}
   
   }while ( count < 5 );
   
   
    //Determine the sum of First number and Last number
    sum = Firstnum + Lastnum;
    cout << " The sum of First number and Last number is:" << Firstnum + Lastnum << endl;
    
    return 0;
    
    
	}

