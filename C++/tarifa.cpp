#include <iostream>

int main() {
  int x;
  std::cin>>x;
  int mbLeft = 0;
  int tc;
  std::cin>>tc;
  for (int i = 0; i<tc; i++){
    int mbUsed;
    std::cin>>mbUsed;
    mbLeft+=x-mbUsed;
  }
  std::cout<<mbLeft+x<<std::endl;
}
