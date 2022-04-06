// Dhvani Champaneri
// finding min square pieces of a chocolate bar


#include <iostream>  
using namespace std;  
  
int gcd(int a, int b) // The function return GCD  
{  
   
    if (a == 0) // If a becomes zero  
       return b; // b is the GCD 
  
    if (b == 0)// If b becomes zero  
       return a;// a is the GCD   
    
     
    if (a == b) // The case of equal numbers   
        return a; // return any one of them   
    
   // Apply case of substraction   
    if (a > b) // if a is greater subtract b   
        return gcd(a-b, b);  
    return gcd(a, b-a); //otherwise subtract a   
}  
    
  
int main()  
{  
    int len, bre,min_squ,divisor;
    cout<<"Enter the Length and width of chocolate bar\n"; 
    cin>>len;
    cin>>bre;
    cout<<"Length: "<<len<<"  Breadth: "<<bre<<endl;
    divisor = gcd(len,bre); // gcd will give the one side length of the sqaure
    min_squ = (len*bre)/(divisor*divisor); // total area/(side*side) will give no. of min square
   
    cout<<"The minimun square piece from chocolate bar to get most profit is: "<<min_squ<<endl;
    return 0;  
}  

