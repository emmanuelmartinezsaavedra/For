/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 23 de septiembre de 2020, 10:14 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int x,y;
    printf("Ingresar un numero del 1 al 10\n");
    scanf("%d", &x);
    for(x<1; x>10;){
        printf("No es un numero del 1 al 10\n");
        printf("Vuelva a intrudcir un numero del 1 al 10\n");
        scanf("%d", &x);
    }
    for(y; y<10;){
        y=y+1;
        printf("%d * %d: %d\n",x,y,(x*y));
    }
        
    

    return (EXIT_SUCCESS);
}

