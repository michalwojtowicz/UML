#include <iostream>
#include "statki.h"


using namespace std;

int main(){
  Sea *seaC = new Sea();
  Sea *sea = new Sea();
  Screan scren1;
  Computer *a = new Computer(sea,&scren1);
  a -> createShip(5,1);
  a -> createShip(5,2);
  a -> createShip(5,3);
  a -> autoLocation();
  a -> autoShot(seaC);
  scren1.clean();
  scren1.read(sea);
  scren1.print();
  scren1.printInt();
  delete(a);
  delete(sea);
  delete(seaC);
} 