#include <iostream>
#include "statki.h"
using namespace std;

int main(){
  Sea *seaC = new Sea();
  Sea *sea = new Sea();
  Screan scren1;
  Computer *a = new Computer(sea,&scren1);
  a -> createShip(2,10);
  
  a -> autoLocation();
  a -> printShip();
  delete(a);
  delete(sea);
  delete(seaC);
 
} 