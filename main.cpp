#pragma region JAVÍTOTT KÓD
#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; 
    std::cout << "1-100 ertekek duplazasa\n";
    for (int i = 0; i < N_ELEMENTS; i++) 
    {
        b[i] = (i+1) * 2; 
    }
    for (int i = 0; i < N_ELEMENTS; i++) 
    {
        std::cout << "Ertek:" << b[i] << "\n"; 
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    double atlag = 0; 
    for (int i = 0; i < N_ELEMENTS; i++) 
    {
        atlag += b[i]; 
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl; 

    delete[] b; 

    std::cout << "Itt voltam, sziasztok!" << std::endl; 

    return 0;
}
#pragma endregion
#pragma region RÉGI KÓD
/*
#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //NELEMENTS helyett N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' //charként nem jó, ennek stringnek kell lennie és hiányzó ';'
    for (int i = 0;) //hiányos header( condition és inkrementálás)
    {
        b[i] = i * 2; // b[i] = (i + 1) * 2;
    }
    for (int i = 0; i; i++) //i=0 nem fog lefutni ==> for (int i = 0; i < N_ELEMENTS; i++)
    {
        std::cout << "Ertek:" //pontosvessző hiányzik és az érték sincs kiírva std::cout << "Ertek: " << b[i] << "\n";
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //double vagy float, átlag nem mindig egész szám és nem árt inícializáni (= 0)
    for (int i = 0; i < N_ELEMENTS, i++) //condition után ',' helyett ';'
    {
        atlag += b[i] // ';' hiányzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl; // "\n" egyébként gyorsabb

    //delete[] b; fel kell szabadítani a dinamikusan foglalt memóriát

    return 0;
}*/
#pragma endregion

