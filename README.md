"# software-architecture" 

This is Phase 3.
I only implimented TAConstant and TAPair until now. 
Concerning TAArray i have an idea that I still need to see how I can implement it. 
The idea is as follows: Every time i create an object, i insert into a global has table the type of the object as string in the key part, and a pointer to the object in the value part.
For every class, I have a create Array function that create an array of the specific type.
That way, when I want to create an array, I get the typename of the object using typeid(object).name() and then I go into the hasttable and get a pointer to the object. 
I then use this object to create an array of this specific type. 
When I'm done with that, the ize and access function will be simple to implement.  
