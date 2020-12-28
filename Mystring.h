
#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
private:
    friend std::ostream &operator<<(std::ostream &os,const Mystring &obj);
    friend std::istream &operator>>(std::istream &is,Mystring &obj);
    char *str;
public:
    // constructors 
    Mystring();
    Mystring(char *s);


    //copy constructor 
    Mystring (const Mystring &source);
    // move constructor 
    Mystring ( Mystring &&source);
    
    // destructor 
    ~Mystring();
    
    Mystring &operator=(const Mystring &rhs); // copy assignment operator 
    Mystring &operator=(Mystring &&rhs); // move assignment operator 
    
    Mystring operator-()const; // make lower case operator 
    Mystring operator+(const Mystring &rhs)const;// custom string concatenation
    bool operator==(const Mystring &rhs)const; // custom string comparison operator 
    
    void display()const;
    int get_length()const;
    char *get_str()const;
};

#endif // _MYSTRING_H_
