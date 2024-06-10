#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE First, PPNODE Last,int no )
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn -> prev = NULL;

    if((*First == NULL)&&(*labs== NULL))
    {
          *First = newn;
          *Last = newn;
    }
    else
    {
         newn->next =*First;
         (*First)->prev = newn;
         *First = newn;
    }
    (*First)->prev = *Last;
    (*Last)->next = *First;
    
}

void InsertLast(PPNODE First, PPNODE Last,int no )
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn -> prev = NULL;

    if((*First == NULL)&&(*labs== NULL))
    {
          *First = newn;
          *Last = newn;
    }
    else
    {
       (*Last) ->next = newn;
       newn-> prev= *Last;
       *Last = newn;  
    }
    (*First)->prev = *Last;
    (*Last)->next = *First;    
}
void Display(PNODE First,PNODE Last)
{
   if(First == NULL && Last == NULL)
   {
    printf("Linked list is empty \n");
    return;
   } 
   printf("Element of Linked list are : \n");
   do
   {
      printf("|%d|->",First->data);
      First = First -> next;

   }while(First != Last->next);
   printf("\n");
   
}
int count(PNODE First,PNODE Last)
{
    int iCnt = 0;

   if(First == NULL && Last == NULL)
   {  
    return iCnt;
   } 
   
   do
   {
     iCnt++;
      First = First -> next;
   }while(First != Last->next);

   return iCnt;  
}
int main()
{ 
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;

     InsertFirst(&Head,&Tail,51);
     InsertFirst(&Head,&Tail,21);
     InsertFirst(&Head,&Tail,11);


    InsertLast(&Head,&Tail,101);
     InsertLast(&Head,&Tail,111);
      InsertLast(&Head,&Tail,121);

      Display(Head,Tail);
      iRet = count(Head,Tail);
      printf("number of nodes are : %d\n ",iRet);

    return 0;
}
