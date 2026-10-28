#include "HautParleur.h"
#include <iostream>

HautParleur::HautParleur() {
    std::cout << "HautParleur cree" << std::endl;
}

HautParleur::~HautParleur() {
    std::cout << "HautParleur detruit" << std::endl;
}

void HautParleur::ouvrir() {
    std::cout << "HautParleur ouverture du haut-parleur" << std::endl;
}

void HautParleur::jouer(const std::string& son) {
    std::cout << "HautParleur lecture de : " << son << std::endl;
}

void HautParleur::fermer() {
    std::cout << "HautParleur fermeture du haut-parleur" << std::endl;
}
