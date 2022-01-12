//Problem link:https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1/?company[]=Goldman%20Sachs&company[]=Goldman%20Sachs&page=1&query=company[]Goldman%20Sachspage1company[]Goldman%20Sachs#

    Node* p1=head1;
    Node* p2=head2;
    int n1=0;
    int n2=0;
    while(p1!=nullptr)
    {
        p1=p1->next;
        n1++;
    }
    while(p2!=nullptr)
    {
        p2=p2->next;
        n2++;
    }
    p1=head1;
    p2=head2;
    if(n1>n2)
    {
        int diff=n1-n2;
        while(diff--)
        {
           p1=p1->next; 
        }
    }
    else
    {
        int diff=n2-n1;
        while(diff--)
        {
            p2=p2->next;
        }
    }
    while(p1!=nullptr)
    {
        if(p1==p2)
        return p1->data;
        p1=p1->next;
        p2=p2->next;
    }
    return -1;
}
