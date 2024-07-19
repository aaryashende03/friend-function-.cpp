//Program: This complete program is based on friend function. Here , the concept of friend function means you can access non public members i.e; private & protected . The concept of friend function is not applicable in the Java it has been removed due ,to security purpose.

#include<iostream>
using namespace std;
class Hello
{
	public:
	
	        void fun();  //function 1
			void gun(); //function 2
};

class Demo
{
   public:
              
            int a;  //characteristics

  private:              //only for the class
            int b;

 protected:            //immediate derrived class

            int c;

  public:

          Demo() //Constructor in which value intialization is been done
		  {
              a = 10;
              b = 20;
			  c = 30;
		  }
		  
		  friend void Hello::fun(); //friend function
          friend void Hello::gun(); //friend function
};

void Hello::gun() //class Hello cha gun gun function
{
Demo obj; //creating the object of the class Demo through which we can access the values
cout<<obj.a<<endl; //accessing the value of a
cout<<obj.b<<endl; //accessing the value of b
cout<<obj.c<<endl; //accessing the value of c
}
void Hello::fun() //class Hello cha fun(function)
{
Demo obj; //creating the object of class Demo through which you can access the values 
cout<<obj.a<<endl; //accessing the value of a
cout<<obj.b<<endl; //accessing the value of b
cout<<obj.c<<endl; //accessing the value of c
}
int main()
{
	Hello hobj;
	hobj.fun();
	return 0;
}
	
	