#include <iostream>
#include <cmath>



double distance(double xa,double ya,double xb, double yb){

    double AB = sqrt(pow(yb-ya,2) + pow(xa-xb,2));
    std::cout << "La distance entre A et B est de " << AB;
    return AB;
}


double equationF(double x, bool &ok){

    double answer;

    if(x>=1 && x<=2){answer=sqrt((x-1)*(2-x));ok=true;}
    else ok=false;
    return answer;
}

int testEquationF(){
    double x,y;
    bool ok;
    std::cout<<"Tapez x :";std::cin>>x;
    y= equationF(x,ok);
    if (ok){std::cout << "La valeur de x est "<<y << std::endl;}
    else{std::cout<< "La valeur de x n'est pas correct";}

    return 0;
}


int exchangeTwoVariables(){
    int a,b,tmp;
    std::cout << "Donnez la valeur a";
    std::cin >> a;
    std::cout << "Donnez la valeur b";
    std::cin >> b;
    std::cout << "Chargement...";
    tmp = a;
    a = b;
    b = tmp;
    std::cout << "La valeur a est " << a << " et la valeur b est " << b;

    return 0;
}

int main() {
    exchangeTwoVariables();
    return 0;
}
