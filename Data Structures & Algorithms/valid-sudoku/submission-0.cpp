class Solution {
private:
    
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<int> crow,ccol,box[9];
        
        for(int i=0;i<9;i++){
            crow.clear();ccol.clear();
            for(int j=0;j<9;j++){
                int r = board[i][j]-'0';
                int c = board[j][i]-'0';
                
                if(r >=0 && r <=9){
                    int idx = (i/3)*3 + (j/3);
                    if(crow.find(r) != crow.end()
                        || box[idx].find(r) != box[idx].end()) return false;
                    crow.insert(r);
                    box[idx].insert(r);

                }
                if(c >=0 && c <=9){
                    if(ccol.find(c) != ccol.end()) return false;
                    ccol.insert(c);
                }
                
            }
            cout << endl;
        }
        
       
        return true;
    }
};
