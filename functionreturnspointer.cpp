//A function to show how function returns a pointer
#include<iostream.h>    //An input and output library in c++
int *big(int &,int &);  //creating a Function prototype
void main() 
    (
        int a,b,*c; //integer type variables '*' indicates that the variable is a pointer type integer
        cout<<"Enter two numbers\n";
        cin>>a>>b;  //Input two numbers
        c=big(a,b); //Invoking function to find the biggest values out of two numbers 
        cout<<"The biggest number is:"<<*c<<"\n";   //Outputing the result in stored at the address of c using a * operator i.e, value at variable c
        getch();
    }
int *big(int &x, int &y) //function definition
{
    if(x>y)
        return (&x); //returning the address of x using & operator
    else
        return (&y);
}
