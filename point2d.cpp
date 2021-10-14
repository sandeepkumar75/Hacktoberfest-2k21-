#include <iostream>
using namespace std;

class Point2D {
    public:
        float xCo, yCo;
        Point2D() {
            cout<<"Default constructor called! The value is assigned to 0"<<endl;
            xCo = 0;
            yCo = 0;
        }
        Point2D(float xCo, float yCo) {
            this -> xCo = xCo;
            this -> yCo = yCo;
        }
        ~Point2D() {
            cout<<"Object destroyed for class Point2D"<<endl;
        }
        void getPoint(float xCo, float yCo) {
            cout<<"("<<xCo<<", "<<yCo<<")"<<endl;
        }
        void setPoint2D(float xCo, float yCo) {
            this -> xCo = xCo;
            this -> yCo = yCo;
        }
        bool insideCircle(int r, Point2D cen) {
            if((xCo - cen.xCo) * (xCo - cen.xCo) + (yCo - cen.yCo) * (yCo - cen.yCo) <= r * r)
                return true;
            else
                return false;
        }
        bool onAxis() {
            if(xCo == 0 || yCo == 0)
                return true;
            else
                return false;
        }
        bool checkCollinear(Point2D p1, Point2D p2) {
            int a = p1.xCo * (p2.yCo - yCo) + p2.xCo * (yCo - p1.yCo) + xCo * (p1.yCo - p2.yCo); 
            if(a == 0)
                return true;
            else
                return false;
        }
} obj;

int main() {
    cout<<"xCo = "<<obj.xCo<<endl<<"yCo = "<<obj.yCo<<endl;    
    obj.xCo = 7.8, obj.yCo = 7.2;
    cout<<"xCo = "<<obj.xCo<<", yCo = "<<obj.yCo<<endl;
    obj.getPoint(obj.xCo, obj.yCo);
    Point2D cen;
    cen.xCo = 5.5, cen.yCo = 6.5;
    float r = 4.5;
    bool in = obj.insideCircle(r, cen);
    if(in == true)
        cout<<"Inside circle"<<endl;
    else
        cout<<"Not inside circle"<<endl;
    Point2D p1, p2;
    p1.xCo = 1.2;
    p1.yCo = 3.2;
    p2.xCo = 5.6;
    p2.yCo = 4.7;
    bool col = obj.checkCollinear(p1, p2);
    if(col == true)
        cout<<"Collinear"<<endl;
    else 
        cout<<"Not collinear"<<endl;        
    obj.yCo = 0;
    bool axis = obj.onAxis();    
    if(axis == true)
        cout<<"The coordinate is on the axis"<<endl;
    else 
        cout<<"The coordinate isn't on the axis"<<endl;
    return 0;
}
