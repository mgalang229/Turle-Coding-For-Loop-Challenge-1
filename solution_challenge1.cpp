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
  
  tina.pencolor({"blue"});
  tina.width(2);
  tina.shape("arrow");
  tina.speed(TS_SLOWEST);
  
  int i = 0;
  while (i < 4) {
    tina.forward(75);
    tina.right(90);
    tina.forward(25);
    tina.right(90);
    tina.forward(25);
    tina.right(90);
    tina.forward(25);
    i++;
  }
  
  //add code above this line
  
  screen.exitonclick();
  return 0;
  
}
