//First basic code same for all C++ problems =
/*#include<iostream>
using namespace std;

int main()
{
    cout << "Hello World!";
    return 0; // Added return statement
}*/

//For moving in next line we will use \n . Or we can use cout<<endl
/*#include<iostream>
using namespace std;

int main()
{
    cout<<"MIT USA \n";
    cout<<"Stanford University \n";
    cout<<"Harvard University \n";
    cout<<"Microsoft \n";
    cout<<"Google \n";
    cout<<"nvidia \n";
     return 0;
}*/

//for number never use "" .

//Calculate Simple Interest

/*#include<iostream>
using namespace std;
int main()
{
    int P,R,T;
    P=50000;
    R=15;
    T=10;
    float si=(P*R*T)/100;
    cout<<si;
    return 0;
}*/

//Take a ineger as input x and print the half of this number x
//cin is taking a input in c++

/*#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    float y = (float)x;
    cout<<y/2;
    return 0;
}*/

/*
if a<b = a%b =a 
a%(-b) = a%b
(-a)%b = -(a%b)
(-a)%(-b) = -(a%b) = (-a)%b*/

//calculating percentage of 5 subjects
/*#include<iostream>
using namespace std;
int main()
{
    float x1= 91;
    float x2= 94;
    float x3= 95;
    float x4= 98;
    float x5= 100;
    float percentage= (x1+x2+x3+x4+x5)/5;
    cout<< percentage;
    return 0;
}*/

//for non zero number it will be 1 and for zero it will be always zero.
/*#include<iostream>
using namespace std; we can comment this line and ***
int main()
{
    bool flag = 78;
    cout << flag;  *** here we can use std :: cout << flag;
    return 0;
}*/

//si

/*#include<iostream>
using namespace std;
int main()
{
    int p,t,si;
    p = 593290;
    float r = 5.4;
    t = 2;
    si = (p*r*t)/100;
    cout<<si;
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
    int a = 5, b = 2;   in c++ for using modulus operator variable should be in integer
    float c;
    c = a % b;
    cout<<c;
}*/
/*
#include<iostream>
using namespace std;
int main()
{
    bool p = false;
    bool q = false;
    bool r = true;
    cout<<(p==q==r);
    cout<<endl;
    cout<<(q==r==p);
    cout<<endl;
    cout<<(p==r==q);
    return 0;
}*/
/*
#include<iostream>
using namespace std;
int main()
{
    bool p = false;
    bool q = false;
    bool r = true;
    cout<<(p=q=r);
    return 0;
}*/

#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cout<<"Enter numerator and denominator of the first fraction (a/b): ";
    cin>>a>>b;
    cout<<"Enter numerator and denominator of the second fraction (c/d): ";
    cin>>c>>d;
    
    int numerator = a*c;
    int denominator = b*d;

    cout<<"The product is: "<<numerator << "/" << denominator;
    return 0;
}