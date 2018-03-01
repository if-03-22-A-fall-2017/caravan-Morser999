/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			caravan.c
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
#include "pack_animal.h"
#include "caravan.h"

struct Node{
  PackAnimal data;
  struct Node* next;
};

struct CaravanImplementation{
  struct Node* head;
  struct Node* tail;
  int length = 0;
};

Caravan new_caravan()
{
    Caravan new_caravan = (Caravan)malloc(sizeof(struct CaravanImplementation));
    return new_caravan;
}

int get_length(Caravan caravan)
{
  if(caravan->head->data != NULL){
    return 1;
  }
  return 0;
}

void delete_caravan(Caravan caravan)
{
}

void add_pack_animal(Caravan caravan, PackAnimal animal)
{
  if(caravan->head->data == NULL){
    caravan->head->data = animal;
  }
  else{
    Node* curr = caravan->head;
    while(curr->next->data == NULL){
      curr = curr->next;
    }
    curr->next->data = animal;
  }
  caravan->length += 1;

}

void remove_pack_animal(Caravan caravan, PackAnimal animal)
{
}

int get_caravan_load(Caravan caravan)
{
  return 0;
}

void unload(Caravan caravan)
{
}

int get_caravan_speed(Caravan caravan)
{
  return 0;
}
void optimize_load(Caravan caravan){}
