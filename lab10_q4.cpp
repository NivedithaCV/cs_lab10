#include <iostream>

using namespace std;



// ********************************************************************

//  Declaration of class Point

// ********************************************************************



// class Point represents a two-dimensional point

class Point

{

public:

  // default class constructor (with no arguments):

  Point(); 



  // class constructor that sets the coordinates x, y to the values xval,

  // yval:

  Point(int xval, int yval);



  // member function for moving a point by dx, dy:

  void Move(int dx, int dy);



  // member functions for getting values of x, y:

  int Get_X() const;

  int Get_Y() const;



  // member functions for setting x, y to xval, yval respectively  

  void Set_X(int xval);

  void Set_Y(int yval);



//Lab 7 exercise 4.1. Add declaration of member function Print here:

  void print(int a,int b); 

// private data members x, y represent coordinates of the point:

private:

  int X;

  int Y;

};  





// ********************************************************************

//  Methods for class Point

// ********************************************************************



// class constructor sets X, Y to zero when no values are specified:

Point::Point()

{

  X = 0;

  Y = 0;

}



// class constructor sets X, Y to given values xval, yval:

Point::Point(int xval, int yval)

{

  X = xval;

  Y = yval;

}



// member function Move: increases the x coordinate by dx and the y

// coordinate by dy.

void Point::Move(int dx, int dy)

{

  X += dx;

  Y += dy;

}



// Get_X returns the value of the X coordinate

int Point::Get_X() const

{

  return X;

}



// Get_Y returns the value of the Y coordinate

int Point::Get_Y() const

{

  return Y;

}



// Set_X sets the value of X coordinate to xval

void Point::Set_X(int xval)

{

  X = xval;

} 



// Set_Y sets the value of Y coordinate to yval

void Point::Set_Y(int yval)

{

  Y = yval;

} 

    



//Lab 7 exercise 4.1. Add definition of member function print:

void Point::print(int x,int y)

{

    cout<<"("<<x<<","<<y<<")"<<endl;

}



// ********************************************************************

//  Declaration of class Rectangle

// ********************************************************************



//Lab 7 exercise 4.2, 4.3: Add class Rectangle declaration HERE: 

class Rectangle{
	  //// private data members of the class include all 4 corner points of the rectangle.

     
      //two private member functions side1, side2 to the class Rectangle 

private:
 Point p1,p2,p3,p4;
    int side1()
    {
int k;
    k=p3.Get_Y()-p1.Get_Y();

    return k;

}

      int side2()
     {
int k;
    k=p3.Get_Y()-p1.Get_Y();

    return k;}
    
  public:

    // default class constructor (with no arguments):

    Rectangle();

    // class constructor thattakes two points as arguments and creates a rectangle with

    //the first point as the bottom left corner and the second as the top right corner

    

    Rectangle(Point tem1,Point tem2)
    {
         p1=tem1;

    p2=tem2;

    p2.Set_X(tem2.Get_X()) ;

    p2.Set_Y(tem1.Get_Y()) ;

    p4.Set_X(tem1.Get_X()) ;

    p4.Set_Y(tem2.Get_Y()) ;

    }
     
    //The print member function prints all 4 corners of the rectangle, using the member function print of the class Point. 

    void print();

    //public member function to compute the area of the rectangle. 

    void area()
    {
        cout<<"area ="<<side1()*side2()<<endl;
    };

    //two private member functions side1, side2 to the class Rectangle





    
      

};

// ********************************************************************

//  Methods for class Rectangle

// ********************************************************************



//Lab 7 exercise 4.2, 4.3. Add class Rectangle methods HERE: 

// class constructor sets A,B,C and D to (0,0), (1,0), (0,1), (1,1) when no values are specified:

Rectangle::Rectangle()

{

  p1.Set_X(0) ;

  p2.Set_X(0) ;

  p3.Set_X(1) ;

  p4.Set_X(1) ;

  p1.Set_Y(0) ;

  p2.Set_Y(0) ;

  p3.Set_Y(1) ;

  p4.Set_Y(1) ;

}


void Rectangle::print(){


    cout<<"point 1=";p1.print( p1.Get_X(), p1.Get_Y());

    cout<<"point 2=";p2.print( p2.Get_X(), p2.Get_Y());

    cout<<"point 3 =";p3.print( p3.Get_X(), p3.Get_Y());

    cout<<"point 4 =";p4.print( p4.Get_X(), p4.Get_Y());

}
    

// ********************************************************************

//  main() function for testing classes Point and Rectangle

// ********************************************************************



// Testing classes Point and Rectangle

int main()

{

// Declaring a point using default class constructor (x = y = 0):

  Point p1;

  cout<< "The x value for p1 is " << p1.Get_X() << endl;

  cout<< "The y value for p1 is " << p1.Get_Y() << endl;



// Declaring a point with coordinates X = 2, Y = 3:

  Point p2(2, 3);

  cout<< "The x value for p2 is " << p2.Get_X() << endl;

  cout<< "The y value for p2 is " << p2.Get_Y() << endl;



// Moving point p2 by (1, -1):

  p2.Move(1, -1);

  cout<< "After the move:" << endl;

  cout<< "The x value for p2 is " << p2.Get_X() << endl;

  cout<< "The y value for p2 is " << p2.Get_Y() << endl;



//Lab 7 exercise 4.1. Test member function print on points p1, p2:

  cout<<"The point p1 is ";p1.print( p1.Get_X(), p1.Get_Y());

  cout<<"The point p2 is ";p2.print( p2.Get_X(), p2.Get_Y());

//Lab 7 Exercises 4.2, 4.3. Testing of the class Rectangle goes here:  

  Rectangle rect1rect2(pA1,pC1);
  rect1.print();
  rect1.area();
  Point pA1(2,1);
  Point pC1(4,8); 
  rect2.print();
  rect2.area();
  return 0;

}


