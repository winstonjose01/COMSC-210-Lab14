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

        void printRGB (int n, int r, int g, int b){
            cout << setw(4) << "-----" << setw(9) << "-----" << setw(10) << "-----" << setw(9) << "-----" << endl;
            cout << setw(3) << n << setw(10) << r << setw(9) << g << setw(9) << b << endl;

        }
        
};

int main(){

    random_device seed;
    mt19937 gen{seed()};
    uniform_real_distribution<> color_distr{0,255};

    Color color1;
    Color color2;
    Color color3;
    Color color4;
    Color color5;

    color1.setRGB(color_distr(gen), color_distr(gen), color_distr(gen));
    color2.setRGB(color_distr(gen), color_distr(gen), color_distr(gen));
    color3.setRGB(color_distr(gen), color_distr(gen), color_distr(gen));
    color4.setRGB(color_distr(gen), color_distr(gen), color_distr(gen));
    color5.setRGB(color_distr(gen), color_distr(gen), color_distr(gen));

     // Print the header for the table
    cout << setw(4) << "Color" << setw(8) << "Red" << setw(11) << "Green" << setw(8) << "Blue" << endl;
    
    color1.printRGB(1, color1.getRed(), color1.getGreen(), color1.getBlue());
    color2.printRGB(2, color2.getRed(), color2.getGreen(), color2.getBlue());
    color3.printRGB(3, color3.getRed(), color3.getGreen(), color3.getBlue());
    color4.printRGB(4, color4.getRed(), color4.getGreen(), color4.getBlue());
    color5.printRGB(5, color5.getRed(), color5.getGreen(), color5.getBlue());



   
    return 0;
}
