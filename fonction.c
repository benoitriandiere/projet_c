#include <string.h>
#include <stdlib.h>
#include "chiffrement.h"

void cesarch(char* msg, short cleph) {
    unsigned int i = 0;
    short rang;
    while( msg[i] != '\0'){
        if( ( msg[i] >= 'a') && (msg[i] <= 'z') ){
            rang = (msg[i] - 'a' + cleph) % 26;
            if( rang < 0) rang += 26;
            msg[i] = 'a' + rang;
        }
        else if(( msg[i] >= 'A') && (msg[i] <= 'Z')){
            rang = (msg[i] - 'A' + cleph) % 26;
            if( rang < 0) rang += 26;
            msg[i] = 'A' + rang;
        }
        else {
            msg[i] = msg[i];
        }
        i++;
    }
    msg[i] = '\0';
}

void cesardech(char msg[], int cleph) {
  cesarch(msg, -cleph);
}


void vigenerech (char * msg, char * cle) {
    unsigned int i = 0;
    unsigned int y = 0;
    short rang;
    char *cle_vigenere = malloc(sizeof(char) * strlen(msg));
    for (y = 0; y < strlen(msg); y++) { //répéter la clé
        cle_vigenere[y] = cle[i];
        i++;
        if (i == strlen(cle)) {
          i = 0;
        }
    }
    i = 0;
    y = 0;
    while( msg[i] != '\0'){
        if( ( msg[i] >= 'a') && (msg[i] <= 'z') ){
              rang = (msg[i] - 'a' + 13 + cle_vigenere[y]) % 26;
              if( rang < 0) rang += 26;
              msg[i] = 'a' + rang;
              y++;
          }
          else if(( msg[i] >= 'A') && (msg[i] <= 'Z')){
              rang = (msg[i] - 'A' + 13 + cle_vigenere[y]) % 26;
              if( rang < 0) rang += 26;
              msg[i] = 'A' + rang;
              y++;
          } 
          i++;
         }
       msg[i] = '\0';
       free(cle_vigenere);
    }

void vigeneredech(char * msg, char * cle) {
    unsigned int i = 0;
    unsigned int y = 0;
    short rang;
    char *cle_vigenere = malloc(sizeof(char) * strlen(msg));
    for (y = 0; y < strlen(msg); y++) { //répéter la clé
        cle_vigenere[y] = cle[i];
        i++;
        if (i == strlen(cle)) {
          i = 0;
        }
    }
    i = 0;
    y = 0;
    while( msg[i] != '\0'){
        if( ( msg[i] >= 'a') && (msg[i] <= 'z') ){
              rang = (msg[i] - 'a' + 13 - cle_vigenere[y]) % 26;
              if( rang < 0) rang += 26;
              msg[i] = 'a' + rang;
              y++;
          }
          else if(( msg[i] >= 'A') && (msg[i] <= 'Z')){
              rang = (msg[i] - 'A' + 13 - cle_vigenere[y]) % 26;
              if( rang < 0) rang += 26;
              msg[i] = 'A' + rang;
              y++;
          } 
          i++;
         }
       msg[i] = '\0';
       free(cle_vigenere);
}
