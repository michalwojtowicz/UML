#include <iostream>
#include <string>
#include <cstdlib>


#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <fcntl.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include "pair.h"

using namespace std;

inline void Exit(const string& msg) {
  cerr << "Error: " << msg << endl;
  exit(1);
}

int SocketListen(short port){
  
  int fd = socket(AF_INET,SOCK_STREAM,0);
  if(fd < 0){
    Exit("nie stworzono socketa");
  }
  struct sockaddr_in sockAddr;
  sockAddr.sin_family = AF_INET;
  sockAddr.sin_port = htons(port);
  sockAddr.sin_addr.s_addr = INADDR_ANY;
  
  int enable = 1;
  if(setsockopt(fd, SOL_SOCKET, SO_REUSEADDR, &enable, sizeof(int)) < 0) {
    Exit("setsockopt(SO_REUSEADDR) failed");
  }
  
  if(bind(fd,(struct sockaddr *)&sockAddr,sizeof(sockAddr)) < 0){
    Exit("problem z bindem");
  }
  if(listen(fd,5) < 0){
    Exit("problem z listen");
  }
  return fd;
}


int main(){
  
  int fd = SocketListen(9998);
  struct sockaddr_in newSockAddr;
  socklen_t len = sizeof(newSockAddr);
  int newfd;
  User *tab[10];
  int i = 0;
  
  for(;;){
  
    newfd = accept(fd,(struct sockaddr *)&newSockAddr,&len);
    if(newfd < 0){
	Exit("problem z accept");
    }
    
    User *u1 = new User(newfd);
    u1 -> print("czekaj na pare \n");
    tab[i] = u1;
    ++i;
    cout << i << endl;
    if(i == 2){
      pid_t pid = fork();
      if(pid < 0){
	cerr<< "blad z fork" << endl;
	exit(1);
      }
      if(pid == 0){
	cout<< "yea mam pare" << endl;
	Pair *p = new Pair(tab[0],tab[1]);
	p -> start();
	delete(p);
      }
      i = 0;
      cout<< i << endl;
    }
  }
  
  close(newfd);
  close(fd);
  
}












