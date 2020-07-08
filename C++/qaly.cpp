#include <iostream>

int main() {
  int tc;
  long double tot = 0;
  std::cin>>tc;
  for (int i = 0; i<tc; i++){
    long double x,y;
    std::cin>>x>>y;
    tot+=x*y;
  }
  std::cout<<tot<<std::endl;
}
