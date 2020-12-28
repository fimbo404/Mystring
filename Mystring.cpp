#include <iostream>
#include <cstring>
#include "Mystring.h"

    // destructors 
    Mystring::~Mystring()
    {
        if(str == nullptr){
            return;
            }
    
        else{
    
                delete [] str;
            }
        
        }
    
    
    // overloaded constructors 
    Mystring::Mystring()
    :str(nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    Mystring::Mystring(char *s)
    :str(nullptr){
    
        if(s == nullptr){
            str = new char[1];
            *str = '\0';
            }else{
            str = new char[std::strlen(s) + 1];
            std::strcpy(str,s);
            }
        
        }
        
    
    // copy constructor 
    Mystring::Mystring (const Mystring &source)
    :str(nullptr){
        str = new char[std::strlen(source.str) + 1];
        
        std::strcpy(str,source.str);

        }
    
    // move constructor 
    Mystring::Mystring ( Mystring &&source)
    :str(source.str){
        source.str  = nullptr;
        
        }
        

void Mystring::display()const{
    std::cout<<str<<" : "<<get_length()<<std::endl;
    }
int Mystring::get_length()const{
    return std::strlen(str);
    }
char* Mystring::get_str() const{
    return str;
    }
    
// copy assignment 
Mystring &Mystring::operator=(const Mystring &rhs){
    
    if(this == &rhs)
        return *this;
    delete [] this->str;
    this->str = new char[std::strlen(rhs.str)+1];
    std::strcpy(this->str,rhs.str);
    return *this;
    }
// move assignment

Mystring &Mystring::operator=( Mystring &&rhs){
    
    if(this == &rhs)
        return *this;
    delete [] this->str;
    this->str = rhs.str;
    rhs.str = nullptr;
    return *this;
    }
    
    
    
    // custom to lower operator 
    Mystring Mystring::operator-()const{
            char * buff = new char[std::strlen(this->str) + 1];
            std::strcpy(buff,str);
            for(size_t i =0;i<std::strlen(buff);++i){
                buff[i] = std::tolower(buff[i]);
                }
            Mystring temp{buff};
            delete [] buff;
            return temp;
        }
    // custom string concatenation
    Mystring Mystring::operator+(const Mystring &rhs)const{
        size_t buff_size = std::strlen(rhs.str) + std::strlen(this->str) +1;
        char * buff  = new char[buff_size];
        std::strcpy(buff,this->str);
        std::strcat(buff,rhs.str);
        Mystring temp {buff};
        delete [] buff;
        return temp;
        }
    
    
     // custom string comparison operator 
    bool Mystring::operator==(const Mystring &rhs)const{
        if(std::strcmp(this->str,rhs.str) == 0){
            return true;
            }else{
                return false;
                }
        }
    // overloading the output stream operator 
    std::ostream &operator<<(std::ostream &os,const Mystring &obj){
            os<<obj.str;
            return os;
        }
        
    // overloading the input stream operator 
    std::istream &operator>>(std::istream &is, Mystring &obj){
        char * buff = new char[10000];
        is>>buff;
        obj = Mystring(buff);
        delete [] buff;
        return is;
        }