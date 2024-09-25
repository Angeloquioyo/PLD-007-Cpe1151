#include <iostream>
using namespace std;

int main ()
{
	//Create a C++ program that identifies Genders
	char c;
	
	cout << " Enter F for Woman, M for Male:--> ";
	cin >> c;
	
	switch (c)
	{
		case 'M':
			case 'm':
			cout << "The Gender is a Male";
			break;
			
		
		case 'F':
		case 'f':
		    cout << " The Gender is a Female";
		    break;
		    
	    case 'O':
	    	case 'o':
	        cout << " This Gender is others";
	        break;
	        
	    
	        
	        default:
	        	cout << " Gender not Found ";
	        	break;
	}
	
	return 0;
}

