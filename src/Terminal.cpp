#include <iostream>

void clear() // Limpa o Terminal
{
#if defined(_linux) || defined(unix) || defined(APPLE_)
    system("clear");
#endif

#if defined(_WIN32) || defined(_WIN64)
    system("cls");
#endif
}

// Menu de opções
// |------------|
int menu()
{
    int opcao;

    std::cout << ("\n\t╔═════════════════════════════╗\n");
    std::cout << ("\t║Escolha uma das opções abaixo║\n");
    std::cout << ("\t╠═════════════════════════════╣\n");
    std::cout << ("\t║ 1. Celsius para Fahrenheit  ║");
    std::cout << ("\n\t║ 2. Celsius para Kelvin      ║");
    std::cout << ("\n\t║ 3. Fahrenheit para Celsius  ║");
    std::cout << ("\n\t║ 4. Fahrenheit para Kelvin   ║");
    std::cout << ("\n\t║ 5. Kelvin para Celsius      ║");
    std::cout << ("\n\t║ 6. Kelvin para Fahrenheit   ║");
    std::cout << ("\n\t╚═════════════════════════════╝\n\t❯ ");

    std::cin >> opcao;

    return opcao;
}

/*-----------------------------------------------------*/
void printCtemp()
{
    std::cout << "\033[1;91m       ___  _                             \033[0m\n";
    std::cout << "\033[1;91m      / __\\| |_  ___  _ __ ___   _ __    \033[0m\n";
    std::cout << "\033[1;91m     / /   | __|/ _ \\| '_ ` _ \\ | '_ \\ \033[0m\n";
    std::cout << "\033[1;91m    / /___ | |_|  __/| | | | | || |_) |   \033[0m\n";
    std::cout << "\033[1;91m    \\____/  \\__|\\___||_| |_| |_|| .__/ \033[0m\n";
    std::cout << "\033[1;91m                                |_|       \033[0m\n";
}