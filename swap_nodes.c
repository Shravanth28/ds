ListNode* swapNodes(ListNode* head, int k) {
        int i,j;
        int count=0;
        ListNode *temp = head;
        ListNode *ptr = head;
        ListNode *ptr1 = head;
        for(i=0;i<k;i++){
            temp = temp->next;
        }
        for(j=0;ptr!=NULL;j++){
            ptr = ptr->next;
            count+= 1;
        }
        int m = count -k;
        for(int a=0;a<m;a++){
            ptr1=ptr1->next;
        }
        ListNode *p = ptr;
        ListNode *t = temp;
        temp = p;
        ptr = t;
        return head;


    }
