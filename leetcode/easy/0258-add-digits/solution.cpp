class Solution {
public:
    int addDigits(int num) {
        while(num>9){
            int k=0;
            while(num>0){
                k =k+(num%10);
                num=num/10;
            }
            num=k;
        }
        return num;
    }
};