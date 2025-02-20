//An if statement is a conditional control structure used in programming to execute a block of code only if a specified condition is true.
//An if-else statement is a control structure in programming that allows you to execute one block of code if a condition is true and another block of code if the condition is false.
//A nested if-else is an if-else statement inside another if-else statement. It is used when you need to check multiple conditions in a hierarchical manner, where decisions depend on the outcome of previous conditions.
//An else-if ladder is a programming construct used to check multiple conditions sequentially. It is essentially a chain of if and else if statements, where each condition is evaluated one after another until a condition evaluates to true. If none of the conditions are true, an optional else block is executed.
//WAP to find a number is even or odd

/*#include<iostream>
using namespace std;
int main()

{
    int n;
    cin>>n;
    if(n%2==0)
    {
        cout<<"n is even";
    }
    else
    {
        cout<<"n is odd";
    }
    return 0;
}*/

//WAP take a postive intehger as a input and show this is divisible by 5

/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%5==0)
    {
        cout<<"n is divisible by 5";
    }
    else
    {
        cout<<"n is not divisible by 5";
    }
    return 0;
}*/

//WAP to take a integer as a input and find the absolute value of this

/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    if(n>=0)
    {
        cout<<n;
    }
    else{
        cout<<-n;
    }
    return 0;
}*/

//WAP that seller makes profit or loss or no profit , no loss

/*#include<iostream>
using namespace std;
int main()
{
    int cp;
    cout<<"Enter cp: ";
    cin>>cp;
    int sp;
    cout<<"Enter sp: ";
    cin>>sp;
    int Seller,Profit,Loss;
    Seller = sp-cp;
    cout<<endl;
    cout<<Seller;
    if(Seller>0)
    {
        cout<<"Profit";
    }
    else if(Seller==0)
    {
        cout<<"no Profit no Loss";
    } 
    else if(Seller<0)
    {
        cout<<Loss;
    }
    return 0;
}*/
/*
#include<iostream>
using namespace std;
int main()
{
    int a,b,area,perimeter;
    a=6;
    b=3;
    area=a*b;
    perimeter=2*(a+b);
    if(area>perimeter)
    {
        cout<<"Yes, area is greater than perimeter.";
    }
    else
    {
        cout<<"No, arae is not greater than perimeter.";
    }

    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";   if condition 1 is false then means 99<n or anything then code will not execute and compiler won't check
    cin>>n;
    if(99<n && n<1000)
    {
        cout<<"Yes, n is a three digit number.";
    }
    else
    {
        cout<<"No, it's not.";
    }
    
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    if(n%5==0 && n%3==0)
    {
        cout<<"Yes, n is divisible by 5 and 3";
    }
    else{
        cout<<"It's not.";
    }

    return 0;
}*/
/*
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    if(b<a && a>c)
    {
        cout<<"a is greatest";
    }
    else if(a<b && b>c)
    {
        cout<<"b is greatest";
    }
    else if(c<a && c>b)
    {
        cout<<"c is greatest";
    }

    return 0;
}*/
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    if((n%5==0 || n%3==0)&& n%15!=0)
    {
        cout<<"n is divisible by 5 or 3 an but not divisible by 15";
    }
    else{
        cout<<"condition does not matched";
    }

    return 0;
}*/
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number range: ";
    cin>>n;
    if(81<=n && n<=100)
    {
        cout<<"Very Good";
    }
    else if(61<=n && n<=80)
    {
        cout<<"Good";
    }
    else if(41<=n && n<=60)
    {
        cout<<"Average";
    }
    else if(n<=40)
    {
        cout<<"Fail";
    }
    return 0;
}*/ 

//WAP a character is alphabet or not.
/* a to z ASCII value: 97 to 122
   A to Z ASCII value: 65 to 90*/
