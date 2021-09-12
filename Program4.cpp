class Arithematic
{
public:
    int no1;
    int no2;
    Arithematic()           // Default Constructor
    {
        cout<<"Inside Default Constructor\n";
        no1 = 0;
        no2 = 0;
    }
    Arithematic(int i, int j)   // Parametrised Constructor
    {
        cout<<"Inside parametrised Constructor\n";
        no1 = i;
        no2 = j;
    }
    
    Arithematic(Arithematic &ref)   // Copy Constructor
    {
        cout<<"Inside Copy constructor\n";
        this->no1 = ref.no1;
        this->no2 = ref.no2;
    }
    ~Arithematic()                      // Destructor
    {
        cout<<"Inside Destructor\n";
        // Used to deallocate the resources
    }
};
int main()
{
    Arithematic obj1;                   // Default constructor
    Arithematic obj2(50,30);        // Parametrised constructor
    Arithematic obj3(obj2);            // Copy constructor
    
    cout<<obj2.no1<<"\t"<<obj2.no2<<"\n";   // 50   30
    cout<<obj3.no1<<"\t"<<obj3.no2<<"\n";   // 50   30
    
    return 0;
}
There are 2 types of constructors as default and Parametrised.
    Copy constructor is the special type of parametrised constructor
    which accepts object of same class as a parameter.
