//week03-2.cpp厩策璸礶 Basic
//1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg=0; //(参璸)Τ碭璽计
        for(int num : nums){
            if(num<0) neg++; //笿璽计
            if(num==0) return 0;//笿0
        }
        if(neg%2==0)return 1;
        else return -1;
        //ノ岿粇よ猭糶Ω
        //int ans = 1;
        //for(int num : nums){//秈顶C++癹伴,硋矪瞶
        //   ans *= num;//秈
        //}
        //if (ans>0)return 1;
        //if(ans>0)return 1;
    }
};
