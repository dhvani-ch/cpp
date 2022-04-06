//Dhvani Champaneri shift 2 track 2
//set-2, Q-3, Given binary string of 0's and 1's and swap even places with even and odd places with odd.


#include<iostream>
using namespace std;


void display(int arr[],int n)
{
	int count=0,i=0;
	int temp=0;

	//couning 01 substring in string
	for(i=0;i<n;i++)
	{
		if(arr[i]==0 && arr[i+1]==1)
		{
			//cout<<"caught";
			count++;
		}
	}
	cout<<"The total no. of sequential 01 is: "<<count<<endl;

}



//main starting
int main()
{
	int i,n,temp;
	cout<<"Enter the string length N for binary numbers"<<endl;
	cin>>n;
	int bin_arr[n];
	cout<<"N: "<<n<<endl;
	cout<<"Enter the string:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>bin_arr[i];
	}

	cout<<"Your Binary string is: "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<bin_arr[i];
	}
	cout<<endl;

	
	temp = bin_arr[1];
	bin_arr[1] = bin_arr[3];
	bin_arr[3] = temp;

	cout<<"New Binary after swaping even place, string is: "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<bin_arr[i];
	}
	cout<<endl;


	temp = bin_arr[0];
	bin_arr[0] = bin_arr[2];
	bin_arr[2] = temp;

	cout<<endl;
	cout<<"New Binary after swaping odd place, string is: "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<bin_arr[i];
	}
	cout<<endl;

	display(bin_arr,n);

	return 0;
}
