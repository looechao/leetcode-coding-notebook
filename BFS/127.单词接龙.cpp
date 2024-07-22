class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
		queue<string> q; //存放当前单词和下一个单词的队列
        unordered_map<string, int> dists;
        q.push(beginWord);
        dists[beginWord] = 1; //到达beginWord的距离是1
        while(!q.empty()){
            string word = q.front();
            q.pop();
            //从wordList中开始遍历每一个符合接龙条件的单词
            for(auto &nextWord: wordList){
                if(dists.count(nextWord))
                    continue; //如果该单词已经遍历过就跳过
            	//只有符合条件的单词才能存入map
                int distinctCnt = 0;
                for(int i = 0; i < word.size(); ++i){
                    if(word[i] != nextWord[i]){
                        ++distinctCnt;
                	}
                }
                if(distinctCnt == 1){
                    dists[nextWord] = dists[word] + 1; //距离累加
                    q.push(nextWord);
                    if(nextWord == endWord){
                    	return dists[endWord];
                    }
                }
            }
        }
        return 0;
    }
};