#include "statki.h"



void PartShip:: setStan(){
  stan = false;
}

PartShip:: PartShip():stan(true),x(0),y(0){
  std:: cout<<"partShip creat  "<< stan<< std:: endl; 
}
PartShip:: ~PartShip(){
    std:: cout<<"partShip deleted"<< std:: endl;
}
Ship:: Ship(int size,std:: string name,Sea *sea,int id):size(size),name(name),I(0),sea(sea),id(id){
  std:: cout << "creat statek" << std:: endl;
  for(int i =0; i < size;++i){
    tab[i].setId(id);
    addPart(&tab[i]);
  }
}
void Ship:: addPart(PartShip *p){
  std:: cout << "PartShip"<< std:: endl;
    sea -> addPart(p);
}

Sea:: Sea(): I(0){
  std:: cout<<"Sea create"<< std:: endl;
};


void Sea:: addPart(PartShip *p){
  std:: cout << "dodany part do mapy"<< std:: endl;
  tab[I++] = p;
   std:: cout << "dodany I "<< I << std:: endl;
}
int Ship:: move(int x,int y,char diredtion){
   std:: cout << "x = " << x <<"y = " << y << std:: endl;
  x = corect(x); 
  y = corect(y);
     std:: cout << "Cx = " << x <<"Cy = " << y << std:: endl;
  
  for(int i = 0; i < size;++i){
    if(diredtion == 'v'){
      tab[i].setPlace(x,y-i);
    }else if(diredtion == 'h'){
      tab[i].setPlace(x + i,y);
    }else{
      std:: cout<<"blad zle dane"<< std:: endl; 
    }
  }
}
void Screan:: print(){
  std:: cout << "mapa z moimi statkami" << std:: endl;
  for(int i = 0;i < 15;++i){
   for(int j = 0;j <15; ++j){
      std:: cout << tab[i][j] << " " ;
   }
   std:: cout<<"\n";
  }
}
void Screan:: printInt(){
  std:: cout << "mapa do ztrzału"<< std:: endl;
  for(int i = 0;i < 15;++i){
   for(int j = 0;j <15; ++j){
      std:: cout << tabInt[i][j] << " " ;
   }
   std:: cout<<"\n";
  }
}
void PartShip:: setPlace(int x,int y){
  this -> x = x;
  this -> y = y;
}
void Ship:: print(){
  for(int i = 0;i < size;i++){
    std:: cout<< tab[i].getX() << " " << tab[i].getY()<< std:: endl;
  }
}
int PartShip:: getX(){
  return x;
}
int PartShip:: getY(){
  return y;
}
Screan:: Screan(){
  for(int i = 0; i < 15;++i){
    for(int j = 0;j < 15; ++j){
      tab[i][j] = false;
      tabInt[i][j] = 0;
    }
  }
}
void Sea:: printSea(){
  for(int i = 0;i < I;i++){
    std:: cout << tab[i] -> getX();
  }
}
void Screan:: clean(){
   for(int i = 0; i < 15;++i){
    for(int j = 0;j < 15; ++j){
      tab[i][j] = false;
    }
  }
}
void Screan:: read(const Sea *sea){
  int x;
  int y;
  PartShip *p;
  int I = sea -> getI();
  for(int i = 0;i < I;i++){
    p = sea -> tab[i];
    x = p -> getX();
    y = p -> getY();
    tab[y][x] = p -> getStan();
  }
  
}
int  Sea:: getI() const{
  return I;
}
bool PartShip:: getStan(){
  return stan;
}
User:: User(Sea *sea,Screan *sc): sea(sea),sc(sc),I(0){
  std:: cout<< "created user"<< std:: endl;
    init(shotX);
    init(shotY);
}

void User:: init(bool *t){
  for(int i = 0;i < 15;i++){
    t[i] = false;
  }
}


