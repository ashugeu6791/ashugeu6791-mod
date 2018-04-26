#include"header.h"
#include"struct.h"
#include"fun.h"
#include"functionDef.h"

int main(){
  int n,N,c,R;
  readEssential(&n,&N,&c,&R);
  int location[n][n],car[N];
  struct req requests[R];
  input(car,requests,n,N,R,location);
  display(car,n,requests,N,R,location);
  return 0;
}
