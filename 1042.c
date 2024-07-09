#include <stdio.h>

int main(){
  char filo[15], classe[15], ordem[15];
  scanf("%s", filo);
  if(strcmp(filo,"vertebrado")==0){
    scanf("%s", classe);
    if (strcmp(classe,"ave")==0){
      scanf("%s", ordem);
      if (strcmp(ordem,"carnivoro")==0){
        printf("aguia\n");
      } else if (strcmp(ordem,"onivoro")==0){
        printf("pomba\n");
      }
    } else if(strcmp(classe,"mamifero")==0){
      scanf("%s", ordem);
      if (strcmp(ordem,"onivoro")==0){
        printf("homem\n");
      } else if (strcmp(ordem,"herbivoro")==0){
        printf("vaca\n");
      }
    }
  } else if(strcmp(filo,"invertebrado")==0){
      scanf("%s", classe);
      if(strcmp(classe,"inseto")==0){
        scanf("%s", ordem);  
        if(strcmp(ordem,"hematofago")==0){
          printf("pulga\n");
        } else if(strcmp(ordem,"herbivoro")==0){
          printf("lagarta\n");
        }
      } else if (strcmp(classe,"anelideo")==0){
        scanf("%s", &ordem);  
        if(strcmp(ordem,"hematofago")==0){
          printf("sanguessuga\n");
        } else if(strcmp(ordem,"onivoro")==0){
          printf("minhoca\n");
        }
      }
  }

  return 0;
}
