# include <iostream>
using namespace std;

class Color {
    private:
        int red;
        int green;
        int blue;
    
    public:
        int getRGB();
        void setRGB(int val);
        void printRGB(Color RBGvalues);

        Color(int r, int g, int b){
            red = r;
            green = g;
            blue = b;
        }

        void setRBG(int val){
            
        }
        

        void printRGB (Color& RGBvalues){

        }
        
};

int main(){

   
    return 0
}
