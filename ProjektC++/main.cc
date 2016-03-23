#include <iostream>
#include "statki.h"
using namespace std;

int main(){
  Sea *seaC = new Sea();
  Sea *sea = new Sea();
  Screan scren1;
  Computer *c = new Computer(seaC,&scren1);
  c -> createShip(2,1);
  c -> createShip(3,2);
  c -> createShip(3,4);
  User pleyer1(sea);
  Ship s(3,"lala",sea,1);
  s.autoMove();
  s.print();
  s.move(10,10,'h');
  s.print();
  Screan scren;
  cout<< "statki koputera"<< endl;
  c -> printShip();
  c -> autoLocation();
   c -> printShip();
   scren.read(seaC);
   scren.print();
  delete(sea);
  delete(c);
} 