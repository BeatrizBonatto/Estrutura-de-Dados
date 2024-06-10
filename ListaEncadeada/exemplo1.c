//recebe caracter
//conferiri se é ( ou { ou ) ou }
//empilhar
//conferir se todos possuem par
//retornar verdadeiro ou falso

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int BemFormada (char s[]) {
  char *p; 
  int t;
  int n, i; 
  n = strlen(s);
  p = malloc((n + 1) * sizeof(char)); // Corrigido para alocar memória corretamente
  
  t = 0;
  for(i = 0; s[i] != '\0'; i++) {
    switch(s[i]) {
      case ')':
        if(t != 0 && p[t-1] == '(')
          --t;
        else
          return 0;
        break;
      case '}':
        if(t != 0 && p[t-1] == '{')
          --t;
        else
          return 0;
        break;
      default:
        p[t++] = s[i];
    }
  }
  
  free(p);
  return t == 0;
}

int main() {
  char A[] = "({()})"; // Corrigido para uma declaração de string válida
  int resultado = BemFormada(A); // Corrigido para atribuir o resultado da função a uma variável
  
  if(resultado)
    printf("A string é bem formada.\n");
  else
    printf("A string não é bem formada.\n");

  return 0;
}