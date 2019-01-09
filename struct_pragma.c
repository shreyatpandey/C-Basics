#include <stdio.h> 
  
struct s { 
    int i; 
    char ch; 
    double d; 
}; 

#pragma pack(1)
struct packing_pragma
{
	int i;
	char ch;
	double d;
};

struct packing_attribute { 
    int i; 
    char ch; 
    double d; 
} __attribute__((packed));

  
int main() 
{ 
    struct s A; 
    struct packing_pragma pragma_case;
    struct packing_attribute attribute;
    
    printf("Size of A is: %ld\n", sizeof(A));
    printf("Size of packing_pragma is:%ld\n",sizeof(pragma_case));
    printf("Size of packing_attribute is:%ld\n",sizeof(attribute)); 
    printf("Size of int:%ld\n",sizeof(int));
    printf("Size of double:%ld\n",sizeof(double));
    printf("Size of char:%d\n",sizeof(char));
    printf("Hence size of struct is sum of all datatypes inside struct\n");
} 
