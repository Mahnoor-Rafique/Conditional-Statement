/*Write a program that input the Marks  of a student and display his/her Grade according to the following criteria:
       Marks         Grade
       >=90           A
       80-89          B
       70-79          C
       60-69          D
       below 60       F
    (using if else if condition)*/
    #include <iostream>
    using namespace std;
    int main()
    {
    	//opening braces
    	int Marks;
	string Name="Warda Rafique \n";
	string Roll="bsf2205776 \n";
	string ID="\awardarafique82@gmail.com \n";
	cout<<Name;
	//Enter your name
	cout<<Roll;
	//Enter your roll
	cout<<ID;
	//Enter your email Id
	cout<<"Enter Marks"<<endl;
	//print your marks
	cin>>Marks;
	//input marks from user
	if(Marks>=90)
	{
		cout<<"Your Grade is A"<<endl;
		//Enter your Grade
	}
	else if(Marks>=80)
	{
		cout<<"Your Grade is B"<<endl;
		//Enter your Grade
	}
	else if(Marks>=70)
	{
		cout<<"Your Grade is C"<<endl;
		//Enter your Grade
	}
	else if(Marks>=60)
	{
		cout<<"Your Grade is D"<<endl;
		//Enter your Grade
}
    else
    {
    	cout<<"Your Grade is F"<<endl;
    	//Enter your Grade
    }
	return 0;
}
//cloding braces
    
