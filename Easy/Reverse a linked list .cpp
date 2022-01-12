//Problem Link:https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1/?company[]=Goldman%20Sachs&company[]=Goldman%20Sachs&page=1&query=company[]Goldman%20Sachspage1company[]Goldman%20Sachs#

   struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node* p=head;
        Node* q=nullptr;
        Node* r=nullptr;
        while(p!=nullptr)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        return q;
    }
//TC:O(n)
//SC:O(1)
