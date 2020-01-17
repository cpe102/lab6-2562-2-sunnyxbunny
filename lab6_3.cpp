#include<iostream>
using namespace std;

char before(char x){
	
	if(x>'Z'||x<'A'){
		x='0';
		}else{
			x=x-1;
			if(x<'A'){
				x='Z';
			}else{
				x=x;
			}
	}
	
	return x;
}


int main(){
	
	
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}


//A=65,a=97
//want +25