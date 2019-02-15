

#include <iostream>

using namespace std;

class Polygon {
  protected:
    int width, height;
  public:
    void setter (int a, int b){
        width=a; height=b; 
    }
    virtual int area (){
        return(width*height);
    }
};

/*Base Class Polygon inheritted by classes Square, Triangle and Circle, attributes width and height 
accessed in sub classes and function area overridden in subclass to compute respective areas.*/

class Square: public Polygon {
  public:
    int area()
      { return height*width; }
};

class Triangle: public Polygon {
  public:
    int area(){ 
        return width*height/2; 
        
    }
};

class Circle: public Polygon{
    public:
        int area(){
            return(3.14*width*width);
        }
};

int main () {
  
  //Instantiating objects of the four classes
  Square sqr;
  Triangle trgl;
  Circle crcl;
  Polygon * poly1 = &sqr;
  Polygon * poly2 = &trgl;
  Polygon * poly3 = &crcl;
  
  /*Setter function to assign user passed values to the shapees. This shows encapsulation as main function does not
  know which 'setter' function is initializing which shape. */
  poly1->setter (4,5);
  poly2->setter (4,5);
  poly3->setter (4,0);
  
  /*Also 'area' method has no arguments and same name for all three classes(Square, Triangle and Circle) but outputs
  differnt result for differnt shapes by overriding 'area' method from base class Polygon.*/
  cout <<"Square Area:"<< sqr.area() << '\n';
  cout <<"Triangle Area:"<< trgl.area() << '\n';
  cout <<"Circle Area:"<< crcl.area() <<'\n';
  return 0;
}
