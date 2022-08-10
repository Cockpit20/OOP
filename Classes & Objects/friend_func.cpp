// NOTES: Friend Functions -

// Friend function is a non member function of the class.
// It is declared or defined in any visibility of the class without affecting its meaning.
// If we declare a friend function within a class and define it outside then it has to be defined like normal functions without class name and scope resolution operator.
// The keyword friend is used to make a function friendly to the class.
// A friend function cannot access members of a class directly.
// However it can access the properties of that instance/object which is passed as argument.
// This violates the principles of OOP(security, data hiding, accessibilty). Data hiding members are private. Only member functions can access. A friendly function is still able to access when the object is passed as argument.