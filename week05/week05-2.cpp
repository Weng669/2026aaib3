//week05-2.cpp 學習計畫 Built-in Function 第二題
//LeetCode 709. To Lower Case 變小寫字母
class Solution {
public:
    string toLowerCase(string s) {
       //Week02 教過字串S的長度 .length()
       for (int i=0;i<s.length();i++){
            if(isupper(s[i])) s[i]=s[i]-'A'+'a';
       } //s[0]='h'; //仙逝看看吧(但是錯的) 教你s[i]
       return s; //竟然直接送出去
    }
};
