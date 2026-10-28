#include "SortieHDMI.h"
#include <iostream>

SortieHDMI::SortieHDMI() {
    std::cout << "SortieHDMI cree" << std::endl;
}

SortieHDMI::~SortieHDMI() {
    std::cout << "SortieHDMI detruit" << std::endl;
}

void SortieHDMI::ouvrir() {
    std::cout << "SortieHDMI liaison HDMI activee" << std::endl;
}

void SortieHDMI::jouer(const std::string& son) {
    std::cout << "SortieHDMI envoi du son vers l'ecran : " << son << std::endl;
}

void SortieHDMI::fermer() {
    std::cout << "SortieHDMI liaison HDMI coupee" << std::endl;
}
