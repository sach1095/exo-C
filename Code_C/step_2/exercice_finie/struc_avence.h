#ifndef DEF_MAIN_H
#define DEF_MAIN_H

typedef struct Personne Personne;
struct Personne
{
  int x;
  int y;

};

#define MONTRE()            printf("%d\n", nombre.x);


void initialiserPersonne(Personne *nombre);
FILE* fopen(const char* nomDuFichier, const char* modeOuverture);
int fclose(FILE* pointeurSurFichier);
void triple(int *nombreatriple, int *Multiplicateur);


#endif
