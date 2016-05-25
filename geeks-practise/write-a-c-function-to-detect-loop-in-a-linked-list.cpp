// http://www.geeksforgeeks.org/write-a-c-function-to-detect-loop-in-a-linked-list/
// http://www.practice.geeksforgeeks.org/probfunc-page.php?pid=700099

/*

The structure of linked list is the following

struct node
{
int data;
node* next;
};

*/
int detectloop(struct node *list){
node *temp1=list->next,*temp2=list;
bool flag=false;
while(temp1!=NULL && temp1->next!=NULL && temp2!=NULL)
{
    if(temp1==temp2)
    {
        flag=true;
        break;
    }
    temp1=temp1->next->next;
    temp2=temp2->next;
}
return flag;
}
