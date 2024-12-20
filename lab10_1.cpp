#include<iostream>
using namespace std;

int main(){
	int count[5] = {};
	string grade;
	int n = 1;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << n << "]: ";
		cin >> grade; 
		if(grade == "0") { 
		    break;
		}
		
		if(grade == "A"){ // if grade is A
			count[0]++;
			n++;
		}else if(grade == "B"){ // if grade is B
			count[1]++;
			n++;
		}else if(grade == "C"){
		    count[2]++;
		    n++;
		}else if(grade == "D"){
		    count[3]++;
		    n++;
		}else if(grade == "F"){
		    count[4]++;
		    n++;
		}
		else{
	        cout << "Wrong input. Please input again.\n";
		} 
	}while(grade != "0");
	
	
	cout << "In total "<< n-1 << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	
	return 0;
}