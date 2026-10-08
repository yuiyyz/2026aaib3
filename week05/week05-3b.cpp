//week05-3b.cpp學習計畫 Built-in Function 第1題
//LeetCode 58. Length of Last Word 最後那幾個字,有幾個字母
//其實前面需要寫 #include <stringstream> 不過 LeetCode 幫你偷偷寫好了
class Solution {
public:
    int lengthOfLastWord(string s) {
        //藥用stringstream 之前,要先#include <stringstream>
        stringstream ss(s);// week05 string字串stream串流(cin也是stream)
        //week04 C++的原括號,是丟進去物件 初始化 的參數
        string ans;//Week02 C++ 字串的宣告
        while (ss >> ans) {// 今天week05-1.cpp有用到
            //什麼都不做
        }
        return ans.length(); //Week01 Week02 字串的長度
    }
};
