//array is a data structute.Data structurte means to store data.
//array syntax and declarization
/*
#include<iostream>
using namespace std;
int main()
{
    int arr[7];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 98;
    arr[5] = 67;
    arr[6] = 54;
    cout<<arr[5];
    return 0;
}*/
/*
#include<iostream>
using namespace std;
int main()
{
    int arr[7] = {1,2,3,4,58,3287,3489};
    cout<<arr[6];
    return 0;
}*/

//using loop for array
/*
#include<iostream>
using namespace std;
int main()
{
    int arr[7] = {0,3,43,565,563,534,768248};
    for(int i=0;i<=6;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}*/
/*
#include<iostream>
using namespace std;
int main()
{
    int arr[7] = {0,3,43,565,563,534,768248};

    for(int i=0;i<=6;i++){
        cin>>arr[i];
    }


    for(int i=0;i<=6;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
*/
//Given an array of marks of students if the marks of any student is less than 35 print it's rool no.
/*
#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {67,31,98,100,23};
    for(int i=0;i<=4;i++){
        if(arr[i]<35){
            cout<<arr[i]<<endl;
        }
        
    }
    
    return 0;
}*/
//int size=10, b[size] it's mean int size=10, int b[size]

//****** 
/*
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,4,5,3,6,5,7,5,9,0,3,6,8,3,2,1,0,0};
    int size = sizeof(arr)/sizeof(arr[5]);
    cout<<size;
    return 0;
}*/

//Calculate sum of all elements in given array

#include<iostream>
using namespace std;
int main()
{
    int arr[6] = {56,8,2,87,34,89};
    int sum = 0;
    for(int i=0;i<=6;i++){
        sum = sum + arr[i];
    }
        cout<<sum;
        
    return 0;
}