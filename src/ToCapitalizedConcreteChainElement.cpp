#include <cctype>
#include "ToCapitalizedConcreteChainElement.hpp"

ToCapitalizedConcreteChainElement::ToCapitalizedConcreteChainElement()
   {
   this->setNext(NULL);
   }

ToCapitalizedConcreteChainElement::~ToCapitalizedConcreteChainElement()
   {
   this->setNext(NULL);
   }

string ToCapitalizedConcreteChainElement::getName()
   {
   return (this->name);
   }

/**
 *	Transforma a primeira letra de uma string em maiuscula
 */
void ToCapitalizedConcreteChainElement::internalProcessing(MyDataObject* value)
   {
   string buffer = value->getValue();
   
   for(int count = 0; count < buffer.size(); count++){
         if (count == 0){
            buffer.at(count) = toupper(buffer.at(count));   
         }else if(buffer.at(count-1) == ' '){
            buffer.at(count) = toupper(buffer.at(count));   
         }else{
            buffer.at(count) = tolower(buffer.at(count));
         }
   }
   value->setValue(buffer);
   }
