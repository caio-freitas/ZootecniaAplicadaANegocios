#ifndef ATIVIDADEDEESFORCOFIXO_H
#define ATIVIDADEDEESFORCOFIXO_H
#include "Atividade.h"


class AtividadeDeEsforcoFixo : public Atividade{

public:
    AtividadeDeEsforcoFixo(string nome, int horasNecessarias);
    virtual ~AtividadeDeEsforcoFixo();
    virtual int getHorasNecessarias();
    virtual double getCusto();
    virtual int getDuracao();


protected:
    string nome;
    int horasNecessarias;
    virtual bool ehPrazoFixo();


};

#endif // ATIVIDADEDEESFORçOFIXO_H
