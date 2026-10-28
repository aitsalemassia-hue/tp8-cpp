#include "CasqueBT.h"
#include <iostream>

CasqueBT::CasqueBT() {
    std::cout << "CasqueBT cree" << std::endl;
}

CasqueBT::~CasqueBT() {
    std::cout << "CasqueBT detruit" << std::endl;
}

void CasqueBT::ouvrir() {
    std::cout << "CasqueBT connexion Bluetooth etablie" << std::endl;
}

void CasqueBT::jouer(const std::string& son) {
    std::cout << "CasqueBT diffusion sans fil de : " << son << std::endl;
}

void CasqueBT::fermer() {
    std::cout << "CasqueBT deconnexion Bluetooth" << std::endl;
}
