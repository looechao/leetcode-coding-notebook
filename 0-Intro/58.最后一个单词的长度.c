/*
 * @lc app=leetcode.cn id=58 lang=c
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
int lengthOfLastWord(char* s) {
    int count = 0;
    int last = 0;
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] == ' ' && count != 0){
            last = count;
            count = 0;
        }
        if(s[i] != ' '){
            count++;
        }
        i++;
    }

    if(count != 0){
        return count;
    }else{
        return last;
    }
}
// @lc code=end

