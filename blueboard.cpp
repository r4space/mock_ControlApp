//
// Created by jwyngaard on 1/14/20.
//

#include "blueboard.h"
blueboard::blueboard(double m) {
multiplier = m;
}

double blueboard::mul(int a) {
  return a*multiplier;
}
