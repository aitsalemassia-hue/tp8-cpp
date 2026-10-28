#include "AnalyseurStyle.h"
#include <sstream>
#include <vector>

std::string AnalyseurStyle::nom() const {
    return "AnalyseurStyle";
}

std::string AnalyseurStyle::traiter(const std::string& texte) {
    // Découpe en phrases sur '.' (simple mais suffisant)
    std::vector<std::string> phrases;
    std::string courante;
    for (char c : texte) {
        courante += c;
        if (c == '.') { phrases.push_back(courante); courante.clear(); }
    }
    if (!courante.empty()) phrases.push_back(courante);

    // Compte les mots de chaque phrase
    int nbLongues = 0;
    for (const auto& p : phrases) {
        std::istringstream ss(p);
        std::string mot;
        int mots = 0;
        while (ss >> mot) ++mots;
        if (mots > 15) ++nbLongues;
    }

    std::string resultat = texte;
    if (nbLongues > 0) {
        resultat += "\n[AnalyseurStyle] " + std::to_string(nbLongues)
                  + " phrase(s) trop longue(s) detectee(s).";
    } else {
        resultat += "\n[AnalyseurStyle] Style OK (aucune phrase trop longue).";
    }
    return resultat;
}
