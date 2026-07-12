int secondsBetweenTimes(char* startTime, char* endTime) {
    int mHH[3];
    int sHH[3];
    sHH[0]=((startTime[0]-48)*10)+startTime[1]-48;
    sHH[1]=((startTime[3]-48)*10)+startTime[4]-48;
    sHH[2]=((startTime[6]-48)*10)+startTime[7]-48;
    
    mHH[0]=((endTime[0]-48)*10)+endTime[1]-48;
    mHH[1]=((endTime[3]-48)*10)+endTime[4]-48;
    mHH[2]=((endTime[6]-48)*10)+endTime[7]-48;
    int ans=((mHH[0]-sHH[0])*60*60)+((mHH[1]-sHH[1])*60)+(mHH[2]-sHH[2]);
    return ans;
}
