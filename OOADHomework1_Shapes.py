import turtle

class Shape:
  #Constructor to assign shapes(string of shapes:circle,triangle and square) and length of string(3 in this case).
  def __init__(self, shapes,length):
    self.shapeArr = shapes
    self.numberOfShapes=length
  
#Display the number of shapes(3 here)
  def displayNumberOfShapes(abc):
    print("Number of Shapes:"+abc.numberOfShapes)
 
#Display individual shape in single line and in 3 separate lines
  def displayIndividualShape(abc):
    print("Hello my shapes in 1 line are:",abc.shapeArr.split(","))
    print("Hello my shapes in 3 lines are:")
    for shape in abc.shapeArr.split(","):
      print(shape)  


#Identifying each shape based on the input from the function call (for example: identifyShape("circle")) from main and matching 
#with the three options and printing animation and display text accordingly.

  def identifyShape(self,shape):

      if shape.lower()=="circle":
        print("You are inside "+shape+"!!!")
        ws = turtle.Screen()
        tod_1 = turtle.Turtle()
        tod_1.color("red", "green")
        tod_1.begin_fill()
        tod_1.circle(100)
        tod_1.end_fill()
        ws.exitonclick()

      elif shape.lower()=="triangle":
        print("You are inside "+shape+"!!!")
        ws = turtle.Screen()
        tri = turtle.Turtle()
        tri.color("red", "green")
        tri.begin_fill()
        tri.forward(100) 
        tri.left(120)
        tri.forward(100)
        tri.left(120)
        tri.forward(100)
        tri.end_fill()
        ws.exitonclick()

      else:
        print("You are inside "+shape+"!!!")
        ws = turtle.Screen()
        t = turtle.Turtle()
        t.color("red", "green")
        t.begin_fill()
        t.forward(100) 
        t.left(90) 
        t.forward(100)
        t.left(90)
        t.forward(100)
        t.left(90)
        t.forward(100)
        t.left(90)
        t.end_fill()
        ws.exitonclick()

        
#main function that creates object of class Shape and calls constructor and respective functions    
def main():
    s1 = Shape("Circle,Triangle,Square","3")
    s1.displayNumberOfShapes()
    s1.displayIndividualShape()
    s1.identifyShape("square")
  
if __name__== "__main__":
  main()


