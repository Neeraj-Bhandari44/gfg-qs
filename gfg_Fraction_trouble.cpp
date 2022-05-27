class Solution {
  public:
    vector<int> numAndDen(int n, int d) {
      int num=-1,den=2;
        for(int y=d+1;y<10000;y++)
        {
            int x=(n*y)/d;
            if(__gcd(x,y)==1){
                if(1.0*x/y>1.0*num/den)
                num=x,den=y;
            }
        }
        // vector<int>v;
        // v.push_back(num);
        // v.push_back(den);
        // return v;
        return {num,den};
    }
};
