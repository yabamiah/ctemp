#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "../include/TempConversion.hpp"
#include "../include/Terminal.hpp"
#include "../include/MyTime.hpp"

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
    std::cout << "\033[1;93m               |·Bem-Vindo·|\033[0m\n";

    do
    {
        switch (menu())
        {
        case 1:
            std::cout << ("\nDigite a temperatura em Celsius: ");
            std::cin >> input;
            std::cout << ("\nA temperatura em Fahrenheit é: ") << celsiusFahrenheit(input);
            break;
        case 2:
            std::cout << ("\nDigite a temperatura em Celsius: ");
            std::cin >> input;
            std::cout << ("\nA temperatura em Kelvin é: ") << celsiusKelvin(input);
            break;
        case 3:
            std::cout << ("\nDigite a temperatura em Fahrenheit: ");
            std::cin >> input;
            std::cout << ("\nA temperatura em Kelvin é: ") << fahrenheitCelsius(input);
            break;
        case 4:
            std::cout << ("\nDigite a temperatura em Fahrenheit: ");
            std::cin >> input;
            std::cout << ("\nA temperatura em Celsius é: ") << fahrenheitKelvin(input);
            break;
        case 5:
            std::cout << ("\nDigite a temperatura em Kelvin: ");
            std::cin >> input;
            std::cout << ("\nA temperatura em Celsius é: ") << kelvinCelsius(input);
            break;
        case 6:
            std::cout << ("\nDigite a temperatura em Kelvin: ");
            std::cin >> input;
            std::cout << ("\nA temperatura em Fahrenheit é: ") << kelvinFahrenheit(input);
            break;
        default:
            printf("\nOpção inválida!\n");
        }

        // Final da ação
        std::cout << ("\n\nDeseja fazer outra conversão(S/N)? ");
        std::cin >> reniciarPrograma;

        clear();
    } while (reniciarPrograma == 'S');

    // Marcando o tempo final
    // |--------------------|
    clock_t t2 = tac();
    std::cout << "Tempo de processamento: " << CompTime(t1, t2) << " ms\n";

    std::cout << ("----------Fim do programa----------");
}