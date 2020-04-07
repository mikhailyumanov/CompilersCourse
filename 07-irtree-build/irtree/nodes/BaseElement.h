#pragma once

#include "../visitors/Visitor.h"
namespace IRT {

class BaseElement {
 public:
  virtual ~BaseElement();
  virtual void Accept(Visitor* visitor) = 0;
};
}
