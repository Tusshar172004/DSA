class MedianFinder {
public:
    priority_queue<int> maxheap; // stores smaller half
    priority_queue<int, vector<int>, greater<int>> minheap; // stores larger half

    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if (maxheap.empty() || num <= maxheap.top()) {
            maxheap.push(num);
        } else {
            minheap.push(num);
        }

        // Rebalance the heaps
        if (maxheap.size() > minheap.size() + 1) {
            minheap.push(maxheap.top());
            maxheap.pop();
        } else if (minheap.size() > maxheap.size()) {
            maxheap.push(minheap.top());
            minheap.pop();
        }
    }
    
    double findMedian() {
        if (maxheap.size() == minheap.size()) {
            return (maxheap.top() + minheap.top()) / 2.0;
        } else {
            return maxheap.top();
        }
    }
};