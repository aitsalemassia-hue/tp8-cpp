#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include "Plugin.h"

int main() {
    // 1) "Chargement dynamique" : on demande des plugins par leur nom
    std::vector<std::string> types = { "correcteur", "traducteur", "style" };

    std::vector<std::unique_ptr<Plugin>> plugins;
    for (const auto& t : types) {
        auto p = Plugin::creerPlugin(t);
        if (p)
            plugins.push_back(std::move(p));
        else
            std::cerr << "Plugin inconnu : " << t << "\n";
    }

    // 2) Texte saisi par l'utilisateur
    std::string texte;
    std::cout << "Entrez un texte : ";
    std::getline(std::cin, texte);

    std::cout << "\n Texte initial \n" << texte << "\n";

    // 3) Application successive de chaque plugin (transformation en chaîne)
    for (auto& p : plugins) {
        texte = p->traiter(texte);
        std::cout << "\nApres " << p->nom() << " \n" << texte << "\n";
    }

    return 0;   // unique_ptr detruit tout proprement
}
