#include "pair.h"


Pair:: Pair(User *a,User *b):a(*a),b(*b){
 this -> set
 this -> a.print("mam pare \n");
 this -> b.print("mam pare \n");
}
Pair:: ~Pair(){
  delete(&a);
  delete(&b);
}

void Pair:: start(){
  a.setFlags(0);
  b.setFlags(0);
  
  string msgA;
  string msgB;
  
  
  
  while(true){
    sleep(1);
    
    interpreter(msgA,a);
    interpreter(msgB,b);
    
    
   
  }
}

void Pair:: interpreter(string& msg,User& user){

  char c = msg[0];
  
  
  switch(c){
    
    case 'C':
      a.print(msg.c_str());
      break;
      
    default:
      a.print("dupa1");
      b.print("dupa2");
  }
   msg.clear();
} 