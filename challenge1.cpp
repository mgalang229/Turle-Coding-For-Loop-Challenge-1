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
  tina.shape("SQUARE");
  tina.width(2);
  tina.speed(TS_FASTEST);
  for (int repeat = 0; repeat < 4; repeat++) {
    tina.right(90);
    tina.forward(100);
    for (int i = 0; i < 2; i++) {
      tina.right(90);
      tina.forward(20);
    }
  }
  //add code above this line
  
  screen.exitonclick();
  return 0;
  
}
