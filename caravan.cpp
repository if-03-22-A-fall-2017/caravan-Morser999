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

#include "caravan.h"
#include <stdio.h>
#include <stdlib.h>
#include "general.h"


struct Node {
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
  Caravan new_c = (Caravan)malloc(sizeof(struct CaravanImplementation));
  return new_c;
}

int get_length(Caravan caravan)
{
  return caravan->length;

}

void delete_caravan(Caravan caravan)
{
  sfree(caravan);
}

void add_pack_animal(Caravan caravan, PackAnimal animal)
{
  if (animal == 0) {
    return;
  }
  struct Node* new_pack_animal = (struct Node*)malloc(sizeof(struct Node*));
  new_pack_animal->data = animal;
  new_pack_animal->next = 0;
  add_to_caravan(new_pack_animal->data,caravan);


  if(caravan->head == 0)
  {
    caravan->head = new_pack_animal;
    caravan->tail = caravan->head;
  }
  else
  {
    caravan->tail->next = new_pack_animal;
    caravan->tail = caravan->tail->next;
  }
    caravan->length++;


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

void optimize_load(Caravan caravan){

}
