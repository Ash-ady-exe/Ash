#include <iostream>
using namespace std;

int main() {
    //descrbing variables
    int num1;
    int num2;
    string operation;

    //getting number from user for arthmertic operation 
    cout<<"Enter number 1 : "; cin>> num1 ;
    cout<<"Enter number 2 : "; cin>> num2 ;

    //available operation for users 
    cout<<"\nAvailable Operations\n";
    cout<<"add - Addition\n";
    cout<<"sub - Subtraction\n";
    cout<<"mul - Multiplication\n";
    cout<<"div - Division\n";
    cout<<"mod - Modulus\n";    
    cout<<"Enter arthmertic operation :"; cin>> operation ;

    //performing arthmertic operation 

    // if operation

    //ADDITION
    if(operation == "add")
    {
    cout<<"ADDITION\t :"<< num1 + num2 <<endl ;
    }
    
    //SUBTRACTION
    else if(operation == "sub")
    {
    cout<<"SUBTRACTION\t :"<< num1 - num2 <<endl ;
    }

    //MULTIPILICATION
    else if(operation == "mul")
    {
    cout<<"MULTIPULICATION\t :"<< num1 * num2 <<endl ;
    }

    //DIVISION
    else if(operation == "div")
    {
        if(num2 != 0)
        {
        cout<<"DIVISION\t :"<< float(num1) / num2 <<endl ;
        }

        else
        {
            cout<<"Error: Division by zero is not allowed.";
        }
    }

    //MODULUS
    else if(operation == "mod")
    {
        if(num2 != 0)
        {
        cout<<"MODULUS\t :"<< num1%num2 <<endl ;
        }

        else{
            cout<<"Error: Modulus by zero is not allowed.";
        }
    }

    //invalid selected
    else{
        cout<<"Invalid operation selected";
    }

    return 0;
}