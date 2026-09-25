// #include<iostream>
// using namespace std;

// class point {
//     public:
//     int x,y;
//     point(int x=0, int y=0):x(x),y(y) {
//         void show(){
//             cout<<x<<" ,"<<y<<endl;
//         }
//         point operator+(point p) {
//         return point(x + p.x, y + p.y);
//     }
// };
// int main(){
//     point p(12,6), q(-5,7);
//     point r =p + q;
//     p.show();
//     q.show();
//     r.show();
//     return 0;
// }
#include <iostream>
using namespace std;

class point {
public:
    int x, y;

    // Constructor
    point(int x = 0, int y = 0) : x(x), y(y) {
    }
    friend ostream &operator<<(ostream)
    
    void show() {
        cout << x << " , " << y << endl;
    }

    // Operator overloading +
    point operator+(point p) {
        return point(x + p.x, y + p.y);
    }
};

int main() {
    point p(12, 6), q(-5, 7);

    point r = p + q;

    p.show();
    q.show();
    r.show();

    return 0;
}
