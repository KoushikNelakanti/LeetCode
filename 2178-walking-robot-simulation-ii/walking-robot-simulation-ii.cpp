class Robot {
public:
    int width, height;
    int index = 0;
    int flag = 0;
    Robot(int width, int height) {
        this->width = width;
        this->height = height;
    }
    
    void step(int num) {
        this->index = (this->index+num)%(-4+(this->width+this->height)*2);
        if(num>0) flag = 1;
        cout<<index<<endl;
    }
    
    vector<int> getPos() {
        vector<int> pos = {0,0};
         if(index>=0 && index<width) {
            pos[0] = index;
         }
        else if(index>=width && index<(width+height-1)){
            pos[0] = width-1;
            pos[1] = index-width+1;
        }
        else if(index>=(width+height-1) && index<(width+height+width-2)) {
            pos[0] = width-2-(index-height-width+1);
            pos[1] = height-1;
        }
        else {
            pos[0] = 0;
            pos[1] = height-2-(index-height-width-width+2);
        }
        return pos;
    }
    
    string getDir() {
        if(flag%2 && index==0) return "South";
        else if(index>=0 && index<width) return "East";
        else if(index>=width && index<(width+height-1)) return "North";
        else if(index>=(width+height-1) && index<(width+height+width-2)) return "West";
        else return "South";
    }
};

/**
 * Your Robot object will be instantiated and called as such:
 * Robot* obj = new Robot(width, height);
 * obj->step(num);
 * vector<int> param_2 = obj->getPos();
 * string param_3 = obj->getDir();
 */