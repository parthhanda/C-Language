// An abstract class is like a blueprint for a house , we can't live in blueprint it needs to be turned into a real house(real class/derived class).
// We can't create an object derictly from an abstract class , you need to create a new class to use the abstract class.
// It can have a concern that don't have any details.
// Order of execution of constructor and destructor ->
// For constructor, first print base class then derived class.
// For destructor, first delete derived class then base class.
// Virtual function provide a way to use a common interface, while allow different behaviour in derived class.
// QUESTION ->
// Design a simple proocessing system in c++ while using an abstract class with few virtual function implements sub class for credit card payment and phonpe payment each  providing their own implementation. Write a function to process payment and demonstrate uses in the main function with dyanmaic object creation and proper clean up. Ensure each sub class print a message in its destructor.