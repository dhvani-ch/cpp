// Dhvani Champaneri Shift 2 Track 2
//Set-2 Q-2, Using Inheritance



#include<iostream>
#include<string.h>
using namespace std;


	class charInput{
	public:
	void add(char c) 
	{
		c = c + NULL;
		cout<<"char is: "<<c;	

	}
	std::string getValue() 
	{ 
		return NULL;
	}
};


class numInput : public charInput {

public:
string arr;
void add(char c)
{
if(int(c)>47 && int(c)<58)
{
	arr += c;
}
//cout<<arr<<endl;
}


void getvalue()
{
cout<<"current value is: "<<arr<<endl;;
}
	
};


int main()
{
numInput ni;

ni.add('1');
ni.add('0');
ni.add('A');
ni.getvalue();


}
