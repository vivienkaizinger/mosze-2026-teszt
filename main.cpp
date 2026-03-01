#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //Az N_ELEMENTS egybe van írva _ nélkül
    int *b = new int[NELEMENTS];
    //Nincs ; a sor végén, illetve nem "" között van a szöveg
    std::cout << '1-100 ertekek duplazasa'
    //Nincs befejezve a for ciklusmag
    for (int i = 0;)
    {
        //0-99-ig írja ki a számok duplázását
        b[i] = i * 2;
    }
    //Nincs befejezve a for ciklusmag
    for (int i = 0; i; i++)
    {
        //Nincs ; a sor végén
        std::cout << "Ertek:"
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    //Nincs kezdőérték
    int atlag;
    //; helyett ,
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        //Nincs ; a sor végén
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}