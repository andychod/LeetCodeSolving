class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x <0)
            return false;
        else
        {
            int times = 0;
            int num = 0;
            int temp = x;
            
            // 取得位數
            while(temp !=0)
            {
                times++;
                temp = temp / 10;
            }
            temp = x;
            
            times--;
            
            // 計算num;
            while(temp!=0)
            {
                num += (temp%10) * pow(10, times--);
                temp = temp / 10;
            }
            cout<<"x = "<<x<<endl;
            cout<<"num = "<<num<<endl;
            
            if(x == num)
                return true;
            else
                return false;
        }
        
        
        
    }
};