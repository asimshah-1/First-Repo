#include<iostream>

using namespace std;

int main(){
    int operation;
    float n1,n2 ;

cout<<"         'Welcome to Asim's Calculator'" <<endl;



cout<< "Which Arithmetic Operation do you want to perform?"<<endl;
cout<<endl;

char repeat='y';
while (repeat == 'y' || repeat == 'Y') 
{
cout<< "Select any number from the options below to continue." <<endl;
cout<<endl;

    cout<< "1. Addition          2. Subtraction"<<endl;
cout<< "3. Multiplication    4. Division   "<<endl;
cout<<endl;
cout<<"Option = ";
cin>>operation;
cout<<endl;

if (operation==1){
    cout<<endl;
cout<<"Enter the value for Num 1: ";
cin>>n1;
cout<<"Enter the value for Num 2: ";
 cin>>n2;
 cout<<"Num1 + Num2 = "<<n1+n2;
cout<<endl;
cout<<endl;

cout<<"Do you want to continue Further Calculation?"<<endl;
 system("pause");
}

else if (operation==2)
{
    cout<<endl;
    cout<<"Enter the value for Num 1: ";
cin>>n1;
cout<<"Enter the value for Num 2: ";
 cin>>n2;
 cout<<"Num1 - Num2 = "<<n1-n2;
    cout<<endl;
    cout<<endl;
cout<<"Do you want to continue Further Calculation?"<<endl;
 system("pause");
}

else if (operation==3)
{
    cout<<endl;
    cout<<"Enter the value for Num 1: ";
cin>>n1;
cout<<"Enter the value for Num 2: ";
 cin>>n2;
 cout<<"Num1 * Num2 = "<<n1*n2;
 cout<<endl;
 cout<<endl;

  cout<<"Do you want to continue Further Calculation?"<<endl;  
 system("pause");

}

else if (operation==4)
{ 

    cout<<endl;
    cout<<"Enter the value for Num 1: ";
    cin>>n1;
    cout<<"Enter the value for Num 2: ";
    cin>>n2;
    cout<<"Num1 / Num2 = "<<n1/n2;
 

 
 if (n2==0)
 { cout<< "/Syntax Error";
    cout << endl;}
 else if (n2!=0)
    { cout<<"Do you want to continue Further Calculation?"<<endl;
      cout<<endl; }
    


 }
 

 


  



 if (operation < 1 || operation > 4)

 { cout<<"Invalid choice, Please select Number between 1 and 4"<<endl;
    cout<<endl;
 }
}
system("pause");


    return 0;
}