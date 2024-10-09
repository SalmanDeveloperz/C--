#include<iostream>
using namespace std;
int main(){
    // system("CLS");
    // cout<<"I am Salman\n";
    // cout<<"I am back in DSA";

    int a=5;
    cout<<"\nThe value of a is: "<<a<<endl;

    //first Method to initilize Pointers
    int *ptr1= &a;
    
    cout<<ptr1 <<endl;
    cout<<*ptr1 <<endl;
    (*ptr1)++;
    cout<< "Value of a after increament is: " << a <<endl;
    cout<<*ptr1 <<endl;


    //Second method to initilize Pointers
    int *ptr2=0;
    ptr2= &a;
    cout<<ptr2 <<endl;
    cout<<*ptr2 <<endl;


    // Copying a Pointer "q" from another pointer "ptr2"

    int *q=ptr2;
    cout<<q <<"-"<<ptr2<<endl;
    cout<<*q <<"-"<<*ptr2<<endl;

    cout<<"\n";
}