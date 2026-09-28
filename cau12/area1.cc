#include<iostream>
#include<fstream>
#include<cmath>
#include<iomanip>

int main(void) {
    std::ifstream inp("area1.inp");
    std::ofstream out("area1.out");
    int a;
    inp>>a;

    out<<std::fixed<<std::setprecision(2)<<(a*a*sqrt(3)/4)-(a*a*3.14/12);

    inp.close(); out.close();
    return 0;
}