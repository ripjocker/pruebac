#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

typedef struct{
    int id;
    char nombre[20];
    int edad;
    char sexo;
}stPersona;

stPersona cargaUnaPersona();
void muestraUnaPersona(stPersona p);
stPersona cargaUnaPersona2();

#endif // PERSONA_H_INCLUDED
