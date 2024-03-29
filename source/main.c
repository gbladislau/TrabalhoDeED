//#define NDEBUG
#include <stdlib.h>
#include <assert.h>
#include "../include/EdCare.h"

int main(int argc, char const *argv[]){
    assert(argc > 1);

    EdCare Sistema_EdCare = CriarEdCare();

    CriaVinculosdeApoioEdCare(Sistema_EdCare);
    CriaVinculosdeCuidadoresEdCare(Sistema_EdCare);

    for(int i = 0; i < atoi(argv[1]); i++){
        AtualizarEstruturasEdCare(Sistema_EdCare);
        ProcessarInformacoesEdCare(Sistema_EdCare);
    }

    DeletarEdCare(Sistema_EdCare);

    return 0;
}
