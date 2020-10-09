/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 22 de septiembre de 2020, 08:42 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int x=1,m=35,m2,suma;
    for(x=1; x<=20; x++){
        m2=m2+m;
        suma=suma+m2;
        
    }
    printf("%d", suma);
    return (EXIT_SUCCESS);
}

