"# software-architecture" 

This is Phase 3.
For TAArrayEvery, every time i create an object, i insert into a hash table the type of the object as string in the key part, and a pointer to the object itself in the value part.
For every class, I have a create Array function that create an array of the specific type.
That way, when I want to create an array, I get the typename of the object using typeid(object).name() and then I go into the hashtable and get a pointer to the object. 
I then use this object to create an array of this specific type.
The ArrayAccess's set function is not working. I think it might be from the TAArray's [] operator overloading. I will check this out shortly.
