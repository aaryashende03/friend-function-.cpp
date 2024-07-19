//Program: The program is based on friend function concept but by making the using of naked function ( an open function ) in which we create the object of class through which we can access the values accordingly.

#include<iostream>
using namespace std;
class Demo
{
	public:
	
	        int a;
			
	private:
	
	          int b;
		
   protected:

               int c;
			   
	public:
  
        Demo()
	{
		i=10;
        j=20;
        k=30;
	}
	
	friend void fun();  //friend function(fun)
};

void fun()  //naked function an open function which is not declared within the class (outside the class)
{
  Demo obj; //Demo class object
  cout<<obj.a<<endl;  //accessing the value of a
  cout<<obj.b<<endl; //error
  cout<<obj.c<<endl;  //error
}

int main()
{
  fun(); // fun function la call jatooy
return 0;
}  
	
	
	
		 
				


      	