class CountSquares {
public:
map<vector<int>,int>points;
    CountSquares() {
    }
    void add(vector<int> point) {
        points[point]++;
    }
    int count(vector<int> point) {
        /*
        x,y         nx,ny         nx,y     x,ny
        nx,ny --> diagonally oppsite point of (x,y)
        */
      int x=point[0],y=point[1],ans=0;
      for(auto [it,v]:points){

        auto nx=it[0],ny=it[1];
        if(nx==x ||ny==y)continue;
        if( abs(nx-x)!=abs(ny-y))continue;
         int freq=points[{nx,ny}];
        if(points.find({nx,y})!=points.end() && points.find({x,ny})!=points.end())
        ans+=points[{nx,y}]*points[{x,ny}]*freq;
      }
      return ans;

    }
};
