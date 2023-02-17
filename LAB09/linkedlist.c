/**
 * หลักการ Linked list
 * สร้าง node ใหม่
 * NodePtr temp = (NodePtr)malloc(sizeof(Node));
 * temp->value = 10;
 *
 * Node สุดท้าย
 * ___->next = NULL;
 *
 * เปลี่ยนจุดเริ่มต้นของ List
 * startPtr = temp;
 *
 * เป็น node สุดท้ายหรือป่าว
 * startPtr = _____;
 *
 * List ว่างหรือป่าว
 * if (startPtr == NULL)
 *
 */

#include <stdio.h>
#include <stdlib.h>

struct Node__
{
    int value;
    struct Node__ *next;
};

typedef struct Node__ Node;
typedef Node *NodePtr;

void printList(NodePtr startPtr)
{
    NodePtr current = startPtr;
    while (current != NULL)
    {
        printf("%d -> ", current->value);
        current = current->next;
    }
    printf("\n");
}

void addFirst(NodePtr *startPtr, int value)
{
    NodePtr temp = (NodePtr)malloc(sizeof(Node));
    temp->value = value;
    if (*startPtr == NULL)
    {
        temp->next = NULL; // temp will be the last node
        *startPtr = temp;
    }
    else
    {
        temp->next = *startPtr;
        *startPtr = temp;
    }
}

void addLast(NodePtr *startPtr, int value)
{
    NodePtr temp = (NodePtr)malloc(sizeof(Node));
    temp->value = value;
    temp->next = NULL;

    if (*startPtr == NULL)
    {
        *startPtr = temp;
    }
    else
    {
        NodePtr current = *startPtr;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = temp;
    }
}
int main()
{

    NodePtr startPtr; // the starting point of Linked list
    startPtr = NULL;

    addLast(&startPtr, 100);
    addFirst(&startPtr, 50);
    addFirst(&startPtr, 20);
    addFirst(&startPtr, 40);
    addLast(&startPtr, 200);

    printList(startPtr);
    return 0;
}
