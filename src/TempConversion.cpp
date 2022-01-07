#include <iostream>

// Converter Kelvin para Fahrenheit
// |-------------------------------|
double kelvinFahrenheit(double tk)
{
    return (((tk - 273.15) * 9) / 5) + 32;
}

// Converter Kelvin para Celsius
// |----------------------------|
double kelvinCelsius(double tk)
{
    return tk - 273.15;
}

// Converter Fahrenheit para Kelvin
// |-------------------------------|
double fahrenheitKelvin(double tf)
{
    return (((tf - 32) * 5) / 9) + 273.15;
}

// Converter Fahrenheit para Celsius
// |--------------------------------|
double fahrenheitCelsius(double tf)
{
    return ((tf - 32) * 5) / 9;
}

// Converter Celsius para Kelvin
// |----------------------------|
double celsiusKelvin(double tc)
{
    return tc + 273.15;
}

// Converter Celsius para Fahrenheit
// |--------------------------------|
double celsiusFahrenheit(double tc)
{
    return ((9 * tc) / 5) + 32;
}