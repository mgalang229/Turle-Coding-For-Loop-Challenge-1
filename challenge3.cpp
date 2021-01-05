////////// DO NOT EDIT HEADER! //////////
#include <iostream>                    //
#include "CTurtle.hpp"                 //
#include "CImg.h"                      //
using namespace cturtle;               //
using namespace std;                   //
/////////////////////////////////////////

int main(int argc, char** argv) {
  
  TurtleScreen screen(400, 300); //You may edit the dimensions to fit your window
  Turtle tina(screen);
  
  //add code below this line
  tina.pencolor({"red"});
  tina.shape("SQUARE");
  tina.width(2);
  tina.speed(TS_FASTEST);
  tina.right(0);
  tina.forward(10);
  for (int i = 20; i < 200; i += 20) {
    tina.right(90);
    tina.forward(i);
    tina.right(90);
    tina.forward(i + 10);
  }
  tina.right(90);
  tina.forward(200);
  //add code above this line
  
  screen.exitonclick();
  return 0;
  
}
