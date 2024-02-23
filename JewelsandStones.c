int numJewelsInStones(char* jewels, char* stones) {
    int count = 0;int i,j;
    for(i=0; i < strlen(jewels); i++)
    {
        for(j=0;j<strlen(stones);j++){
            if(stones[j] == jewels[i]){
                count++;
            }
        }
    }
    return count;
}
