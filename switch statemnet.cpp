#include<iostream>              
//preprocessor directive
using namespace std;
int main()                     
//main function
{                           
//opening braces
	int Week_num;
	//declare a variable name
	cout<<"Enter a Week_num: ";
	//print week number 
	cin>>Week_num;
	//take input from user
	switch(Week_num)
	{
	case 1:
	cout<<"	Monday";
	//prnit monday ,if case 1 is true
	break;
	case 2:
	cout<<"Tuesday";
	//print tuesday ,if case 2 is true
	break;
	case 3:
	cout<< "Wednesday";
	//print wednesday,if case 3 is true
	break;
	case 4:
	cout<<"Thursday";
	//print thursday,if case 4 is true
	break;
	case 5:
	cout<<"Friday";
	//print friday, if case 5 is true
	break;
	case 6:
	cout<<"Saturday";
	//print saturday,if case 6 is true
	break;
	case 7:
		cout<<"Sunday";
		//print sunday,if case 7 is true
	break;
	default:
	cout<<"Invalid Input";
	//invalid input if week_ num is not between (1_7)
}
return 0;
}
//closing braces
