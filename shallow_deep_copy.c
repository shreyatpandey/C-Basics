/* In shallow copy when we assign one object to other, the starting pointer of one object starts from the same memory location of other object*/
/*In deep copy we dynamically assign memory to the object and there is a change in it*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

struct shallow_copy
{
	char* shallow_copy;
};
struct deep_copy
{
	char* deep_copy;
};


int main()
{
	const char* main_string = "HelloWorld";
	struct shallow_copy shallow_copy_object_1, shallow_copy_object_2;
	shallow_copy_object_1.shallow_copy = (char *)malloc(sizeof(char) * 20); 
  
  	strcpy(shallow_copy_object_1.shallow_copy,main_string); 
  
  	shallow_copy_object_2 = shallow_copy_object_1; 
  	shallow_copy_object_1.shallow_copy[0] = 'X'; 
  	shallow_copy_object_1.shallow_copy[1] = 'Y'; 
  
  	/* Since copy was shallow, both strings are same */
  	printf("shallow_copy_object_1 str = %s\n", shallow_copy_object_1.shallow_copy);  
  	printf("shallow_copy_object_2 str = %s\n", shallow_copy_object_2.shallow_copy); 

  	struct deep_copy deep_copy_object_1, deep_copy_object_2;

  	deep_copy_object_1.deep_copy = (char *)malloc(sizeof(char) * 20); 
  
  	strcpy(deep_copy_object_1.deep_copy,main_string);
  	deep_copy_object_2 = deep_copy_object_1;

  	// We add extra statements to do deep copy 
  	deep_copy_object_2.deep_copy = (char *)malloc(sizeof(char) * 20); 
  	strcpy(deep_copy_object_2.deep_copy, deep_copy_object_1.deep_copy); 
  
  	deep_copy_object_1.deep_copy[0] = 'X'; 
  	deep_copy_object_1.deep_copy[1] = 'Y'; 
  
  	/* Since copy was deep, both strings are different */
  	printf("deep_copy_object_1 str = %s\n", deep_copy_object_1.deep_copy);  
  	printf("deep_copy_object_2 str = %s\n", deep_copy_object_2.deep_copy);  
  
  return 0; 
}
