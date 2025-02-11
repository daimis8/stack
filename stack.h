#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX_SIZE 5

typedef struct Stack {
    int arr[MAX_SIZE];
    int top;
    bool created;
    int count;
}Stack;



//Sukuriamas stackas
void createStack(Stack *stack);
//Ar yra tuščias, grąžina 1 = jei tuščias, grąžina 0 - jei nėra tuščias
bool isEmpty(Stack *stack);
//Ar yra pilnas, grąžina 1 = jei pilnas, grąžina 0 - jei nėra pilnas
bool isFull(Stack *stack);

//push operacija grąžina 0 jei sėkmingai pridedama reikšmė, grąžina 1 jei ne
void push(Stack *stack, int value);
//pop operacija grąžina 0 jei sėkmingai panaikinama reikšmė, grąžina 1 jei ne
int pop(Stack *stack);
//operacija, kuri į konsolę išveda stacką 
void printStack(Stack *stack);
//operacija, kuri panaikina stacką
void destroyStack(Stack *stack);
void count(Stack *stack);

#endif