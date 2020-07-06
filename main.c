#include <stdio.h>
#include <stdlib.h>
typedef struct node Node;
struct node {
    int data;
    Node* next;
};
Node *head,*tail = NULL;;
//head = 0;
Node *create_node(int item,Node *next)
{
    for(int item=0;item<=1000;item++){
    Node *new_node = (Node *)malloc(sizeof(Node));
    if (new_node == NULL){  //if there are any error new_node will assign NULL
        printf("Error! Could Not Create A New Node\n");
        exit(1);
    }else{
            new_node->data = item;
            new_node->next = next;
            if(item==500){
                continue;
            }
        printf("data = %d\n",new_node->data);
         }

    }

    return 0;
}
Node *add_node(int item,Node *next){
item=500;
    Node *new_node = (Node *)malloc(sizeof(Node));
    if(new_node->data==499){
    new_node->next= item;
    //new_node->next = 501;
    }
 return create_node(499,500);
}
/*Node *create_node2(int item,Node *next)
{
      for(int item=501;item<=1000;item++){
    Node *new_node = (Node *)malloc(sizeof(Node));
    if (new_node == NULL){  //if there are any error new_node will assign NULL
        printf("Error! Could Not Create A New Node\n");
        exit(1);
    }else{
            new_node->data = item;
    new_node->next = next;
        printf("data = %d\n",new_node->data);
         }

    }
    return 0;
}
void addInMid(int data){
    //Create a new node
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = 500;
    new_node->next = NULL;

    //Checks if the list is empty
   // if(head == NULL) {
        //If list is empty, both head and tail would point to new node
        //head = newNode;
        //tail = newNode;
    //}
    //else {
        //struct node *temp, *current;
        //Store the mid position of the list
        //int count = (size % 2 == 0) ? (size/2) : ((size+1)/2);
        //Node temp will point to head
        //temp = head;
        //current = NULL;

        //Traverse through the list till the middle of the list is reached
        //for(int i = 0; i < count; i++) {
            //Node current will point to temp
            //current = temp;
            //Node temp will point to node next to it.
            //temp = temp->next;
        //}

        //current will point to new node
        //current->next = newNode;
        //new node will point to temp
        //newNode->next = temp;
    //}
    //size++;*/
//}
//}

int main()
{
create_node(0,1);
add_node(500,501);
//create_node(0,1);
//addInMid(500);

    return 0;
}
