#include "OperateurManager.h"
#include "OperateurNumerique.h"

size_t OperateurManager::nb = 3;
size_t OperateurManager::nbMax = 30;

OperateurManager *OperateurManager::instance = nullptr;
// donner Instance
OperateurManager &OperateurManager::donneInstance()
{
    if (instance == nullptr)
    {
        instance = new OperateurManager();
    }
    return *instance;
}
// libereInstance
void OperateurManager::libereInstance()
{
    delete instance;
    instance = nullptr;
}