User:: ~User(){
  for(int i = 0 ;i < I;i++){
    delete(tab[i]);
  }
}
int User:: shot(int x, int y, Sea *sea,Screan *sc){
  if(sea -> check(x,y) == true){
    std:: cout << "true" << std:: endl;
    sc -> setField(x,y,9);
    return 1;
  }else{
    std:: cout << "true" << std:: endl;
    sc -> setField(x,y,1);
    return 0;
  }
}
bool Sea:: check(int x,int y){
  for(int i = 0; i < I;i++){
    if(tab[i]->getX() == x  &&tab[i]-> getY() == y){
      tab[i] -> setStan();
      return true;
    }
  }
  return false;
}
void Screan:: setField(int x,int y,int stan){
  tabInt[y][x] = stan;
}
Sea:: ~Sea(){
  std:: cout <<"sea deleted" << std:: endl;
}
Computer:: Computer(Sea *sea,Screan *sc):User(sea,sc){
}
void User:: createShip(int size,int id){
  Ship *s = new Ship(size,"Computer",sea,id);
  tab[I++] = s;
}
void User:: printShip(){
  for(int i = 0 ;i < I;i++){
    tab[i] -> print();
  }
}
Computer:: ~Computer(){
}
void Computer:: autoLocation(){
  int tabInt[15][15];

  for(int i = 0; i < I;i++){
   
    tab[i] -> move(rand()%15,rand()%15,'h');
  }
  for(int i = 0;i < 5;i++){
    sc -> read(sea);
    sc -> print();
    for(int j = 0;j < I ;j++){
      tab[j] -> autoMove();
    }
  }
  
}
void Computer:: clean(int **tab){
   for(int i = 0; i < 15;++i){
    for(int j = 0;j < 15; ++j){
      tab[i][j] = 0;
    }
  }
}
void Ship:: autoMove(){
  int sum = 0;
  int vectorX = 0;
  int vectorY = 0;
  for(int i = 0;i < size;++i){
    int plus = sea -> partMove(&tab[i],&vectorX,&vectorY);
    if(plus == -1000){
    this -> move(rand()%15,rand()%15,'h');
      std:: cout<< "tysiaoc" << std:: endl;
      return;
    }
    sum +=  plus;
  }
  vectorX = vec(vectorX);
  vectorY = vec(vectorY);
  int k = sum;
  std:: cout <<"x:" << tab[0].getX() + (sum * vectorX) <<"y: "<<tab[0].getY() + (sum * vectorY)<< std:: endl;
  this -> move(tab[0].getX() + (sum * vectorX),tab[0].getY() + (sum * vectorY),'h');
}
void PartShip:: setId(int id){
  this -> id = id;
}
int Sea:: partMove(PartShip *p,int *vx,int *vy){
  int t = p -> getId(); 
  int x = p -> getX();
  int y = p -> getY();
  float suma = 0;
  
  
  for(int i = 0;i < I;i++){
    if(t == tab[i] -> getId()){
      continue;
    }
    int dx = (x - tab[i] -> getX());
    int dy = (y - tab[i] -> getY());
    if(dx == x && dy == t){
      return -1000;
    }
    *vx += dx;
    *vy += dy;
    
    float dystans = sqrt((dx * dx) + (dy * dy)) + 1;
    suma += 2 / dystans;
  }
  return(int) suma;
}


int PartShip:: getId(){
  return id;
}
int Ship:: vec(int x){
  if(x >= 0){
    return 1;
  }else{
    return -1;
  }
}
void Computer:: autoShot(Sea *seaW){
 if(flag == false){
    int x = random(shotX);
    int y = random(shotY);
    std:: cout <<"x: "<< x <<"y:"<< y<< std:: endl;
   shot(x,y,seaW,sc);
 }   
}
int User:: getI(){
  return I;
}

int Computer:: random(bool *t){
  int i;
 for(int i = 0; i < 20;i++){
    i = rand() % 15;
    if(t[i] == false){
      t[i] = true;
      return i;
    }
  }
}
int Ship:: corect(int x){
    if(x < 0){
    x = 0;
   }else if(x >= 14){
    x = 14;
    x -= size;
  }
  return x;
}















