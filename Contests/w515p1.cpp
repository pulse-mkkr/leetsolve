//4024. Nearest Available Drone

class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int nd=drones.size();
        int mindx=-1;
        int md=INT_MAX;
        for(int i=0;i<nd;i++){
            int d=abs(drones[i][0]-target[0])+abs(drones[i][1]-target[1]);
            if(md>d&&d<=drones[i][2]){
                md=d;
                mindx=i;
            }
        }
        return mindx;
    }
};
