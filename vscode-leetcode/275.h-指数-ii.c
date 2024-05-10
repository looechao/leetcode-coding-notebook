/*
 * @lc app=leetcode.cn id=275 lang=c
 *
 * [275] H 指数 II
 */

// @lc code=start
int hIndex(int* citations, int citationsSize) {
    //闭区间：[0,n-1]
	int left = 0, right = citationsSize - 1;
    while(left <= right){//注意事项1：left <= right注意等号要不要加
        int mid = left + (right - left >> 1);   //注意事项2
        int cmp = citations[mid]- (citationsSize-mid);
        if( cmp >= 0 ){
            right = mid - 1;   //注意事项3
        }else{
            left = mid + 1;   //注意事项4
        }
    }//left > right
    return citationsSize-left;
}
// @lc code=end

