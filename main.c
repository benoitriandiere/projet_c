/******************************************************************************
*  ASR => M2101                                                               *
*******************************************************************************
*                                                                             *
*  N° de Sujet :  3                                                   *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Intitulé : chiffrement                                                                *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom-prénom1 :         Riandiere Benoît                                                      *
*                                                                             *
*  Nom-prénom2 :        Vidal Théo

                     *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom du fichier :   projet de c                                                        *
*                                                                             *
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "chiffrement.h"

void fgets2(char msg[200]) {
  fgets(msg,200,stdin);
  msg[strlen(msg)-1] = L'\0';
}

int main (void) {
  int choixalgo, cle;
  char msg[200];
  char vigenere[200];
  puts("Choisissez un algorithme");
  puts("1: Chiffrer César");
  puts("2: Déchiffrer César");
  puts("3: Chiffrer Vigenère");
  puts("4: Déchiffrer Vigenere");
  puts("5: QUITTER");
  printf("Saisir : ");
  scanf("%d",&choixalgo);
  while (choixalgo  < 1 || choixalgo > 5){ 
    int retourScanf = scanf("%d", &choixalgo);
      while (choixalgo  < 1 || choixalgo > 5) {
        puts("choix invalide");
        scanf("%d",&choixalgo);
        while ((getchar()) != '\n'); //nettoyer le buffer de scanf
      } 
      if (retourScanf != 1) {
        puts("Choix invalide");
        while ((getchar()) != '\n'); //nettoyer le buffer de scanf
      }
     
    }
    while ((getchar()) != '\n'); //nettoyer le buffer de scanf
    if (choixalgo == 1) {
      puts("Saisir le message");
      fgets2(msg);
      puts("Saisir la clé");
      scanf("%d", &cle);
      cesarch(msg, cle);
      printf("Message chiffré avec CESAR : %s\n", msg);
    }else if (choixalgo == 2) {
      puts("Saisir le message");
      fgets2(msg);
      puts("Saisir la clé");
      scanf("%d", &cle);
      cesardech(msg, cle);
      printf("Message déchiffré avec CESAR : %s", msg);
    }else if (choixalgo == 3) {
      puts("Saisir le message");
      fgets2(msg);
      puts("Saisir la clé");
      fgets2(vigenere);
      vigenerech(msg, vigenere);
      printf("Message chiffré avec VIGENERE : %s\n", msg);
    }else if (choixalgo == 4) {
      puts("Saisir le message");
      fgets2(msg);
      puts("Saisir la clé");
      fgets2(vigenere);
      vigeneredech(msg, vigenere);
      printf("Message déchiffré avec VIGENERE : %s\n", msg);
    }else if(choixalgo == 5) {
      puts("Au revoir !");
      exit(0);      
  }
  
}

