//User function Template for C++

class Solution{
public:
    void help(stack<int> &St, vector<int> &arr){
        if (St.empty()){
            return;
        }
        arr.push_back(St.top());
        St.pop();
        help(St,arr);
    }

    vector<int> Reverse(stack<int> St){
        vector<int> arr;
        help(St,arr);
        return arr;
    }
};
