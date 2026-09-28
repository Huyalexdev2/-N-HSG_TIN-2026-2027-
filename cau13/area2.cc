#include<iostream>
#include<fstream>
#include<cmath>
#include<iomanip>


int main(void) {
    std::ifstream inp("area2.inp");
    std::ofstream out("area2.out");
    int a;
    inp>>a;
    out<<std::fixed<<std::setprecision(2)<<(a*a*3.14/3)-(a*a*sqrt(3)/4);
    inp.close(); out.close();
    return 0;
}