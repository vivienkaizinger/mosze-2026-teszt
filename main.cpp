#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //Az N_ELEMENTS egybe volt írva _ nélkül
    int *b = new int[N_ELEMENTS];
    //Nem volt ; a sor végén, illetve nem "" között volt a szöveg
    std::cout << "1-100 ertekek duplazasa"<<std::endl;
    //Nem volt befejezve a for ciklusmag
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //0-99-ig írta volna ki a számok duplázását
        b[i] = (i+1) * 2;
    }
    //Nem volt befejezve a for ciklusmag
    for (int i = 0; i<N_ELEMENTS; i++)
    {
        //Nem volt ; a sor végén
        std::cout << "Ertek:"<<b[i]<<std::endl;
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    //Nem volt kezdőérték
    int atlag=0;
    //; helyett , volt
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //Nem volt ; a sor végén
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "May the Force be with you" << atlag << std::endl;
    return 0;
}