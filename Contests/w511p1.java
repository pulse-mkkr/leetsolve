//Even number of knight moves 
//check starting elements sum and ending elements sum ,if equal true else false
//coz knight moves to diiferent color each time ,and as mentioned evenn moves

class Solution {
    public boolean canReach(int[] start, int[] target) {
        if((target[0]+target[1])%2==(start[0]+start[1])%2) return true;
        return false;
        
    }
}
