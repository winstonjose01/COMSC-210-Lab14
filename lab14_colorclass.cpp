# include <iostream>
# include <random>
# include <iomanip>
using namespace std;

class Color {
    private:
        int red;
        int green;
        int blue;
    
    public:
        random_access_iterator_tag seed;

        // Constructor
        Color(){};

        void setRGB(int r, int g, int b){
            red = r;
            green = g;
            blue = b;
        }
        
        int getRed()    {return red;}
        int getGreen()  {return green;}
        int getBlue()   {return blue;}

        void printRGB (int r, int g, int b){
            cout << setw(4) << "-----" << setw(9) << "-----" << setw(10) << "-----" << setw(9) << "-----" << endl;

        }
        
};

int main(){

    random_device seed;
    mt19937 gen{seed()};
    uniform_real_distribution<> color_distr{0,255};

    Color color1;
    Color color2;
    Color color3;

    color1.setRGB(color_distr(gen), color_distr(gen), color_distr(gen));
    color2.setRGB(color_distr(gen), color_distr(gen), color_distr(gen));
    color3.setRGB(color_distr(gen), color_distr(gen), color_distr(gen));
    
    color1.printRGB(color1.getRed(), color1.getGreen(), color1.getBlue());
    color2.printRGB(color2.getRed(), color2.getGreen(), color2.getBlue());
    color3.printRGB(color3.getRed(), color3.getGreen(), color3.getBlue());

   
    return 0;
}
