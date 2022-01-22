class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> occ;//存储字符串
        int ans=0,r=0;//ans存答案，r存子串最右边
        for(int i=0;i<s.length();i++)
        {
            if(i!=0) occ.erase(s[i-1]);//重复，排除最左边的继续循环
            while(r<s.length()&&!occ.count(s[r]))
            {//如果不重复，加入occ中，右端r移动
                occ.insert(s[r]);
                r++;      
            }
            ans=max(ans,r-i);//找出最大的答案
        }
    return ans;
    }
};
