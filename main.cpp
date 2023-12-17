#include <iostream>
#include <cmath>



double distance(double xa,double ya,double xb, double yb){

    double AB = sqrt(pow(yb-ya,2) + pow(xa-xb,2));
    std::cout << "La distance entre A et B est de " << AB;
    return AB;
}


int main() {
    distance(5,5,6,6);
    return 0;
}
