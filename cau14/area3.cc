#include<iostream>
#include<fstream>

int main(void) {
    std::ifstream inp("area3.inp");
    std::ofstream out("area3.out");
    int a,b,c;
    inp>>a>>b>>c;

    out<<(a-c)*(b-c);

    inp.close(); out.close();
    return 0;
}