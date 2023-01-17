
class Solution {
public:
static void reverse(ListNode* head_ref, int k)
{

    ListNode* temp = head_ref;
    int count = 1;
    while (count < k) {
        temp = temp->next;
        count++;
    }
 

    ListNode* joint_point = temp->next;
    temp->next = NULL; 
 
    ListNode* prev = NULL;
    ListNode* current = head_ref;
    ListNode* next;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
 

    head_ref = prev;
    current = head_ref;
    while (current->next != NULL)
        current = current->next;
 

    current->next = joint_point;
}
int GetNth(ListNode* head, int index)
{
  
    ListNode* current = head;

    int count = 0;
    while (current != NULL) {
        if (count == index)
            return (current->val);
        count++;
        current = current->next;
    }
    assert(0);
}
    ListNode* swapNodes(ListNode* head, int k) {
        int i=0,j;
        int count=0;
        ListNode *temp = head;
        ListNode *ptr = head;
        ListNode *ptr1 = head;
        ListNode *ptrs = head;
        while(i!=k-1){  
            i++;
            temp = temp->next;
        }
        for(j=0;ptr!=NULL;j++){
            ptr = ptr->next;
            count+= 1;
        }
        int m = count-k;
        for(int a=0;a<m;a++){
            ptr1=ptr1->next;
        }
        int p = GetNth(head,i);
        int x = GetNth(head,m);
        // ListNode *p1 = p;
        // ListNode *t = x;
        ptr1->val = p;
        temp->val = x;
        reverse(ptrs,0);
        return ptrs;


    }
};
