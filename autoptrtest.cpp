#include <memory>
#include <iostream>

class Foo
{
public:
    Foo():m_var(1) { }
    
    void AddPrintVar(int val)
    {
	m_var += val;
  	std::cout << "########## Val : " << m_var << std::endl;
    }
private:
    int m_var;
};

int main()
{
    std::auto_ptr<Foo> fptr1(new Foo);
    std::auto_ptr<Foo> fptr2;
    fptr2 = fptr1;
    fptr2->AddPrintVar(5);
    if(fptr1.get() == NULL)
    {
	std::cout << "#### FPTR1 is NULL" << std::endl;
    }
    fptr1->AddPrintVar(5);
    return 0;
}
   
