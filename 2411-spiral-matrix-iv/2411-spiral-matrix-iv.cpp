/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
     vector<vector<int>> matrix(m, vector<int>(n, -1));

        int id    = 0; //0, 1, 2, 3
        int top   = 0;
        int down  = m-1;
        int left  = 0;
        int right = n-1;

        while(top <= down && left <= right) {
            if(id == 0) { //left to right
                for(int i = left; head != NULL && i <= right; i++) {
                    matrix[top][i] = head->val;
                    head = head->next;
                }
                top++;
            }

            if(id == 1) { //top to down
                for(int i = top; head != NULL && i <= down; i++) {
                    matrix[i][right] = head->val;
                    head = head->next;
                }
                right--;
            }

            if(id == 2) { //right to left
                for(int i = right; head != NULL && i >= left; i--) {
                    matrix[down][i] = head->val;
                    head = head->next;
                }
                down--;
            }

            if(id == 3) { //down to top
                for(int i = down; head != NULL && i >= top; i--) {
                    matrix[i][left] = head->val;
                    head = head->next;
                }
                left++;
            }

            id = (id+1)%4; //0, 1, 2, 3
        }

        return matrix;   
    }
};