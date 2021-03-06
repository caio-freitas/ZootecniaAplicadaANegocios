#include "AtividadeDeEsforcoFixo.h"
#include "Recurso.h"
#include "Pessoa.h"

AtividadeDeEsforcoFixo::AtividadeDeEsforcoFixo(string nome, int horasNecessarias) :
    Atividade(nome), horasNecessarias(horasNecessarias){
    if (horasNecessarias <= 0)
        throw new invalid_argument("horas menor que 0");
}

AtividadeDeEsforcoFixo::~AtividadeDeEsforcoFixo(){
    cout << "deletado" << endl;
}

int AtividadeDeEsforcoFixo::getDuracao(){ // PRECISA ARRUMAR, EHPESSOA EH PROTCED E DA RUIM, N DA PRA CHAMAR GETHORASDIARIAS
    if (terminada)
        return this->duracaoReal;
    else {
        double horasPessoas = 0;
        for (int i=0; i < getQuantidadeDeRecursos(); i++){
            Pessoa* p = dynamic_cast<Pessoa*>(recursos[i]);
            if (p!=NULL)
                horasPessoas = horasPessoas + p->getHorasDiarias();
        }
        return getHorasNecessarias()/horasPessoas;
    }
}
int AtividadeDeEsforcoFixo::getHorasNecessarias(){
    return this->horasNecessarias;
}
