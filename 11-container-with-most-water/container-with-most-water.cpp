class Solution {
public:
    int maxArea(vector<int>& height) {
   int n=height.size();
    int *beg=&height[0]; int *end=&height[n-1];int size=0,prevsize=0;
    while (beg < end){
        size= min(*beg , *end)*(end-beg);
        if (size > prevsize ){
            prevsize=size;
        }
        if (*beg>*end){
            end--;
        }
        else {
            beg++;
        }


    }

     return (prevsize)  ; 
    }
};