#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "TempConversion.hpp"
#include "Terminal.hpp"
#include "MyTime.hpp"

// Função principal
// |------------------|
int main()
{
    // Marcando o tempo atual
    // |--------------------|
    clock_t t1 = tic();

    // Definindo variáveis
    // |------------------|
    double input;
    char reniciarPrograma;

    // Setando o teclado
    // |----------------|
    setlocale(LC_ALL, "");

    // Saudações
    // |--------|
    printCtemp();
    std::cout << "\033[1;93m               |·Bem-Vindo·|\033[0m\n" << std::endl;

    do
    {
        switch (menu())
        {
        case 1:
            std::cout << ("\n\tDigite a temperatura em Celsius: ");
            std::cin >> input;
            std::cout << ("\n\tA temperatura em Fahrenheit é: ") << celsiusFahrenheit(input);
            break;
        case 2:
            std::cout << ("\n\tDigite a temperatura em Celsius: ");
            std::cin >> input;
            std::cout << ("\n\tA temperatura em Kelvin é: ") << celsiusKelvin(input);
            break;
        case 3:
            std::cout << ("\n\tDigite a temperatura em Fahrenheit: ");
            std::cin >> input;
            std::cout << ("\n\tA temperatura em Celsius é: ") << fahrenheitCelsius(input);
            break;
        case 4:
            std::cout << ("\n\tDigite a temperatura em Fahrenheit: ");
            std::cin >> input;
            std::cout << ("\n\tA temperatura em Kelvin é: ") << fahrenheitKelvin(input);
            break;
        case 5:
            std::cout << ("\n\tDigite a temperatura em Kelvin: ");
            std::cin >> input;
            std::cout << ("\n\tA temperatura em Celsius é: ") << kelvinCelsius(input);
            break;
        case 6:
            std::cout << ("\n\tDigite a temperatura em Kelvin: ");
            std::cin >> input;
            std::cout << ("\n\tA temperatura em Fahrenheit é: ") << kelvinFahrenheit(input);
            break;
        default:
            printf("\n\tOpção inválida!\n");
        }

        // Final da ação
        std::cout << ("\n\n\tDeseja fazer outra conversão(S/N)? ");
        std::cin >> reniciarPrograma;

        clear();
    } while (reniciarPrograma == 'S');

    // Marcando o tempo final
    // |--------------------|
    clock_t t2 = tac();

    std::cout << "  Tempo de processamento: " << CompTime(t1, t2) << " ms\n";

    std::cout << ("\033[1;95m├───────⛅─\033[0m Fim do programa \033[1;95m─⛅───────┤\033[0m");
}