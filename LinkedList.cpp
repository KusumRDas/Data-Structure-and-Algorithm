//Linked Lists

//Implementing linked list sort algorithm
#include<iostream>
using namespace std; 
  

class Node  
{  
    public: 
    int data;  
    Node* link;  
};  
  
class LinkList{
    public:
    Node* start;
	void display(Node* n);
};
void ascending(Node** temp, Node* new_node)  
{  
    Node* current;  
    if (*temp == NULL || (*temp)->data >= new_node->data)  // for starting of an array
    {  
        new_node->link = *temp;  
        *temp= new_node;  
    }  
    else
    {   
        current = *temp;  //inserting new node at this point
        while (current->link!=NULL &&  current->link->data < new_node->data)  
        {  
            current = current->link;  
        }  
        new_node->link = current->link;  
        current->link= new_node;  
    }  
} 
  
Node *create_node(int num)  
{  
    Node* new_node =new Node(); 
    new_node->data = num;  
    new_node->link = NULL;  
  
    return new_node;  
}  

void display(Node *start)  
{  
    Node *temp = start;  
    while(temp != NULL)  
    {  
        cout<<temp->data<<" ";  
        temp = temp->link;  
    }  
}  
  
int main()  
{  
    // inserting array values to the nodes
    Node* start = NULL;  
    Node* new_node = create_node(10);  
    ascending (&start, new_node);  
    new_node = create_node(12);  
    ascending(&start, new_node);  
    new_node = create_node(-2);  
    ascending(&start, new_node);   
    new_node = create_node(20);  
    ascending(&start, new_node);  
    new_node = create_node(30);  
    ascending(&start, new_node);  
    new_node = create_node(18);  
    ascending(&start, new_node);  
    cout<<"Linked list in ascending order: "<<endl;  
    display(start);  
  
    return 0;  
}
