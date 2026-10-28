

#include "CorrecteurOrthographique.h"
#include <cctype>

namespace {
    bool estLettre(char c) { return std::isalnum(static_cast<unsigned char>(c)); }

    // Remplace "avant" par "apres" en respectant les frontières de mots
    std::string remplacerMot(std::string t, const std::string& avant, const std::string& apres) {
        size_t pos = 0;
        while ((pos = t.find(avant, pos)) != std::string::npos) {
            bool gauche = (pos == 0) || !estLettre(t[pos - 1]);
            bool droite = (pos + avant.size() >= t.size()) || !estLettre(t[pos + avant.size()]);
            if (gauche && droite) {
                t.replace(pos, avant.size(), apres);
                pos += apres.size();
            } else {
                pos += avant.size();
            }
        }
        return t;
    }
}

std::string CorrecteurOrthographique::nom() const {
    return "CorrecteurOrthographique";
}

std::string CorrecteurOrthographique::traiter(const std::string& texte) {
    std::string t = texte;
    t = remplacerMot(t, "bonjours", "bonjour");
    t = remplacerMot(t, "acceuil",  "accueil");
    t = remplacerMot(t, "language", "langage");
    t = remplacerMot(t, "sa",       "ça");   // exemple naïf, à affiner
    return t;
}

