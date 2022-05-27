//Programming a test with alternatives in C ++ language.
//Initialization
#include <iostream>
using namespace std;


int main()
{
	int x,points;//use int for numbers
	points=0;//i initialize points with value 0
	
	cout<<"\t\n\n\                         WELCOME!!!"<<endl;
	cout<<"\nIn the following questions choose one of the numbers (1,2,3,4)."<<endl;
	
	do//we use do while cycle. This cycle is executed whenever the condition is true
	{
		cout<<"\nWhat is the correct syntax to give 'Hello World' in C ++?"<<endl;
		cout<<"1. Console.WriteLine('Hello World')"<<endl;
		cout<<"2. print ('Hello World')"<<endl;
		cout<<"3. cout << 'Hello World'"<<endl;
		cout<<"4. System.out.println('Hello World') \nYour answer:"<<endl;
		cin>>x;// the user selects the alternative
		if((x<1)||(x>4))// use the if else loop to see which of the answers is correct
		{
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		    cout<<"Wrong number! Please provide the correct alternative."<<endl;//if you choose a number other than 1,2,3,4, the question returns
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;	
		}
		else
		{
			if(x==3)// if the number selected by the user is 3
			{
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Correct!"<<endl;// then the screen will appear correct
				cout<<"You got 1 point."<<endl;// for each correct answer 1 point is earned
				points+=1;// points will be added one by one for each correct alternative
				cout<<"So far you have: "<<points<<" points."<<endl;// the number of points collected from the beginning of the test is displayed
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			}
			else
			{
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Wrong!"<<endl;//if the answer is different from 3 the error is displayed on the screen
				cout<<"You got 0 points."<<endl;// wrong answers have o points
				cout<<"The correct answer is 3."<<endl;
				points+=0;//the value is added by 0
				cout<<"So far you have: "<<points<<" points."<<endl;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			}
		}
	}
	while((x<1)||(x>4));// the loop is repeated if the user does not enter one of the numbers
	{
		
		do
	{
		cout<<"\nHow do you create a variable with the numeric value 5?"<<endl;
		cout<<"1. int x = 5"<<endl;
		cout<<"2. num x = 5"<<endl;
		cout<<"3. x = 5"<<endl;
		cout<<"4. double x = 5 \nYour answer:"<<endl;
		cin>>x;
		if((x<1)||(x>4))
		{
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		    cout<<"Wrong number! Please provide the correct alternative."<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;	
		}
		else
		{
			if(x==1)
			{
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Correct!"<<endl;
				cout<<"You got 1 point."<<endl;
				points+=1;
				cout<<"So far you have:"<<points<<" points."<<endl;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			}
			else
			{
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Wrong!"<<endl;
				cout<<"You got 0 points."<<endl;
				cout<<"The correct answer is 1."<<endl;
				points+=0;
				cout<<"So far you have: "<<points<<" points."<<endl;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			}
		}
	}
	while((x<1)||(x>4));

		do
	{
		cout<<"\nWhat method can be used to find the length of a string?"<<endl;
		cout<<"1. getLength()"<<endl;
		cout<<"2. getSize()"<<endl;
		cout<<"3. len()"<<endl;
		cout<<"4. length() \nYour answer:"<<endl;
		cin>>x;
		if((x<1)||(x>4))
		{
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		    cout<<"Wrong number! Please provide the correct alternative."<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;	
		}
		else
		{
			if(x==4)
			{
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Correct!"<<endl;
				cout<<"You got 1 point."<<endl;
				points+=1;
				cout<<"So far you have:"<<points<<" points."<<endl;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			}
			else
			{
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Wrong!"<<endl;
				cout<<"You got 0 points."<<endl;
				cout<<"The correct answer is 4."<<endl;
				points+=0;
				cout<<"So far you have: "<<points<<" points."<<endl;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			}
		}
	}
	while((x<1)||(x>4));
		
	do
	{
		cout<<"\nWhich operator can be used to compare two values? "<<endl;
		cout<<"1. ><"<<endl;
		cout<<"2. =="<<endl;
		cout<<"3. <>"<<endl;
		cout<<"4. = \nYour answer:"<<endl;
		cin>>x;
		if((x<1)||(x>4))
		{
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		   cout<<"Wrong number! Please provide the correct alternative."<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;	
		}
		else
		{
			if(x==2)
			{
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Correct!"<<endl;
				cout<<"You got 1 point."<<endl;
				points+=1;
				cout<<"So far you have:"<<points<<" points."<<endl;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			}
			else
			{
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Wrong!"<<endl;
				cout<<"You got 0 points."<<endl;
				cout<<"The correct answer is 2."<<endl;
				points+=0;
				cout<<"So far you have: "<<points<<" points."<<endl;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			}
		}
	}
	while((x<1)||(x>4));

		do
	{
		cout<<"\nHow do you start writing the if loop in C ++?"<<endl;
		cout<<"1. if (x > y)"<<endl;
		cout<<"2. if x > y then "<<endl;
		cout<<"3. if x > y:"<<endl;
		cout<<"4. if[x>y] \nYour answer:"<<endl;
		cin>>x;
		if((x<1)||(x>4))
		{
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		    cout<<"Wrong number! Please provide the correct alternative."<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;	
		}
		else
		{
			if(x==1)
			{
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Correct!"<<endl;
				cout<<"You got 1 point."<<endl;
				points+=1;
				cout<<"So far you have:"<<points<<" points."<<endl;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			}
			else
			{
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Wrong!"<<endl;
				cout<<"You got 0 points."<<endl;
				cout<<"The correct answer is 1."<<endl;
				points+=0;
				cout<<"So far you have: "<<points<<" points."<<endl;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			}
		}
	}
	while((x<1)||(x>4));

		do
	{
		cout<<"\nFrom the given alternatives what is the correct way of writing a comment?"<<endl;
		cout<<"1. * / comment *"<<endl;
		cout<<"2. ** comment **"<<endl;
		cout<<"3. / * comment * /"<<endl;
		cout<<"4. {comment} \nYour answer:"<<endl;
		cin>>x;
		if((x<1)||(x>4))
		{
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		    cout<<"Wrong number! Please provide the correct alternative."<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;	
		}
		else
		{
			if(x==3)
			{
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Correct!"<<endl;
				cout<<"You got 1 point."<<endl;
				points+=1;
				cout<<"So far you have:"<<points<<" points."<<endl;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			}
			else
			{
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Wrong!"<<endl;
				cout<<"You got 0 points."<<endl;
				cout<<"The correct answer is 3."<<endl;
				points+=0;
				cout<<"So far you have: "<<points<<" points."<<endl;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			}
		}
	}
	while((x<1)||(x>4));

		do
	{
		cout<<"\nUsing the break statement you can: "<<endl;
		cout<<"1. We interrupt the cycle"<<endl;
		cout<<"2. Overcoming the cycle residue in the next step"<<endl;
		cout<<"3. The beginning of the cycle"<<endl;
		cout<<"4. There is no function \nYour answer:"<<endl;
		cin>>x;
		if((x<1)||(x>4))
		{
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		    cout<<"Wrong number! Please provide the correct alternative."<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;	
		}
		else
		{
			if(x==1)
			{
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Correct!"<<endl;
				cout<<"You got 1 point."<<endl;
				points+=1;
				cout<<"So far you have:"<<points<<" points."<<endl;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			}
			else
			{
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Wrong!"<<endl;
				cout<<"You got 0 points."<<endl;
				cout<<"The correct answer is 1."<<endl;
				points+=0;
				cout<<"So far you have: "<<points<<" points."<<endl;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			}
		}
	}
	while((x<1)||(x>4));

		do
	{
		cout<<"\nWhich of the following sequences represents a new row: backslash"<<endl;
		cout<<"1. t"<<endl;
		cout<<"2. n"<<endl;
		cout<<"3. a"<<endl;
		cout<<"4. b \nYour answer:"<<endl;
		cin>>x;
		if((x<1)||(x>4))
		{
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		    cout<<"Wrong number! Please provide the correct alternative."<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;	
		}
		else
		{
			if(x==2)
			{
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Correct!"<<endl;
				cout<<"You got 1 point."<<endl;
				points+=1;
				cout<<"So far you have:"<<points<<" points."<<endl;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			}
			else
			{
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Wrong!"<<endl;
				cout<<"You got 0 points."<<endl;
				cout<<"The correct answer is 2."<<endl;
				points+=0;
				cout<<"So far you have: "<<points<<" points."<<endl;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			}
		}
	}
	while((x<1)||(x>4));

		do
	{
		cout<<"\nWhat punctuation is used to signal the beginning and end of blocks of code?"<<endl;
		cout<<"1. -> dhe <-"<<endl;
		cout<<"2. START and END"<<endl;
		cout<<"3. (and)"<<endl;
		cout<<"4. {} \nYour answer:"<<endl;
		cin>>x;
		if((x<1)||(x>4))
		{
		    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		    cout<<"Wrong number! Please provide the correct alternative."<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;	
		}
		else
		{
			if(x==4)
			{
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Correct!"<<endl;
				cout<<"You got 1 point."<<endl;
				points+=1;
				cout<<"So far you have:"<<points<<" points."<<endl;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			}
			else
			{
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Wrong!"<<endl;
				cout<<"You got 0 points."<<endl;
				cout<<"The correct answer is 4."<<endl;
				points+=0;
				cout<<"So far you have: "<<points<<" points."<<endl;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			}
		}
	}
	while((x<1)||(x>4));
	
		do
	{
		cout<<"\nWhich of the following instructions is not a cyclic or iterative instruction?"<<endl;
		cout<<"1. If"<<endl;
		cout<<"2. While"<<endl;
		cout<<"3. For"<<endl;
		cout<<"4. Do....While \nYour answer:"<<endl;
		cin>>x;
		if((x<1)||(x>4))
		{
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		    cout<<"Wrong number! Please provide the correct alternative."<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;	
		}
		else
		{
			if(x==1)
			{
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Correct!"<<endl;
				cout<<"You got 1 point."<<endl;
				points+=1;
				cout<<"So far you have:"<<points<<" points."<<endl;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			}
			else
			{
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Wrong!"<<endl;
				cout<<"You got 0 points."<<endl;
				cout<<"The correct answer is 1."<<endl;
				points+=0;
				cout<<"So far you have: "<<points<<" points."<<endl;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			}
		}
	}
	while((x<1)||(x>4));// the loop is repeated if the user does not enter one of the numbers

	if(points<=4)//use the if else cycle again, in order to find the corresponding note for points received
// if points are less than 4
	{
		cout<<"Your points are:"<<points<<endl;// write received points
		cout<<"You have received the grade:4"<<endl;// grade
	}
	else if(points<=5)//if the points are less than or equal to 5 the grade 5 is set
	{
		cout<<"Your points are:"<<points<<endl;
		cout<<"You have received the grade:5"<<endl;
	}
	else if(points<=6)//the cycle is repeated for different points that the user can get
	{
		cout<<"Your points are:"<<points<<endl;
		cout<<"You have received the grade:6"<<endl;
	}
	else if(points<=7)
	{
		cout<<"Your points are:"<<points<<endl;
		cout<<"You have received the grade:7"<<endl;
	}
	else if(points<=8)
	{
		cout<<"Your points are:"<<points<<endl;
		cout<<"You have received the grade:8"<<endl;
	}
	else if(points<=9)
	{
		cout<<"Your points are:"<<points<<endl;
		cout<<"You have received the grade:9"<<endl;
	}
	else if(points<=10)//
	{
		cout<<"Your points are:"<<points<<"."<<endl;
		cout<<"You have received the grade:10."<<endl;
	}
    cout<<"\n\nGoodbye!!!"<<endl;// goodbye is displayed after points and grades are displayed
	}
	return 0;
}//end

