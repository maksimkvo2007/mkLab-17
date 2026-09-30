#include <iostream> 
#include <iomanip>
using namespace std;

class Color {
private: //had to search up about this as i've never used it
    int red;
    int green;
    int blue;

public:
    Color(){ //default
        red = 0;
        blue = 0;
        green = 0;
    }

    Color(int r, int g, int b){ //parameter
        red = r;
        green = g;
        blue = b;
    }

    Color(int r) { //partial
        red = r;
        green = 0;
        blue = 0;
    }

    void setRed(int r) {
        red = r;
    }
    
    void setGreen(int g) {
        green = g;
    }
    
    void setBlue(int b) {
        blue = b;
    }

    // Getter member functions
    int getRed() {
        return red;
    }
    
    int getGreen() {
        return green;
    }
    
    int getBlue() {
        return blue;
    }

    void print() {
        cout << "RGB(" << setw(3) << red << ", " 
             << setw(3) << green << ", " 
             << setw(3) << blue << ")" << endl;
    }
};

int main(){
    Color color1;
    Color color2(0, 0, 255);
    Color color3(100);

    cout << "Color 1: "; //default
    color1.print();

    cout << "Color 2: ";//parameter
    color2.print();

    cout << "Color 3: ";//partial
    color3.print();
}