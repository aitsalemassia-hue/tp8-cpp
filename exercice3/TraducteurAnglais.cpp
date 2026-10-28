#include "TraducteurAnglais.h"
#include <cctype>

namespace {
    bool estLettre(char c) { return std::isalnum(static_cast<unsigned char>(c)); }

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

std::string TraducteurAnglais::nom() const {
    return "TraducteurAnglais";
}

std::string TraducteurAnglais::traiter(const std::string& texte) {
    std::string t = texte;
    t = remplacerMot(t, "bonjour", "hello");
    t = remplacerMot(t, "monde",   "world");
    t = remplacerMot(t, "chat",    "cat");
    t = remplacerMot(t, "maison",  "house");
    t = remplacerMot(t, "et",      "and");
    return t;
}
