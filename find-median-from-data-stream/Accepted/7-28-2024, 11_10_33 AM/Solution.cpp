// https://leetcode.com/problems/find-median-from-data-stream

class MedianFinder {
    priority_queue<long> maxi;
    priority_queue<long, vector<long>, greater<long>> mini;
public:
    MedianFinder() {
    }
    
    void addNum(int num) {
        mini.push(num);
        maxi.push(mini.top());
        mini.pop();
        if(mini.size()<maxi.size()){
            mini.push(maxi.top());
            maxi.pop();
        }
    }
    
    double findMedian() {
        return mini.size()>maxi.size() ? mini.top() : (mini.top()+maxi.top())/2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */