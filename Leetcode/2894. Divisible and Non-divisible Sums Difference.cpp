class Solution {
public:
    int differenceOfSums(int n, int m) {
        int summ =0;
        int sumn = 0 ; 
        for(int i = 1; i<=n; i++){
            if( i % m !=0){
              summ+=i;
            }
            else{
                sumn+=i;
            }
        }
       return summ-sumn;
    }
};
