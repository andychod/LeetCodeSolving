/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> a, b;
        a.push_back(l1->val);
        b.push_back(l2->val);
        
        while(l1->next != NULL)
        {
            l1 = l1->next;
            a.push_back(l1->val);
        }
        while(l2->next != NULL)
        {
            l2 = l2->next;
            b.push_back(l2->val);
        }
        int size_a = a.size(), size_b = b.size();
        
        if(size_a >= size_b)
        {
            int i_a = 0, i_b = 0;
            
            
            for(; i_b< size_b; i_b++)
            {
                a[i_a] += b[i_b];
                i_a ++;
            }
            
            //cout<<"a = ";
            //for(int i=0; i<a.size(); i++)
            //    cout<<a[i]<<" ";
            //cout<<endl;
            
            int offset = 0;
            for(int i=0; i< size_a; i++)
            {
                a[i] += offset;
                offset = 0;
                if(a[i]>=10)
                {
                    a[i] -=10;
                    offset++;
                }
            }
            //cout<<"a = ";
            //for(int i=0; i<a.size(); i++)
            //    cout<<a[i]<<" ";
            //cout<<endl;
            
            if(offset!=0)
                a.push_back(offset);
             
            
            ListNode *ans;
            ans = new ListNode(0);
            ListNode *current = ans;
            
            current->val = a[0];
            for(int i=1; i< a.size(); i++)
            {
                current->next = new ListNode(0);
                current = current->next;
                current->val = a[i];
            }
            return ans;
            
        }
        else
        {
            int i_a = 0, i_b = 0;
            
            
            for(; i_a< size_a; i_a++)
            {
                b[i_b] += a[i_a];
                i_b ++;
            }
            
            int offset = 0;
            for(int i=0; i< size_b; i++)
            {
                b[i] += offset;
                offset = 0;
                if(b[i]>=10)
                {
                    b[i] -=10;
                    offset++;
                }
            }
            //cout<<"b = ";
            //for(int i=0; i<b.size(); i++)
            //    cout<<b[i]<<" ";
            //cout<<endl;
            
            
            if(offset!=0)
                b.push_back(offset);
             
            
            ListNode *ans;
            ans = new ListNode(0);
            ListNode *current = ans;
            
            current->val = b[0];
            for(int i=1; i< b.size(); i++)
            {
                current->next = new ListNode(0);
                current = current->next;
                current->val = b[i];
            }
            return ans;
            
        }

        
    }
};