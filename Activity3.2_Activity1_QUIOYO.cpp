#include <iostream>
using namespace std;

int main(){
	int sum = 0;
	for (int i = 2; i <= 100; i += 2){
	sum += i;
	}
	cout << " The sum all the even integers form 2 to 100 is: " << sum << endl;
	
	return 0;
}
