#include "farm.h"


Animal::Animal(){

	voice = "default value";
}
Animal::~Animal() { }

Dog::Dog(){
    sign = "D";
    voice = "hau";
}
Dog::~Dog(){ }

Cat::Cat(){
    sign = "C";
    voice = "meow";
}
Cat::~Cat(){ }

Cow::Cow(){
    sign = "CO";
    voice = "moooo";
}
Cow::~Cow(){ }
