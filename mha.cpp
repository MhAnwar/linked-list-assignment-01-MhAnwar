#include "complex.h"
#include "linklist.h"
#include<iostream>
using namespace std;



int main()
{
			
					complex a1,a2,a3,a4,a5,a6,a7;
		linklist b;
	cout<<"                      enter values for 1st complex number"<<endl;
	a1.setdata();
	a1.showdataofcomplex();
	cout<<"                       Set the values for 2nd complexnumber"<<endl;
	a2.setdata();
	a2.showdataofcomplex();
	cout<<"                       Set the values for 3rd complexnumber"<<endl;
	a3.setdata();
	a3.showdataofcomplex();
	cout<<endl;
	cout<<"                ADDITION of 1st two complexnumbers is =   ";
	a4=a1+a2;
	a4.showdataofcomplex();
	cout<<endl;
	cout<<"linklist IS  ";
	b.insertatstart(a4);
    b.showdatoflinklist();
	cout<<endl;
	cout<<"               SUBTRACTION of 1st and 3rd complexnumber is = ";
	a5=a1-a3;
	a5.showdataofcomplex();
	cout<<endl;
	cout<<"UPDATED linklist IS THUS  ";
	b.insertafterposition(1,a5);
	b.showdatoflinklist();
	cout<<endl;
    cout<<"               MULTIPLICATION of 2nd and 3rd complexnumber is = ";
	a6=a2*a3;
	a6.showdataofcomplex();
	cout<<endl;
	cout<<"UPDATED linklist IS  ";
	b.insertafterposition(2,a6);
	b.showdatoflinklist();
	cout<<endl;
    cout<<"               DIVISION of 1st and 3rd complexnumber is = ";
	a7=a1/a3;
	a7.showdataofcomplex();
	cout<<endl;
	cout<<"UPDATED  linklist IS  ";
	b.insertafterposition(3,a7);
	
	b.showdatoflinklist();
	cout<<endl;
    b.deleteatposition(4);
	cout<<"UPDATED  linklist after deleting at 4 IS  ";
	
	b.showdatoflinklist();
	cout<<endl;
	cout<<"VALUE at position no 3 in linklist is   ";
	b.getvalueatpos(3);
	
	return 0;

}
