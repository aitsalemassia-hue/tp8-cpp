

#ifndef EXERCICE3_PLUGIN_H_
#define EXERCICE3_PLUGIN_H_

#pragma once
#include <string>
#include <memory>

class Plugin {
public:
    virtual ~Plugin();                                    // key function (définie dans .cpp)

    virtual std::string nom() const = 0;
    virtual std::string traiter(const std::string& texte) = 0;

    // Factory : crée le bon plugin à partir d'un identifiant textuel
    static std::unique_ptr<Plugin> creerPlugin(const std::string& type);
};
#endif /* EXERCICE3_PLUGIN_H_ */
