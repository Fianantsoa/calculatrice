/*Pour transformer une chaîne de caractères en un entier en C++, vous pouvez utiliser la
fonction `std::stoi()` si vous travaillez avec des chaînes de caractères de type `std::string`,
 ou `std::atoi()` si vous travaillez avec des chaînes de caractères de type C(`const char *`).
 Voici comment les utiliser :

1. Avec `std::stoi()` :*/
#include <iostream>
#include <string>

int main()
{
    std::string str = "123";
    int intValue = std::stoi(str);
    std::cout << "The integer value is: " << intValue << std::endl;
    return 0;
}

// 2. Avec `std::atoi()` :
#include <iostream>
#include <cstdlib> // Pour atoi

int main()
{
    const char *str = "123";
    int intValue = std::atoi(str);
    std::cout << "The integer value is: " << intValue << std::endl;
    return 0;
}

/*Pour découper une chaîne de caractères en sous - chaînes,vous pouvez utiliser la fonction
`std::string::substr()`, ou vous pouvez utiliser la bibliothèque `<sstream>` pour des
manipulations de chaînes de caractères plus complexes.Voici un exemple d'utilisation de `std::string::substr()` :
*/
#include <iostream>
#include <string>

int main()
{
    std::string str = "Hello, World!";
    std::string sub1 = str.substr(0, 5); // Découpe la chaîne de caractères de la position 0 à la position 5 (non incluse)
    std::string sub2 = str.substr(7);    // Découpe la chaîne de caractères à partir de la position 7 jusqu'à la fin
    std::cout << "Substring 1: " << sub1 << std::endl;
    std::cout << "Substring 2: " << sub2 << std::endl;
    return 0;
}
/*N'oubliez pas que ces opérations peuvent être plus complexes selon vos besoins spécifiques,
mais ces exemples devraient vous donner un bon point de départ.*/

#include <iostream>
#include <string>

int main()
{
    int nombre = 123;
    std::string chaine = std::to_string(nombre);
    std::cout << "Chaine : " << chaine << std::endl;
    return 0;
}
