#include <iostream>

int dodawanie(int l1, int l2){
    return l1 + l2;

}

int mnozenie(int l1, int l2){
    return l1 * l2;
}

int odejmowanie(int l1, int l2) {
    return l1 - l2;

}

int dzielenie(int l1, int l2) {
    return l1 / l2;

}

int main()
{

    int liczba1 = 3278;
    int liczba2 = 409;
    int wynik;

    for(int i = 0;i <= 2 ; i++){
        switch(i) {
        case 0:
            wynik = dodawanie(liczba1, liczba2);
            break;
        case 1:
            wynik = mnozenie(liczba1, liczba2);
            break;
        case 2:
            wynik = odejmowanie(liczba1, liczba2);
            break;
        case 3:
            wynik = dzielenie(liczba1, liczba2);
            break;
        default:
            break;
        }


    

    }


}






#include <iostream>

int main()
{
    for(int i = 0;i <= 1000000 ; i++){
        std::cout << i << std::endl;

    }


}