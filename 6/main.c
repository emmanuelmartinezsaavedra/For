/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 23 de septiembre de 2020, 09:47 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    char frase;
    printf("Ingresar la cadena de caracteres finalizada en punto\n");
    for(frase; frase!='.';){
        scanf("%c", &frase);
        switch(frase){
            case 'a': frase='e'; break;
            case 'e': frase='i'; break;
            case 'i': frase='o'; break;
            case 'o': frase='u'; break;
            case 'u': frase='a'; break;
        }
        printf("%c", frase);
    }

    return (EXIT_SUCCESS);
}

