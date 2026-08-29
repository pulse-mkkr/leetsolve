//4034. Minimum Bishop Moves to Reach Target

class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        if(((source[0]+source[1])%2==0)!=((target[0]+target[1])%2==0))return -1;//diff colours of target/source
        if(abs(source[0] - target[0]) == abs(source[1] - target[1]))return 1;//on same diagonal
        else return 2;//rest
    }
};
