#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

class ship;
class PartShip;
class Screan;

class Sea{
public:
 Sea();
 ~Sea();
 void addPart(PartShip *p);
 void printSea();
 int getI()const;
 bool check(int x,int y);
 PartShip *tab[30];
 int partMove(PartShip *p,int *,int *);
 
private:
  int I;
   
  
};

class PartShip{
public:
   PartShip();
  ~PartShip();
  void setStan();
  void setPlace(int x,int y);
  int getX();
  int getY();
  bool getStan();
  void setId(int id); 
  int getId();
private:
  int id;
  bool stan;
  int x;
  int y;
};

class Ship{
public:
 Ship(int size,std:: string name,Sea *sea,int id);
 int move(int x,int y,char direction);
 void print();
 void autoMove();
private:
  int xY(int x);
  int vec(int x);
  int id;
  void addPart(PartShip *p);
  Sea *sea;
  int I;
  std:: string name;
  int size;
  PartShip tab[5];
};
class User{
public:
  User(Sea *sea);
  void shot(int x,int y,Sea *sea,Screan *sc);
private:
  Sea *sea;
  
};
class Screan{
public:
  Screan();
  void setField(int x,int y,int stan);
  void print();
  void printInt();
  void clean();
  void read(const Sea *sea);
private:
  bool tab[15][15];
  int tabInt[15][15];
};
class Computer{
public:
  Computer(Sea *sea,Screan *sc);
  ~Computer();
  void createShip(int size,int id);
  void printShip();
  void autoLocation();
  void getSize();
  
private:
  void clean(int **p);
  int I;
  Sea *sea;
  Screan *sc;
  Ship *tab[5];
};