class Solution {
public:
    int maxDistance(vector<int>& position, int m) {// m is number of balls
    //  sort(position.begin(),position.end());
    //  int low=1;//minimum possible distance
    //  int high=position[position.size() - 1]-position[0];// maximum possible distance
    // while(low<high){
    //     int mid= (high+low)/2;
    //     if(possibleplace(position,mid,m)){
    //        low=mid+1;
    //     }
    //     else{
    //         high=mid;
    //     }
    // }
    // return low;
//     }
// private:
// bool possibleplace(vector<int>&position,int distance,int m){
//     int cnt=1;
//     int prev=position[0];
//     for(int i=1;i<position.size();i++){
//         if(position[i]-prev>=distance){
//         cnt++;
//         prev=position[i];
//         }
//     }
//     return cnt>=m;

// }
// };
       sort(begin(position), end(position));
        int left = 0, right = position.back() - position.front();
        while (left <= right) {
            const auto& mid = left + (right - left) / 2;
            if (!check(position, m, mid)) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return right;
    }

private:
    bool check(const vector<int>& position, int m, int x) {
        int count = 1, prev = position[0];
        for (int i = 1; i < position.size(); ++i) {
            if (position[i] - prev >= x) {
                ++count;
                prev = position[i];
            }
        }
        return count >= m;
    }
};