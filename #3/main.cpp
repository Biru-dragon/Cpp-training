#include <iostream>

/*
    std::cout : affichage standard (en mémoire tampon)
    std::cerr : erreurs (affichage direct)
    std::clog : journalisation (en mémoire tampon)

    std::endl : retour à la ligne (\n) + flush
    std::flush

    \n : retour à la ligne
    \t : tabulation
    \\ : afficher un antislash
*/
int main()
{
    std::cerr << "Hello World !" << std::endl;
    return 0;
}