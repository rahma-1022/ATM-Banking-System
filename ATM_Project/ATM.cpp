#include <iostream>
using namespace std;
int main (){
cout <<" Welcome";
cout <<"\n Enter your password \n ";
int k;
cin >> k;
int a =5000;
int x ;
cout <<" Your current balance is: 5000 LE";
cout <<"\n choose your process";
cout <<"\n 1/Withdraw            2/Deposit \n ";
cin >> x;
if (x==1)
{
    int y,z; 
    cout <<" Enter the amount to be withdraw \n ";
    cin >>y ; 
    if (y<=a){ 
    z = a-y ;
    cout <<" The withdrawal process was completed successfully and your balance is: "<<z<<" LE";
    }
    else if (y>a){
        cout <<" You cannot withdraw this amount.";
    }
}
 else if (x==2)
 {
    int b,c;
    cout <<" Enter the amount to be deposit \n "; 
    cin >> b; c=a+b ; 
    cout <<" The deposit process was completed successfully and  your balance is: "<<c<<" LE";
}
cout <<"\n Thank you for using our services ";
return 0;
}
