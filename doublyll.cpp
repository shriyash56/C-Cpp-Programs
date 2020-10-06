#include<iostream>
using namespace std;

struct Node{
     int data;
     Node* prev;
     Node* next;
};

Node* head=NULL;


void insertNode()
{
    Node* temp = new Node();
    int data;
    cout<<"Enter data: ";
    cin>>data;
    temp->data= data;
    temp->next = NULL;

    if(head == NULL)
    {
         temp->prev= NULL;
         head=temp;
    }else{

        Node* temp1 = head;

      while(temp1->next != NULL)
        {
             temp1=temp1->next;
        }
        
        temp->prev =temp1;
        temp1->next = temp;
    }

}


void displayList()
{
         Node* temp1 = head;

        if(temp1 == NULL) return;

              while(temp1 != NULL)
              {
                  cout<<temp1->data<<" ";
                  temp1 = temp1->next;              
            }
}



void ReversePrint()
{
     Node* temp = head;

     while(temp->next != NULL)
        temp= temp->next;
 
        
        while(temp!= NULL)
         {
              cout<<temp->data<<" ";
              temp = temp->prev;
         }
}

int main()
{

    int n;
    cout<<"How many elements you want to insert : ";
    cin>>n;

    for(int i=0; i<n; i++)
       insertNode();

       displayList();

       cout<<endl;

       ReversePrint();


}