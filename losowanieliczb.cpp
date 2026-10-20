#include <iostream>
#include <random>
#include <vector>

int losuj() {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution losowanie(0, 4);

    return losowanie(mt);
}

std::string pytania(int numerPytania) {
    std::vector<std::string> pyt ={
        "W którym roku był chrzest Polski?"
        "Stolicą Francji jest?"
        "Najdłuższa rzeka w polsce to:"
        "W którym roku zaczeła się II wojna światowa?"
        "W którym roku przystąpiliśmy do unii europejskiej?"

    };

    return pyt(numerPytania);
}

std::string poprawneOdpowiedzi(int numerOdpowiedzi){
    std::vector<std::string> popOdp = {
        "966",
        "Paryz",
        "Wisla"
        "1939"
        "2005"
    };
    return popOdp[numerOdpowiedzi];
}

int main(){
    int numer = losuj();

    std::cout << pytania(numer) << std::endl;
    std::string odpowiedzGracza;
    std::cout << "Twoja odpowiedz: ";
    std::cin >> odpowiedzGracza;

    if (odpowiedzGracza == poprawneOdpowiedzi(numer)){
        std::cout << "Dobrze";
    } else{
        std::cout << "To jest zla odpowiedz";
    }
}