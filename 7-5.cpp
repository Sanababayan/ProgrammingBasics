//#include<stdio.h>
#include "grader.h"
#include<malloc.h>

struct linkedlist {
char value;
struct linkedlist *next;
struct linkedlist *prev;
//struct linkedlist *head;
};

struct linkedlist* create_linkedlist()
{
    struct linkedlist * head = (struct linkedlist *) malloc(sizeof(struct linkedlist));
    char value='\0';
head->value = value;
head->next = NULL;
head->prev = NULL;
return head;
}

/*void add(struct linkedlist *head, char num) {
  linkedlist *current_node = head;
  linkedlist *new_node;
 while ( current_node != NULL && current_node->next != NULL) {
   current_node = current_node->next;
  }

  new_node = (linkedlist *) malloc(sizeof(linkedlist));
  new_node->data = num;
  new_node->next= NULL;
  if (current_node != NULL)
    current_node->next = new_node;
  else
     head = new_node;
return head;
}*/

void add(struct linkedlist* head, char value)
{
    struct linkedlist * to_be_added = (struct linkedlist *) malloc(sizeof(struct linkedlist));
    while(head->next!=NULL)
    {
        head=head->next;
    }
to_be_added->value = value;
to_be_added->next = NULL;
to_be_added->prev = head;
head->next = to_be_added;
}

void add_all(struct linkedlist* head, int n, char kal[])
{
    for(int i=0;i<n;i++)
    {
        add(head,kal[i]);
    }
}

char get(int n,struct linkedlist* head)
{
    head=head->next;
    for(int i=0;i<n;i++)
    {
        head=head->next;
    }
    return head->value;
        /*if (head == NULL)
        return -1;
    if (n == 0)
        return head->value;
    return get(head->next, n - 1);*/
}

void remove_with_char(char value1, struct linkedlist* head)
{
    while(head->value!=value1) {
    head = head->next;
    if(head==NULL)
    {
        return;
    }
}
   if(head->next == NULL)
    {
        head->prev->next=NULL;
    }else
    {
        head->prev->next=head->next;
        head->next->prev=head->prev;
    }
    free(head);

/*while (head && head->value == value1)
        head = head->next;
    while (head) {
        if (head->value == value1)
            prev->next = head->next;
        else
            prev = head;
        head = head->next;*/

        /*
    struct linkedlist * first_ = head;

    if(node != NULL) {
if(node->prev != NULL)
node->prev->next = node->next;
else
first_ = first->next;
if(node->next != NULL)
node->next->prev = node->prev;
free(node);
}

return first_;
*/
}

void remove_with_index(int pos, struct linkedlist* head)
{
    for(int i=0;i<=pos;i++)
    {
        head=head->next;
    }if(head->next == NULL)
    {
        head->prev->next=NULL;
    }else
    {
        head->prev->next=head->next;
        head->next->prev=head->prev;
    }
    free(head);
    /*struct linkedlist* temp = head;
    int i;
    if (pos == 0) {
        head = head->next;
        temp->next = NULL;
        free(temp);
    }
    else {
        for (i = 0; i < pos - 1; i++) {
            temp = temp->next;
        }
        struct linkedlist* del= temp->next;
        temp->next = temp->next->next;
        del->next = NULL;
        free(del);
    }*/
}
int get_index_of(char valuel, struct linkedlist* head)
{
    head=head->next;
    int i=0;
    while(head->value!=valuel) {
    head = head->next;
    i++;
    if(head==NULL)
        return -1;
}
return i;

}

int size(struct linkedlist* head)
{
    int i=0;
    while(head->next!=NULL)
    {
        head=head->next;
        i++;
    }
    return i;
}
