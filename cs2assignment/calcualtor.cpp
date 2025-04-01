#include <iostream>
#include "calcualator.h"
#include <cstdlib>
#include <ctime>
using namespace std;

double add()
{  double a,b;
cout<<"Adding a and b: enter  a and b"<<endl;
   cin<<a<<b;
   

double adds = a+b;
cout<<" The  result is "<<adds<<endl;
return adds;

}
double sub()
{ double a,b;

 cout<<" Subtracting b form a enter  a first then b: "
 cin>>a>>b;
 double subs = a-b;
 cout<<" The  result is "<<sub<<endl;
return subs;
}
double mult()
{ double a,b;
cout<<" multiplying a and b: enter  a and b"<<endl;
cin>>a>>b;
double multi= a*b;
 return multi;
}
double division ()
 { double a,b ;
 cout<<"dividing a by b enter b then  a:";
 cin>>a;
 cin>>b;
 while(b==0)
 { cout<<"Invalid input for b resutls in division by 0 \n renter b:";
   cin>>b;}
   
int fact()
{ int a;
cout<<"Calculating  factorial of number a\n Enter a :";
   cin>>a;
 while (a<0)
 {cout<<"invalid input enter  a non negative  number";
   cin>>a;}
   int result =a;
   if(result==0||result==1)
   {result=1;
   cout<<"The  factorial  of "<<a<<" is: "<<result<<endl;
   return result;
       
   }
   
    
   
     int i=result-1;
        while(i>1)
        {
            result*=i;
       --i;
        }
    cout<<"The  factorial  of "<<a<<" is :"<<result<<endl;
       return result;
   
    }
   
  
   
   
   
  
   
   
   }
//calculate  the  gcd  of  2  numbers
int GCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
//using  GCD  will  calculate  calcualte the  gcd  of  mulitple  numbers
int GCD_Multiple() {
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;

    while (n <= 0) {
        cout << "Invalid input! Enter a positive number of integers: ";
        cin >> n;
    }

    int arr[100]; //set cap  of  numbers  to 100

    cout << "Enter " << n << " positive integers:\n";
    for (int i = 0; i < n; i++) {
        do {
            cout << "Number " << i + 1 << ": ";
            cin >> arr[i];
            if (arr[i] <= 0) {
                cout << "Invalid input! Enter a positive nonzero integer.\n";
            }
        } while (arr[i] <= 0);
    }

    //computing  gcd
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = GCD(result, arr[i]);
    }

    return result;
}


 //using  gcd  will  calculate the lcm of 2 numbeers 
 int LCM(int a,int b)
 
{return(a/GCD(a,b)*b } //famous formula
// using  lcm  to  calculate  the  lcm  of  multiple  numbers

int LCM_MultipleNumbers() {
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;

    while (n <= 0) {
        cout << "Invalid input! Enter a positive number of integers: ";
        cin >> n;
    }

    int arr[100]; //cap 100

    cout << "Enter " << n << " positive integers:\n";
    for (int i = 0; i < n; i++) {
        do {
            cout << "Number " << i + 1 << ": ";
            cin >> arr[i];
            if (arr[i] <= 0) {
                cout << "Invalid input! Enter a positive nonzero integer.\n";
            }
        } while (arr[i] <= 0);
    }

     //computing  lcm
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = LCM(result, arr[i]);
    }

    return result;
}

 
 

 
 int RNG()
  { int start, end;
  cout<<"Random number generator ";
  
     do {
     cout<<"Enter  start  of  range"
     cin>>start;
     
     if(start<0)
     {cout<<"Invalid input! enter  a positive integer for  start  of  range:";
     cin>>start;
     
     }while(start<0)
    do {
     cout<<"Enter end of  range"
     cin>>end;
     
     if(end<0)
     {cout<<"Invalid input! enter  a positive integer for end of range:";
     cin>>end;
     
     }while(end<0)
    
     
     
     
     
     
    srand(time(0)); 
    return start + rand() % (end - start + 1);
}


