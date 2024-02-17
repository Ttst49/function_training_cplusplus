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

bool isNumberPrime(){

    int n;
    std::cout << "Définissez un nombre n pour savoir si il est premier ou non";
    std::cin >> n;

    int j;

    for (j = 2; j <= n-1; j++) {
        if (n%j==0){
            break;
        }
    }
    if (j> sqrt(n)){
        std::cout << "Premier";
    } else{
        std::cout << "Pas premier";
    }

    return true;
}


bool checkIfVInArray(){

    int n;
    int t[n];
    bool b = false;

    do {
        std::cout << "Donnez une valeur à n";
        std::cin >> n;
    } while (n <=9);


    for (int j = 0; j <= n; j++) {
        std::cout << "Donnez une valeur pour t["<< j <<"]";
        std::cin >> t[j];
    }

    for (int i = 0; i <= 10; i++) {
        if (t[i] >=1 && t[i] <= 10){
            b = true;
        }
    }
    if (b){
        std::cout << "Il existe une valeur entre 1 e 10 dans les 10 premieres valeurs du tableau t";
    }

    std::cout << b;
    return b;
}

int main() {
    isNumberPrime();
    return 0;
}
