

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
  Square sqr;
  Triangle trgl;
  Circle crcl;
  Polygon * poly1 = &sqr;
  Polygon * poly2 = &trgl;
  Polygon * poly3 = &crcl;
  poly1->setter (4,5);
  poly2->setter (4,5);
  poly3->setter (4,0);
  cout <<"Square Area:"<< sqr.area() << '\n';
  cout <<"Triangle Area:"<< trgl.area() << '\n';
  cout <<"Circle Area:"<< crcl.area() <<'\n';
  return 0;
}
