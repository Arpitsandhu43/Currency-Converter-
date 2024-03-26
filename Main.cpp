#include<iostream>
using namespace std;
void main()
{      //Declaration of varibles
       int dollars;
       float B,M,J,Ind;
       //input American dollars
       cout<<"Enter currency in American Dollars"<<endl;
       cin>>dollars;
       //Calculations
       B=dollars*0.79;
       M=dollars*16.68;
       J=dollars*151.42;
       Ind=dollars*83.31;
       cout<<dollars<<"American dollars are equal to "<<B<<" British pounds"<<endl;
       cout<<dollars<<"American dollars are equal to "<<M<<" Mexican pesos"<<endl;

       cout<<dollars<<"American dollars are equal to "<<J<<" Japanese yen"<<endl;
       cout<<dollars<<"American dollars are equal to "<<Ind<<" Indian rupees"<<endl;

       system("pause");
}
