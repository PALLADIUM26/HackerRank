/*
 * Create classes Rectangle and RectangleArea
 */

class Rectangle{
    public:
        int l, b, area;
        
        void display(){
            cout<<l<<" "<<b<<"\n";
        }
};

class RectangleArea : public Rectangle{
    public:
        void read_input(){
            cin>>l;
            cin>>b;
        }
        
        void display(){
            cout<<l*b<<"\n";
        }
};



