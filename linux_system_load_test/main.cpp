//
// Created by shecannotsee on 2022/12/9.
//
#include <iostream>
//#include "getMemory.h"
//#include "getCpu.h"
//#include "get_process_cpu_memory.h"
//#include "get_ip.h"
//#include "ping_url.h"
//#include "getAllIp.h"
//#include "store.h"
//#include "get_dir_store.h"
//#include "get_dir_files.h"
// #include "get_file_info.h"
// #include "get_file_store.h"
// #include "get_file_incremental_content.h"
// #include "get_file_update.h"
#include "file_dir_temp.h"

int main (int argc,char* argv[],char* env[]) {
  for (int i = 0; i < argc; i++) {
    std::cout<<argv[i]<<"\n";
  }

  for (int i = 0; env[i] != nullptr; i++) {
    // std::cout << env[i] << std::endl;
  }
  // getMemory::main();
  // getCpu::main();
  // get_process_cpu_memory::main();
  // get_ip::main();
  // ping_url::main();
  // get_all_ip::main();
  // store::main();
  // get_dir_store::main();
  // get_dir_files::main();
  // get_file_info::main();
  // get_file_store::main();
  // get_file_incremental_content::main();
  // get_file_update::main();
  file_dir_temp::main();

  return 0;
}
