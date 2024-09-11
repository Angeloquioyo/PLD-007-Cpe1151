#include <iostream>
using namespace std;

int main ()
{
	cout<<"Angelo Quioyo"<<endl;
	cout<<"BSCPE 1st "<<endl;
	cout<<"CPE11S1"<<endl;
	// initialization of vriables
	float grade = 0;
	
	
	// input the values of the given variables
	cout<<"FINAL GRADE:";
	cin>>grade;

	
	//process grade computation
  
	if(grade>= 94 && grade<= 100){
		cout<<"Excellent"<<endl;
		cout<<"GPA calculated is 1.00"<<endl;
		cout<<"Fit to Graduate Magna Cum Laude"<<endl;
	}
	else if(grade>= 88.5 && grade<= 93.99){
		cout<<"Superior"<<endl;
		cout<<"GPA Calculated is 1.25"<<endl;
		cout<<"Fit to Graduate"<<endl;	
	}
	else if(grade>= 83 && grade<= 88.49){
		cout<<"Meritorious"<<endl;
		cout<<"GPA calculated is 1.50"<<endl;
		cout<<"Fit to Graduate"<<endl;
	}
    else if (grade>= 77.5 && grade<= 82.99){
   		cout<<"Very Good"<<endl;
    	cout<<"GPA calculated is 1.75"<<endl;
    	cout<<"Fit to Graduate"<<endl;
	}
	else if (grade>= 72 && grade<= 77.49){
		cout<<"Good"<<endl;
		cout<<"GPA calculated is 2.00"<<endl;
		cout<<"Fit to Graduate"<<endl;
	}
    else if (grade>= 65.5 && grade<= 71.99){
    	cout<<"Very Satisfactory"<<endl;
    	cout<<"GPA calculated is 2.25"<<endl;
    	cout<<"Fit to Graduate"<<endl;
	}
    else if (grade>= 61 && grade<= 65.49){
    	cout<<"Satisfactory"<<endl;
    	cout<<"GPA calculated is 2.50"<<endl;
    	cout<<"Fit to Graduate"<<endl; 	
	}
    else if (grade>= 55.5 && grade<= 60.99){
    	cout<<"Fair"<<endl;
    	cout<<"GPA calculated is 2.75"<<endl;
    	cout<<"Needs more Improvement"<<endl;
	}
    else if (grade>= 50 && grade<= 55.49){
    	cout<<"Passing"<<endl;
    	cout<<"GPA calculated is 3.00"<<endl;
    	cout<<"Needs more Improvement"<<endl;
	}
    else if (grade>= 0 && grade<= 49.99){
    	cout<<"Failed"<<endl;
    	cout<<"GPA calculated is 5.00"<<endl;
    	cout<<"Womp Womp"<<endl;
	}

return 0;



}

