

#include "Plugin.h"
#include "CorrecteurOrthographique.h"
#include "TraducteurAnglais.h"
#include "AnalyseurStyle.h"

// Key function : garantit l'émission de la vtable de Plugin dans ce .o
Plugin::~Plugin() = default;

std::unique_ptr<Plugin> Plugin::creerPlugin(const std::string& type) {
    if (type == "correcteur")  return std::make_unique<CorrecteurOrthographique>();
    if (type == "traducteur")  return std::make_unique<TraducteurAnglais>();
    if (type == "style")       return std::make_unique<AnalyseurStyle>();
    return nullptr;   // type inconnu
}