//***************************
/*
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the Character: ";
    cin>>ch;
    cout<<ch<<endl;
    cout<<(int)ch<<endl;
    if(ch>=97 && ch<=122)
    {
        cout<<"It's the lowercase letter";
    }
    else if(ch>=65 && ch<=90)
    {
        cout<<"It's the uppercase letter";
    }
    return 0;
}*/
//************************** */
//WAP to check whether the alphabet is vowel or consonant
/*
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the Character: ";
    cin>>ch;
    cout<<ch<<endl;
    cout<<(int)ch<<endl;
    if((ch>=97 && ch<=122) || (ch>=65 && ch<=90)){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            cout<<"The Character is a Vowel";
        }
        else{
            cout<<"The Character is a Consonant";
        }
    }
    
    else
    {
        cout<<"The Character is not an alphabeto";
    }
    return 0;
}
*/
//WAP Take 3 numbers input and tell if they can be the sides of triangle
/*
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<endl;
    cout<<"Enter b: ";
    cin>>b;
    cout<<endl;
    cout<<"Enter c: ";
    cin>>c;
    if(a+b>c && b+c>a && c+a>b)
    {
        cout<<"This is Triangle";
    }
    else{
        cout<<"Triangle is not valid";
    }
    return 0;
}
*/
//Predict The Output
/*
#include<iostream>
using namespace std;
int main()
{
    int score = 100;
    if(score = 100) cout<<"You Win";
    else cout<<"You Lose";             Output is You Win
    return 0;
}*/
/*
#include <iostream>
#include <cmath>

using namespace std;

// Function to count the number of digits in a given number
int countDigits(int num) {
    if (num == 0) {
        return 1;
    }
    return log10(abs(num)) + 1;
}

int main() {
    int num1, num2;
    
    // Taking input for the two numbers
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Calculating the product
    int product = num1 * num2;

    // Counting the digits in the product
    int digitCount = countDigits(product);

    // Displaying the results
    cout << "Product - " << product << endl;
    cout << "Count of digits - " << digitCount << endl;

    return 0;
}*/
//2
#include <iostream>

using namespace std;

int main() {
    int temperature;

   
    cout << "Enter the temperature: ";
    cin >> temperature;

    
    if (temperature >= 80) {
        cout << "Suggested activity: Swimming" << endl;
    } 
    else if (temperature >= 60 && temperature < 80) {
        cout << "Suggested activity: Tennis" << endl;
    } 
    else if (temperature >= 40 && temperature < 60) {
        cout << "Suggested activity: Golf" << endl;
    } 
    else {
        cout << "Suggested activity: Skiing" << endl;
    }

    return 0;
}
//4
/*
#include <iostream>
using namespace std;

int main() {
    int num1, den1, num2, den2;
    
   
    cout << "Enter first fraction (in the form a/b): ";
    char slash1; // To store the slash ('/')
    cin >> num1 >> slash1 >> den1;
    
   
    cout << "Enter second fraction (in the form c/d): ";
    char slash2;
    cin >> num2 >> slash2 >> den2;
    
    // Calculating the product of the two fractions
    int productNumerator = num1 * num2;
    int productDenominator = den1 * den2;

    // Displaying the product
    cout << "Product = " << productNumerator << "/" << productDenominator << endl;
    
    return 0;
}*/
//5 a
/*
#include <iostream>
using namespace std;

int main() {
    double num = 45.6789;

    
    cout.width(10);         
    cout.precision(3);      
    cout << fixed << num << endl; 
    return 0;
}*/
//5 b
/*
#include <iostream>
using namespace std;

int main() {
    double num = 0.00034567;

    // Set precision to 6 and display in scientific notation
    cout.precision(6);      // Set precision to 6 decimal places.
    cout << scientific << num << endl; // 'scientific' ensures scientific notation format.

    return 0;
}*/
//5 c
/*
#include <iostream>
using namespace std;

int main() {
    int num = 255;

    // Display the number in uppercase hexadecimal format
    cout << hex << uppercase << num << endl;

    return 0;
}*/
//5 d
/*
#include <iostream>
using namespace std;

int main() {
    double num = 987.654321;

    // Set precision to 4 and display in fixed-point notation
    cout.precision(4);      // Set precision to 4 decimal places.
    cout << fixed << num << endl;

    return 0;
}*/
//5 e
/*
#include <iostream>
using namespace std;

int main() {
    double num = -123.456;

    // Set precision to 4 and display in scientific notation
    cout.precision(4);      // Set precision to 4 decimal places.
    cout << scientific << num << endl; // 'scientific' ensures exponential format.

    return 0;
}*/