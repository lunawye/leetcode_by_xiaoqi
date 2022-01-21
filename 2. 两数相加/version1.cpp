/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int col=0;
        ListNode *head=new ListNode();
        ListNode *p=head;
        while(col||l1||l2)//当还没加完/还剩余数循环
        {
            int sum=col;
            if(l1) 
            {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2) 
            {
                sum+=l2->val;
                l2=l2->next;
            }
            col=sum/10;//记录进位
            ListNode *node=new ListNode(sum%10);//记录具体数字
            p->next=node;//必须要新创建一个指针，不然会有错误
            p=p->next;
        }
        return head->next;

    }
};
