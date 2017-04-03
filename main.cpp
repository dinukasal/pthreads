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
#include <stdlib.h>
#include <math.h>

using namespace std;

float RandomFloat(float min, float max) {
    float r = (float) rand() / (float) RAND_MAX;
    return min + r * (max - min);
}

int randInt(int min,int max){
    return min + (rand() % (int)(max - min + 1));
}

struct LinkedList {
    int value;
    LinkedList *next;
};

LinkedList *linkedList;

bool Member() {

}

void Insert() {
    LinkedList *temp = new LinkedList();
    temp->value=int(RandomFloat(0,pow(2,16)-1));
}

void Initialize() {
    linkedList = new LinkedList();
    linkedList->value = RandomFloat(0,pow(2,16)-1);
}

int main() {
    cout<< "Without pthreads"<<endl;
    cout<<int(randInt(0,pow(2,16)-1))<<endl;
    return 0;
}