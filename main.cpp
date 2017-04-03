/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: dinuka
 *
 * Created on April 3, 2017, 3:58 AM
 */

#include <iostream>
#include <pthread.h>

using namespace std;


struct LinkedList{
    int value;
    LinkedList *next;
};

bool Member(){
    
}

void *print_message(void*){

    cout << "Threading\n";
}



int main() {

    pthread_t t1;

    pthread_create(&t1, NULL, &print_message, NULL);
    cout << "Hello";

    return 0;
}