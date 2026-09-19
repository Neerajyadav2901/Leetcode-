class Solution {
public:
    bool checkOverlap(int radius, int xCentre, int yCentre, int x1, int y1, int x2, int y2) {
       int closestX = max(x1,min(xCentre,x2));
      int closestY = max(y1, min(yCentre,y2));
        int dx = xCentre - closestX;
        int dy = yCentre - closestY;
        int dis = dx*dx + dy*dy;
        if(dis <= radius*radius){
            return true;
        }
        return false;
    }

};