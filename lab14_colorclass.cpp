# include <iostream>
# include <random>
using namespace std;

class Color {
    private:
        int red;
        int green;
        int blue;
    
    public:
        random_access_iterator_tag seed;

        int getRed();
        int getGreen();
        int getBlue();
        void setRGB(int r, int g, int b);
        void printRGB(Color RBGvalues);
        

        Color(int r, int g, int b){
            red = r;
            green = g;
            blue = b;
        }

        void setRGB(int r, int g, int b){
            return (red, green, blue);
        }
        
        int getRed(){
            return red;
        }
        int getGreen(){
            return green;
        }
        int getBlue

        void printRGB (Color& RGBvalues){

        }
        
};

int main(){

    Color

    random_device seed;
    mt19937 gen{seed()};
    uniform_real_distribution<> n_distr{0,255};
    
    

   
    return 0
}
