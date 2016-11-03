#include "vector3d.hpp"

#include <cmath>

const vector3d vector3d::X = {1, 0, 0};
const vector3d vector3d::Y = {0, 1, 0};
const vector3d vector3d::Z = {0, 0, 1};
const vector3d vector3d::ZERO = {0, 0, 0};

vector3d::vector3d():x(0),y(0),z(0){}


vector3d::vector3d(double x, double y, double z):x(x),y(y),z(z){}

vector3d vector3d::operator+(const vector3d v)const
{
    int rezult_x=x+v.x;
    int rezult_y=y+v.y;
    int rezult_z=z+v.z;
    return vector3d(rezult_x,rezult_y,rezult_z);
}

vector3d vector3d::operator-(const vector3d v)const
{
    int rezult_x=x-v.x;
    int rezult_y=y-v.y;
    int rezult_z=z-v.z;
    return vector3d(rezult_x,rezult_y,rezult_z);
}

bool vector3d::operator==(const vector3d v)const
{
    return (x==v.x and y==v.y and z==v.z);
}

bool vector3d::operator!=(const vector3d v)const
{
    return (x!=v.x or y!=v.y or z!=v.z);
}


double vector3d::length()
{
    return std::sqrt(x*x+y*y+z*z);
}

double vector3d::operator*(const vector3d v)const
{
    return x*v.x+y*v.y+z*v.z; 
}

vector3d vector3d::operator*(int a)const
{
    return vector3d(x*a,y*a,z*a);
}

vector3d operator*(int a, const vector3d v)
{
    return vector3d(a*v.x,a*v.y,a*v.z);
}

vector3d vector3d::operator-()const
{
    return vector3d(-x,-y,-z);
}

vector3d vector3d::normalize()
{
    double len=length();
    x=x/len;
    y=y/len;
    z=z/len;
}

vector3d vector3d::operator^(const vector3d v)const
{
    return vector3d(y*v.z-z*v.y,z*v.x-x*v.z,x*v.y-y*v.x);
}

std::ostream &operator<<(std::ostream &stream, const vector3d &v)
{

    return stream << "{" << v.x << ", " << v.y << ", " << v.z << "}";
}




