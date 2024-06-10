#include <iostream>
#include <cmath>
using namespace std;

class Cuboid; // Forward declaration of Cuboid class

class Sphere {
private:
    float radius;
    float vol;
    float surface_area;

public:
    void Accept() {
        cout << "Enter the radius of the sphere: ";
        cin >> radius;
    }

    void Cal_Volume() {
        vol = (4.0/3.0) * 3.14 * pow(radius, 3);
        surface_area = 4 * 3.14 * pow(radius, 2);
    }
    virtual void display(){
        cout<<"the volume of sphere is :"<<vol<<endl;
        cout<<"The surface area of sphere is :"<<surface_area<<endl;
    }

    friend float Add_Volume(Sphere s, Cuboid c);
};

class Cuboid {
private:
    float length;
    float width;
    float height;
    float vol;
    float surface_area;

public:
    void Accept() {
        cout << "Enter the length, width, and height of the cuboid: ";
        cin >> length >> width >> height;
    }

    void Cal_Volume() {
        vol = length * width * height;
        surface_area = 2 * (length*width + length*height + width*height);
    }
    virtual void display(){
        cout<<"the volume of cuboid is :"<<vol<<endl;
        cout<<"The surface area of cuboid is :"<<surface_area<<endl;
    }

    friend float Add_Volume(Sphere s, Cuboid c);
};

float Add_Volume(Sphere s, Cuboid c) {
    return s.vol + c.vol;
}

int main() {
    Sphere sphere;
    sphere.Accept();
    sphere.Cal_Volume();
    

    Cuboid cuboid;
    cuboid.Accept();
    cuboid.Cal_Volume();
    

    float total_volume = Add_Volume(sphere, cuboid);
    sphere.display();
    cuboid.display();
    cout << "The total volume is: " << total_volume << endl;

    return 0;
}
