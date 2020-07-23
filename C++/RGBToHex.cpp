#include <vector>
#include <string>

class RGBToHex
{
  public:
  static std::vector<char> convHex(int num){
    std::vector <char> res;
    if (num==0){res = {'0','0'}; return res;}
    while (num>0){
      char adder = '0';
      switch (num%16){
        case 10: 
        adder = 'A'; break;
        case 11: 
        adder = 'B'; break;
        case 12:
        adder = 'C'; break;
        case 13:
        adder = 'D'; break;
        case 14:
        adder = 'E'; break;
        case 15:
        adder = 'F'; break;
        default: adder+=num%16;
      } 
      res.insert(res.begin(), adder);
      num/=16;
    }
    while (res.size()<2){res.insert(res.begin(), '0');}
    return res;
  }
  static std::string rgb(int r, int g, int b){
    if (r>255) r = 255;
    if (g>255) g = 255;
    if (b>255) b = 255;
    std::vector<char> rVals = convHex(r);
    std::vector<char> gVals = convHex(g);
    std::vector<char> bVals = convHex(b);
    rVals.insert(rVals.end(), gVals.begin(), gVals.end());
    rVals.insert(rVals.end(), bVals.begin(), bVals.end());
    std::string conc(rVals.begin(), rVals.end());
    return conc;
  }
};
