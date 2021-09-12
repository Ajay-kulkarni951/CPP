class Circle
{
public:
    float Area(float Radious , float PI = 3.14)  // PI is the default argument
    {
        float result = 0.0;
        result = PI * Radious * Radious;
        return result;
    }
};

int main()
{
    Circle obj;
    float ret = 0.0;
    
    ret = obj.Area(10.5);          // Radious = 10.5   PI = 3.14
    cout<<ret<<"\n";
    
    ret = obj.Area(10.5,7.2);   // Radious = 10.5   PI = 7.2
    cout<<ret<<"\n";
    
    return 0;
}
