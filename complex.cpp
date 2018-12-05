#include<iostream>
#include "complex.h"
using namespace std;
complex :: complex()
{
	double a=0,b=0;
		complex*next=NULL;
		
}
void complex  ::  setdata()
{		
		cout<<"ENTER the complexnumber's real part  ";
		cin>>a;
		cout<<"Now ENTER the complexnumber's imag part  ";
		cin>>b;
		cout<<endl;
	}
void complex :: showdataofcomplex()
	{	    
		cout<<"    ("<<a<<")+("<<b<<")i"<<endl;
	}
complex complex :: operator +(complex v)
	{		
		complex add;
		add.a=a+v.a;
		add.b=b+v.b;
		return add;
}
complex complex :: operator -(complex v)
	{		
		complex sub;
		sub.a=a-v.a;
		sub.b=b-v.b;
		return sub;
	}
complex complex :: operator *(complex v)
	{		
		complex mul;
		mul.a=(a*v.a)-(b*v.b);
		mul.b=(a*v.b)+(b*v.b);
		return mul;
	}
complex complex :: operator /(complex v)
{try {
			complex div;
           if (((v.a*v.a)+(v.b*v.b))==0)
		      throw (4);
	       else
	  {			div.a=((a*v.a)+(b*v.b))/((v.a*v.a)+(v.b*v.b));
				div.b=((b*v.a)-(a*v.b))/((v.a*v.a)+(v.b*v.b));
				return div; 
	  }   
		 
	}
catch(int e)
		{
			cout<<"DIVISION  by ZERO condition"<<endl;
		}
}