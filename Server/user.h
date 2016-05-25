#include <iostream>
#include <fcntl.h>
#include <cstdlib>



using namespace std;

class User{
public:
  User(int fd);
  ~User();
  void print(const char *);
  int getfd();
  void setfdR(int t);
  void print(const string&,int fd);
  void setFlags(int t);
  int sRead(string& buff);
private:
  string name;
  int fdR;
  int fd; 
};