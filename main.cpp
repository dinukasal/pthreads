
/* 
 * File:   main.cpp
 * Author: dinuka and ravidu
 * 
 * Pthreads usage - Lab 2
 * 
 * Created on April 3, 2017, 3:58 AM
 */

#include <iostream>
#include <pthread.h>
#include <stdlib.h>
#include <math.h>
#include <string>

struct LinkedList {
    int value;
    struct LinkedList *next;
};

using namespace std;
LinkedList *head;

int randInt(int min,int max){
    return min + (rand() % (int)(max - min + 1));
}

bool Member(LinkedList *node) {
    
}

void Insert(LinkedList *node) {
    LinkedList *temp = new LinkedList();
    temp->value=int(randInt(0,pow(2,16)-1));
    temp->next=NULL;
    node->next=temp;
}

void Initialize() {
    head = new LinkedList();
    head->value = randInt(0,pow(2,16)-1);
    head->next=NULL;
}

void printList(LinkedList *head){
    int i=0;
    LinkedList *curpos=head;
    while(curpos!=NULL){
        cout<< to_string(i)+" "<<curpos->value<< "  "<<curpos->next<<endl;
        i++;
        if(i>10)
            break;
        curpos=head->next;
    }
}

int main() {
    cout<< "Without pthreads"<<endl;
    Initialize();
    for(int i=0;i<5;i++)
        Insert(head);
    
    printList(head);
    return 0;
}
