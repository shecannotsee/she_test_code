//
// Created by  shecannotsee on 2023/1/14.
//
#include <iostream>
#include "method_1.h"
#include "method_2_make_tuple.h"
#include "method_3.h"
#include "t4_type_traits.h"

int main() {
  std::cout<<"Template Metaprogramming test start.\n";
  // method_1::main();
  // method_2_make_tuple::main();
  // method_3::main();
  t4_type_traits::run();
  std::cout<<"Template Metaprogramming test end.\n";
  return 0;
};
