class Solution{   
public:
    int shortestPath( int x, int y){ 
    if(x==y)
    return 0;
    if(x>y){
        return shortestPath(x/2,y)+1;
    }
    if(y>x){
        return shortestPath(x,y/2)+1;
    }
    }
};
