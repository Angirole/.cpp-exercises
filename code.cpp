#include <iostream>
#include <random>

char spin() {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> losuj(0, 1);
    std::vector<char> symbols = { '$', 'X', 'Q', '&', '%' };

    int znak;
    znak = losuj(mt);

    return symbols[znak];
}

int main()
{
    int cash = 10;
    char start;

    while (cash != 0) {
        std::cout << "Twoj stan konta to: " << cash << "$" << std::endl;
        std::cout << "Nacisnij 's' by grac dalej: ";
        std::cin >> start;
        if (start == 's') {
            char wynik1 = spin();
            char wynik2 = spin();
            char wynik3 = spin();
            std::cout << "[ " << wynik1 << " ]" << "[ " << wynik2 << " ]" << "[ " << wynik3 << " ]\n\n";

            if (wynik1 == wynik2 && wynik1 == wynik3 && wynik2 == wynik3) {
                std::cout << "JACKPOT! Wszystkie trzy symbole takie same: " << std::endl;
                std::cout << "+100$" << std::endl;
                cash += 100;
            }
            else if (wynik1 == wynik2) {
                std::cout << "Dwa symbole takie same: " << std::endl;
                std::cout << "+10$" << std::endl;
                cash += 10;
            }
            else {
                std::cout << "Przegrana: " << std::endl;
                std::cout << "-2$" << std::endl;
                cash -= 2;
            }
        }
    }
    return 0;
}